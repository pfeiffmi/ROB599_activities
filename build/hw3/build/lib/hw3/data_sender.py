# Data Sender publisher in ROS2
#
# data_sender.py
#
# Michael Pfeiffer
#
# Publish data with a custom message interface

import rclpy
from rclpy.node import Node
import numpy as np

from hw3_interfaces.msg import TestPacket

from hw3_interfaces.srv import SetStatus
from hw3_interfaces.srv import SetLogging

class Data_Sender(Node):
    def __init__(self, data):
        # Initiallize the parent class
        super().__init__("data_sender")

        # store the data to send in each packet
        self.data = data

        # Create a service to keep track of whether or not to send the data
        self.send_data_server = Send_Data_Server()

        # Create a publisher for the node
        self.publisher = self.create_publisher(TestPacket, "data", 10)

        # Instantiate the timer at 10 Hz
        self.timer = self.create_timer(0.1, self.callback)

    def callback(self):
        # determine if messages should be published
        #if(not self.send_data_server.send_data):
        #    self.get_logger().info(f"Server set to not publish data...")
        #    return
        
        # Fill the message with the relevant data
        msg = TestPacket()
        msg.send_time = self.get_clock().now().nanoseconds
        msg.payload = self.data

        # publish the message
        self.publisher.publish(msg)
        # Log the published nmessage info
        self.get_logger().info(f"Published: [{msg.send_time/1e9}] {msg.payload}")


class Send_Data_Server(Node):
    def __init__(self):
        # Initiallize the parent class
        super().__init__('send_data')

        # Store the variable for the server 
        self.send_data = False

        # define the service
        self.service = self.create_service(SetStatus, 'send', self.callback)

    def callback(self, request, response):
        # Log that a service request was received
        self.get_logger().info(f'Request: send_data set to {request.data}')

        # set the send_data variable to match the requested boolean
        self.send_data = request.data

        # Set the response data and send the response
        response.success = True
        return response


class Send_Data_Client(Node):
    def __init__(self):
        # Initiallize the parent class
        super().__init__("send_data_client")
        
        # Define the client
        self.client = self.create_client(SetStatus, 'send')

        # Define the variables related to the response
        self.response = None
        self.call_success = None
        
        # Wait until connection is established with the server
        while(not self.client.wait_for_service(timeout_sec=1)):
            self.get_logger().info('Waiting for service to start...')
        self.get_logger().info('Service started... Connection established!')
                  
    def send_request(self, send_data):
        # Set the data for the request
        request = SetStatus.Request()
        request.data = send_data

        # Have the client call the server with the request
        self.call_success = False
        self.response = self.client.call_async(request)
        #self.get_logger().info(f'Sent request: send_data={request.data}')
    


def data_client_call(send_data):
    # initiallize the client
    send_data_client = Send_Data_Client()

    # send the request from the client to stop sending data
    send_data_client.send_request(send_data=send_data)

    while rclpy.ok():
        send_data_client.get_logger().info(f"2")
        # update nodes once in rclpy before checking status
        rclpy.spin_once(send_data_client)
        send_data_client.get_logger().info(f"3")
        # Check if the client got a response
        if(send_data_client.response.done()):
            try:
                answer = send_data_client.response.result()
            except Exception as e:
                send_data_client.get_logger().info(f"Service call failed: {e}")
            else:
                if(answer.success):
                    send_data_client.get_logger().info(f"Send_Data on Server is now set to {send_data}")
                else:
                    send_data_client.get_logger().info(f"Service call failed: Server returned with unsuccessful state")
                return
        else:
            send_data_client.get_logger().info(f"Waiting for client call to finish...")


def stop_data_client(args=None):
    # initiallize the ROS2 client library
    rclpy.init(args=args)
    # use the client to stop sending data
    data_client_call(send_data=False)
    # Shut things down when we're done.
    rclpy.shutdown()


def start_data_client(args=None):
    # initiallize the ROS2 client library
    rclpy.init(args=args)
    # use the client to start sending data
    data_client_call(send_data=True)
    # Shut things down when we're done.
    rclpy.shutdown()


def main(args=None):
    # initiallize the ROS2 Client Library for Python
    rclpy.init(args=args)
    
    # Initiallize the data sender
    #data = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
    data = np.random.rand(200*300)
    data_sender = Data_Sender(data=data)

    # Give control of thread to ROS2
    rclpy.spin(data_sender)

    # Clean shutdown
    rclpy.shutdown()