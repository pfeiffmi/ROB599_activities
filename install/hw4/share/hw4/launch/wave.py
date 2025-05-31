from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='hw4',
            executable='oscope',
            name='oscope_1Hz',
            output='screen',
            emulate_tty=True,
            parameters=[
                {'frequency': 1.0},
                {'pub_topic_name': 'oscope_1Hz'}
            ]
        ),

        Node(
            package='hw4',
            executable='oscope',
            name='oscope_5Hz',
            output='screen',
            emulate_tty=True,
            parameters=[
                {'frequency': 5.0},
                {'pub_topic_name': 'oscope_5Hz'}
            ]
        ),

        Node(
            package='hw4',
            executable='oscope',
            name='oscope_10Hz',
            output='screen',
            emulate_tty=True,
            parameters=[
                {'frequency': 10.0},
                {'pub_topic_name': 'oscope_10Hz'}
            ]
        ),

        Node(
            package='hw4',
            executable='limiter',
            name='limiter_70pct',
            output='screen',
            emulate_tty=True,
            parameters=[
                {'clamp': 0.7},
                {'sub_topic_name': 'oscope_10Hz'},
                {'pub_topic_name': 'limiter_70pct'}
            ]
        ),

        # Taken from: https://www.youtube.com/watch?v=MnMGjvYxlUk
        ExecuteProcess(
            cmd = ["ros2", "run", "plotjuggler", "plotjuggler"],
            output = "screen",
            shell = True
        ),
    ])