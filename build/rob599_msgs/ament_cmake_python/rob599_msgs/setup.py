from setuptools import find_packages
from setuptools import setup

setup(
    name='rob599_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('rob599_msgs', 'rob599_msgs.*')),
)
