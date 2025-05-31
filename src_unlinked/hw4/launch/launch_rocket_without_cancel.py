from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='hw4',
            executable='nasa',
            name='nasa',
            output='screen',
            emulate_tty=True,
        ),
        Node(
            package='hw4',
            executable='rocket_launcher.without_cancel',
            name='launch_rocket',
            output='screen',
            emulate_tty=True,
        ),
    ])