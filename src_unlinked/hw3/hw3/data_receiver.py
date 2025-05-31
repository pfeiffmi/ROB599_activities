# Data Sender publisher in ROS2
#
# data_receiver.py
#
# Michael Pfeiffer
#
# Subscribe to data coming from the data publisher node

import rclpy
from rclpy.node import Node

from hw3_interfaces.msg import TestPacket
from std_msgs.msg import Float32

from hw3_interfaces.srv import SetStatus
from hw3_interfaces.srv import SetLogging

class Data_Receiver(Node):
    def __init__(self, log_data):
        # Initiallize the parent class
        super().__init__("data_receiver")

        # store the decision to log data or not
        self.log_data = log_data

        self.latency_calculations = [0]*10
        self.index = 0

        # Create a service to keep track of whether or not to log info
        self.log_data_server = Log_Data_Server()

        # Create a subscriber for the node
        self.subscriber = self.create_subscription(TestPacket, "data", self.callback, 10)

        # Create publishers for the node
        self.publisher_raw_latency = self.create_publisher(Float32, "raw_latency", 10)
        self.publisher_mean_latency = self.create_publisher(Float32, "latency", 10)


    def callback(self, msg):
        # Indicate that a message was received
        #self.get_logger().info(f"Got: [{msg.send_time/1e9}] {msg.payload}")

        # compute the latency in ms by using the message's stored time
        current_time_ms = (self.get_clock().now().nanoseconds)/1e6
        message_time_ms = (msg.send_time)/1e6
        latency_time_ms = current_time_ms - message_time_ms

        # publish the raw latency reading
        raw_latency_msg = Float32()
        raw_latency_msg.data = latency_time_ms
        self.publisher_raw_latency.publish(raw_latency_msg)
        self.get_logger().info(f"Publishing Raw Latency (ms): {raw_latency_msg.data}")

        # calculate the running average of the last 10 latency readings
        self.latency_calculations[self.index] = latency_time_ms
        self.index = (self.index + 1)%10
        mean_latency_ms = sum(self.latency_calculations)/10

        # publish the mean latency reading
        mean_latency_msg = Float32()
        mean_latency_msg.data = mean_latency_ms
        self.publisher_mean_latency.publish(mean_latency_msg)
        self.get_logger().info(f"Publishing Mean Latency (ms): {mean_latency_msg.data}")

        # determine whether to log data or not
        if(self.log_data_server.log_data):
            with open(self.log_data_server.log_file, 'a') as file:
                file.write(f"{current_time_ms},{latency_time_ms},{mean_latency_ms},\n")


class Log_Data_Server(Node):
    def __init__(self):
        # Initiallize the parent class
        super().__init__('enable_logging')

        # Store the variable for the server 
        self.log_data = False
        self.log_file = None

        # define the service
        self.service = self.create_service(SetLogging, 'log', self.callback)

    def callback(self, request, response):
        # Log that a service request was received
        self.get_logger().info(f'Request: begin logging to {request.log_file}')

        # set the logging variables
        self.log_data = request.log_data
        self.log_file = request.log_file

        # Set the response data and send the response
        response.success = True
        return response



class Log_Data_Client(Node):
    def __init__(self):
        # Initiallize the parent class
        super().__init__("log_data_client")
        
        # Define the client
        self.client = self.create_client(SetLogging, 'log')

        # Define the response data member
        self.response = None
        
        # Wait until connection is established with the server
        while(not self.client.wait_for_service(timeout_sec=1)):
            self.get_logger().info('Waiting for service to start...')
        self.get_logger().info('Service started... Connection established!')
                  
    def send_request(self, log_data, log_file):
        # Set the data for the request
        request = SetStatus.Request()
        request.log_data = log_data
        request.log_file = log_file

        # Have the client call the server with the request
        self.response = self.client.call_async(request)
        self.get_logger().info(f'Sent request: log_data={request.log_data}; log_file={request.log_file}')


def logging_client_call(log_data, log_file):
    # initiallize the client
    log_data_client = Log_Data_Client()

    # send the request from the client to stop sending data
    log_data_client.send_request(log_data=log_data, log_file=log_file)

    # Keep looping until request is properly sent
    while rclpy.ok():
        # update nodes once in rclpy before checking status
        rclpy.spin_once(log_data_client)
        # Check if the client got a response
        if(log_data_client.response.done()):
            try:
                answer = log_data_client.response.result()
            except Exception as e:
                log_data_client.get_logger().info(f"Service call failed: {e}")
            else:
                if(answer.success):
                    log_data_client.get_logger().info(f"Logging on server to file {log_file} is set to {log_data}")
                else:
                    log_data_client.get_logger().info(f"Service call failed: Server returned with unsuccessful state")
                return
        else:
            log_data_client.get_logger().info(f"Waiting for client call to finish...")


def stop_logging_client(args=None):
    # initiallize the ROS2 client library
    rclpy.init(args=args)
    # use the client to stop logging data
    logging_client_call(log_data=False, log_file="test_log.csv")
    # Shut things down when we're done.
    rclpy.shutdown()


def start_logging_client(args=None):
    # initiallize the ROS2 client library
    rclpy.init(args=args)
    # use the client to start logging data
    logging_client_call(log_data=True, log_file="test_log.csv")
    # Shut things down when we're done.
    rclpy.shutdown()


def main(args=None):
    # initiallize the ROS2 Client Library for Python
    rclpy.init(args=args)
    
    # Initiallize the data receiver
    data_receiver = Data_Receiver(log_data=False)

    # Give control of thread to ROS2
    rclpy.spin(data_receiver)

    # Clean shutdown
    rclpy.shutdown()
