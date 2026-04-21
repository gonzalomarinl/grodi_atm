from setuptools import find_packages
from setuptools import setup

setup(
    name='atm_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('atm_interfaces', 'atm_interfaces.*')),
)
