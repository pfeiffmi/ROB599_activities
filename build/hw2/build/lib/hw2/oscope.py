#!/usr/bin/env python3

# Oscope publisher in ROS2
#
# oscope.py
#
# Michael Pfeiffer
#
# Code modified from Bill Smart for ROB599: https://github.com/OSUrobotics/rob599
#
# Publish data from a 1 Hz sine wave at 100 Hz


# Import needed packages
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

import numpy as np


class Oscope(Node):
	def __init__(self, rate_hz=1):
		# Initiallize the base class
		super().__init__('publisher')

        # Instantiate the oscope publisher
		self.pub = self.create_publisher(Float32, 'oscope', 10)
		
        # Instantiate the timer at 100 Hz
		self.timer = self.create_timer(0.01, self.callback)
		
        # Initiallize the counter and rate
		self.counter = 0
		self.rate_hz = rate_hz

	# This callback will be called every time the timer fires.
	def callback(self):
	    # Instantiate a float 32 message
		msg = Float32()
		
        # Compute and store the message contents (1 Hz sine wave)
		rad = (self.counter/100.0)*2*np.pi
		msg.data = np.sin(self.rate_hz*rad)
		
		# Publish the message
		self.pub.publish(msg)

		# Log the published nmessage info
		self.get_logger().info(f'Published {msg.data}')

		# Increment the counter
		self.counter += 1


class Limiter(Node):
	def __init__(self, absolute_limit=0.5):
		# Initiallize the base class
		super().__init__('publisher_subscriber')

        # Instantiate the limiter subscriber and publisher
		self.pub = self.create_publisher(Float32, 'limiter', 10)
		self.sub = self.create_subscription(Float32, 'oscope', self.callback, 10)
		
        # Initiallize the counter and rate
		self.counter = 0
		self.absolute_limit = absolute_limit

	# This callback will be called every time data from the subscriber is received
	def callback(self, sub_msg):
	    # Get the value of the message
		data = sub_msg.data

		# Limit the value of the data
		if(data > self.absolute_limit):
			data = self.absolute_limit

		elif(data < -self.absolute_limit):
			data = -self.absolute_limit
		
		# Publish limited data
		pub_msg = Float32()
		pub_msg.data = data
		
		# Publish the message
		self.pub.publish(pub_msg)

		# Log the subscribed and published nmessage info
		self.get_logger().info(f'Received {sub_msg.data}')
		self.get_logger().info(f'Published {pub_msg.data}')


def main_oscope(args=None):
	# Initialize rclpy
	rclpy.init(args=args)

	publisher = Oscope(rate_hz=1)

	# Give control over to ROS2
	rclpy.spin(publisher)

	# Shutdown everything cleanly
	rclpy.shutdown()

def main_slow(args=None):
	# Initialize rclpy
	rclpy.init(args=args)

	publisher = Oscope(rate_hz=0.5)

	# Give control over to ROS2
	rclpy.spin(publisher)

	# Shutdown everything cleanly
	rclpy.shutdown()

def main_fast(args=None):
	# Initialize rclpy
	rclpy.init(args=args)

	publisher = Oscope(rate_hz=2)

	# Give control over to ROS2
	rclpy.spin(publisher)

	# Shutdown everything cleanly
	rclpy.shutdown()

def main_limiter(args=None):
	# Initialize rclpy
	rclpy.init(args=args)

	subscriber_publisher = Limiter(absolute_limit=0.5)

	# Give control over to ROS2
	rclpy.spin(subscriber_publisher)

	# Shutdown everything cleanly
	rclpy.shutdown()


# Call main if running script directly
if __name__ == '__main__':
	main_oscope()
