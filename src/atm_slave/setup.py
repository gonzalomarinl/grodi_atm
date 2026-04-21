from setuptools import find_packages, setup

package_name = 'atm_slave'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/slave.launch.py']),
        ('share/' + package_name + '/config', ['config/slave_params.yaml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gonzalo',
    maintainer_email='gonzalo@todo.todo',
    description='Nodos ROS 2 de la Raspberry esclava del atomizador.',
    license='MIT',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'slave_health_publisher_node = atm_slave.slave_health_publisher_node:main',
            'slave_state_manager_node = atm_slave.slave_state_manager_node:main',
            'navigation_executor_node = atm_slave.navigation_executor_node:main',
            'vertical_atomizer_controller_node = atm_slave.vertical_atomizer_controller_node:main',
            'spray_controller_node = atm_slave.spray_controller_node:main',
        ],
    },
)
