from setuptools import find_packages, setup

package_name = 'hw3'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mike54pfeiffer',
    maintainer_email='pfeiffmi@oregonstate.edu',
    description='Package as part of the homework 3 to a latency estimator with a service to enable logging',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            # data sender
            "data_sender = hw3.data_sender:main",
            "data_sender.start = hw3.a:start_data_client",
            "data_sender.stop = hw3.a:stop_data_client",
            # data receiver
            "data_receiver = hw3.data_receiver:main",
            "data_receiver.log.start = hw3.data_receiver:start_logging_client",
            "data_receiver.log.stop = hw3.data_receiver:stop_logging_client",
        ],
    },
)
