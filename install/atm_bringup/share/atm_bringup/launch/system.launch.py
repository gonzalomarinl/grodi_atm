from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory


def generate_launch_description() -> LaunchDescription:
    master_launch = (
        get_package_share_directory("atm_master") + "/launch/master.launch.py"
    )
    slave_launch = (
        get_package_share_directory("atm_slave") + "/launch/slave.launch.py"
    )
    link_launch = (
        get_package_share_directory("atm_link") + "/launch/link.launch.py"
    )

    return LaunchDescription(
        [
            IncludeLaunchDescription(PythonLaunchDescriptionSource(master_launch)),
            IncludeLaunchDescription(PythonLaunchDescriptionSource(slave_launch)),
            IncludeLaunchDescription(PythonLaunchDescriptionSource(link_launch)),
        ]
    )
