#!/usr/bin/env python3

# Action Server for simulating a rocket launch sequence in ROS2
#
# nasa.py
#
# Michael Pfeiffer
#
# Code modified from Bill Smart for ROB599: https://github.com/OSUrobotics/rob599


import rclpy
import rclpy.logging
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse

from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

from hw4_interfaces.action import RocketLaunch

from time import sleep


def countdown(n):
	if(n == 0):
		rclpy.logging.get_logger("Countdown").info("Lift off!")
		sleep(1)
	elif(n >= 1 and n <= 10):
		rclpy.logging.get_logger("Countdown").info(f"{n}...")
		sleep(1)
	elif(n == 11):
		rclpy.logging.get_logger("Countdown").info(f"All systems go! Beginning final countdown!")
		sleep(1)
	elif(n == 15):
		rclpy.logging.get_logger("Countdown").info(f"Station 1: Status Report...")
		sleep(1)
		return(-n)
	elif(n == 22):
		rclpy.logging.get_logger("Countdown").info(f"Station 2: Status Report...")
		sleep(1)
		return(-n)
	elif(n == 31):
		rclpy.logging.get_logger("Countdown").info(f"Station 3: Status Report...")
		sleep(1)
		return(-n)
	elif(n == 45):
		rclpy.logging.get_logger("Countdown").info(f"Station 4: Status Report...")
		sleep(1)
		return(-n)
	elif(n == 55):
		rclpy.logging.get_logger("Countdown").info(f"Station 5: Status Report...")
		sleep(1)
		return(-n)
	else:
		rclpy.logging.get_logger("Countdown").info(f"{n}...")
		sleep(1)
	return(n)

class RocketLaunchActionServer(Node):
	def __init__(self):
		# Initialize the superclass
		super().__init__('nasa')

		self.server = ActionServer(
			self, 
			RocketLaunch, 
			'rocket_launch', 
			self.callback,
			cancel_callback = self.cancel_callback,
			callback_group = ReentrantCallbackGroup()
		)

	def callback(self, goal):
		self.get_logger().info(f'Initiating launch in T-minus {goal.request.number} seconds!')

		result = RocketLaunch.Result()
		result.sequence = []

		for i in range(goal.request.number, -1, -1):
			if(goal.is_cancel_requested):
				goal.canceled()
				self.get_logger().info('Aborting launch...')
				return(RocketLaunch.Result())

			countdown_result = countdown(i)
			result.sequence.append(countdown_result)
			goal.publish_feedback(RocketLaunch.Feedback(progress=countdown_result))

		goal.succeed()
		self.get_logger().info(f'Result: {list(result.sequence)}')
		return result

	def cancel_callback(self, goal_handle):
		self.get_logger().info('Countdown sequence aborted!')
		return(CancelResponse.ACCEPT)


# This is the entry point.
def main(args=None):
	# Initialize rclpy.
	rclpy.init(args=args)

	# Set up a node to do the work.
	server = RocketLaunchActionServer()

	# Give control over to ROS2.  To make the goal cancelation work, we need a
	# multithreaded executor here.  If we don't need goal cancelation, we can
	# use the default executor.
	rclpy.spin(server, MultiThreadedExecutor())

	# Make sure we shut down politely.
	rclpy.shutdown()


# This is the entry point for running the node directly from the command line.
if __name__ == '__main__':
	main()
