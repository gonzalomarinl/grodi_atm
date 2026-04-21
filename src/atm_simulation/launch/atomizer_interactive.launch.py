from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    world_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([FindPackageShare("atm_simulation"), "launch", "atomizer_world.launch.py"])
        )
    )

    controller_node = Node(
        package="atm_simulation",
        executable="gazebo_atomizer_controller_node",
        output="screen",
    )

    sequence_node = Node(
        package="atm_simulation",
        executable="atomizer_demo_sequence_node",
        output="screen",
        parameters=[{"autostart": False}],
    )

    console_node = Node(
        package="atm_simulation",
        executable="atomizer_operator_console_node",
        output="screen",
    )

    return LaunchDescription(
        [
            world_launch,
            TimerAction(period=2.0, actions=[controller_node]),
            TimerAction(period=4.0, actions=[sequence_node]),
            TimerAction(period=5.0, actions=[console_node]),
        ]
    )
