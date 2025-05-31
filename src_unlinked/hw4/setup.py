import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'hw4'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mike54pfeiffer',
    maintainer_email='pfeiffmi@oregonstate.edu',
    description='ROB599 - hw4 - Mimic a NASA launch sequence',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "oscope = hw4.oscope:main_oscope",
            "limiter = hw4.oscope:main_limiter",
            "nasa = hw4.nasa:main",
            "rocket_launcher.with_cancel = hw4.launch_rocket:with_cancel",
            "rocket_launcher.without_cancel = hw4.launch_rocket:without_cancel"
        ],
    },
)
