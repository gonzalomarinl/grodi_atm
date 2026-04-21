from setuptools import find_packages, setup

package_name = 'atm_bringup'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/system.launch.py']),
        ('share/' + package_name + '/config', ['config/system_params.yaml']),
        ('share/' + package_name + '/scripts', [
            'scripts/atm_master_sentinel.py',
            'scripts/atm_slave_sentinel.py',
        ]),
        ('share/' + package_name + '/systemd', [
            'systemd/atm-master-sentinel.service',
            'systemd/atm-slave-sentinel.service',
        ]),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gonzalo',
    maintainer_email='gonzalo@todo.todo',
    description='Launch files y configuración de arranque del sistema del atomizador.',
    license='MIT',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
        ],
    },
)
