from setuptools import find_packages, setup

package_name = 'hw2'

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
    description='Package as part of the homework 2 to have an oscope with variable frequecies and a limiter publish data',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "oscope = hw2.oscope:main_oscope",
            "slow_wave = hw2.oscope:main_slow",
            "fast_wave = hw2.oscope:main_fast",
            "limiter = hw2.oscope:main_limiter"
        ],
    },
)
