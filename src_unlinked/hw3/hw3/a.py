import rclpy
from rclpy.node import Node

from hw3_interfaces.srv import SetStatus

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
        self.get_logger().info(f'Sent request: send_data={request.data}')



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