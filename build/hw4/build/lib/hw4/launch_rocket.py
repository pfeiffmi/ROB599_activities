#!/usr/bin/env python3

# Action Client for simulating a rocket launch sequence in ROS2
#
# rocket_launch.py
#
# Michael Pfeiffer
#
# Code modified from Bill Smart for ROB599: https://github.com/OSUrobotics/rob599

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from hw4_interfaces.action import RocketLaunch

class RocketLaunchActionClient(Node):
    def __init__(self, with_cancel=False):
        super().__init__('launch_rocket')

        self.client = ActionClient(self, RocketLaunch, 'rocket_launch')
        self.with_cancel = with_cancel

    def send_goal(self, n):
        goal = RocketLaunch.Goal()
        goal.number = n

        self.client.wait_for_server()
        self.result = self.client.send_goal_async(goal, feedback_callback=self.feedback_cb)

        self.result.add_done_callback(self.response)
		
    def feedback_cb(self, feedback_msg):
        number = feedback_msg.feedback.progress
        if(number < 0):
            self.get_logger().info(f'Station {-number // 10} Status: Systems Go!')

        if(self.with_cancel and feedback_msg.feedback.progress == 47):
            self.get_logger().info('Cancelling countdown!')
            future = self.goal_handle.cancel_goal_async()
            future.add_done_callback(self.cancel_cb)

    def cancel_cb(self, future):
        response = future.result()

        if(len(response.goals_canceling) > 0):
            self.get_logger().info('Countdown Successfully aborted')
        else:
            self.get_logger().info('Failed to abort countdown!')			

    def response(self, future):
        self.goal_handle = future.result()

        if(not self.goal_handle.accepted):
            self.get_logger().info('Countdown rejected')
            return

        self.result_handle = self.goal_handle.get_result_async()
        self.result_handle.add_done_callback(self.process_result)

    def process_result(self, future):
        result = future.result().result
        self.get_logger().info(f'Result: {list(result.sequence)}')


def without_cancel(args=None):
    # Initialize rclpy.
    rclpy.init(args=args)

    # Set up a node to do the work.
    client = RocketLaunchActionClient(with_cancel=False)

    # Make the action call.
    client.send_goal(60)

    # Give control over to ROS2.
    rclpy.spin(client)

    # Make sure everything has shut down correctly.
    rclpy.shutdown()
	

def with_cancel(args=None):
    # Initialize rclpy.
    rclpy.init(args=args)

    # Set up a node to do the work, demonstrating action canceling.
    client = RocketLaunchActionClient(with_cancel=True)

    # Make the action call.
    client.send_goal(60)

    # Give control over to ROS2.
    rclpy.spin(client)

    # Make sure everything has shut down correctly.
    rclpy.shutdown()