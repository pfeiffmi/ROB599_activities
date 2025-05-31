#!/usr/bin/env python3

# Oscope publisher with optional params in ROS2
#
# oscope.py
#
# Michael Pfeiffer
#
# Code modified from Bill Smart for ROB599: https://github.com/OSUrobotics/rob599


# Import needed packages
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

from rcl_interfaces.msg import ParameterDescriptor

import numpy as np


class Oscope(Node):
	def __init__(self):
		# Initiallize the base class
		super().__init__('publisher')

		# Create a parameters for the Oscope
		freq_parameter_descriptor = ParameterDescriptor(description='Parameter for the frequency of the oscope wave')
		self.declare_parameter('frequency', 1.0, freq_parameter_descriptor)

		name_parameter_descriptor = ParameterDescriptor(description='Parameter for the name of the publisher topic')
		self.declare_parameter('pub_topic_name', "oscope", name_parameter_descriptor)

        # Instantiate the oscope publisher
		pub_topic_name = self.get_parameter('pub_topic_name').get_parameter_value().string_value
		self.pub = self.create_publisher(
			Float32, 
			pub_topic_name, 
			10
		)
		
        # Instantiate the timer at 100 Hz
		self.timer = self.create_timer(0.1, self.callback)
		
        # Initiallize the counter and rate
		self.counter = 0

	# This callback will be called every time the timer fires.
	def callback(self):
	    # Instantiate a float 32 message
		msg = Float32()
		
        # Compute and store the message contents (1 Hz sine wave)
		rad = (self.counter/100.0)*2*np.pi
		freq = self.get_parameter("frequency").get_parameter_value().double_value
		msg.data = np.sin(freq*rad)
		
		# Publish the message
		self.pub.publish(msg)

		# Log the published nmessage info
		self.get_logger().info(f'Published {msg.data}')

		# Increment the counter
		self.counter += 1


class Limiter(Node):
	def __init__(self):
		# Initiallize the base class
		super().__init__('publisher_subscriber')

		# Create a parameters for the Clamp
		clamp_parameter_descriptor = ParameterDescriptor(description='Parameter for the clamp bound of the oscope wave')
		self.declare_parameter('clamp', 0.5, clamp_parameter_descriptor)

		name_parameter_descriptor = ParameterDescriptor(description='Parameter for the name of the subscriber topic')
		self.declare_parameter('sub_topic_name', "oscope", name_parameter_descriptor)

		name_parameter_descriptor = ParameterDescriptor(description='Parameter for the name of the publisher topic')
		self.declare_parameter('pub_topic_name', "limiter", name_parameter_descriptor)

        # Instantiate the limiter subscriber and publisher
		self.pub = self.create_publisher(
			Float32, 
			self.get_parameter('pub_topic_name').get_parameter_value().string_value, 
			10
		)
		self.sub = self.create_subscription(
			Float32, 
			self.get_parameter('sub_topic_name').get_parameter_value().string_value, 
			self.callback, 
			10
		)
		
        # Initiallize the counter and rate
		self.counter = 0

	# This callback will be called every time data from the subscriber is received
	def callback(self, sub_msg):
	    # Get the value of the message
		data = sub_msg.data

		# Limit the value of the data
		absolute_limit = self.get_parameter('clamp').get_parameter_value().double_value
		if(data > absolute_limit):
			data = absolute_limit

		elif(data < -absolute_limit):
			data = -absolute_limit
		
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

	publisher = Oscope()

	# Give control over to ROS2
	rclpy.spin(publisher)

	# Shutdown everything cleanly
	rclpy.shutdown()


def main_limiter(args=None):
	# Initialize rclpy
	rclpy.init(args=args)

	subscriber_publisher = Limiter()

	# Give control over to ROS2
	rclpy.spin(subscriber_publisher)

	# Shutdown everything cleanly
	rclpy.shutdown()


# Call main if running script directly
if __name__ == '__main__':
	main_oscope()
