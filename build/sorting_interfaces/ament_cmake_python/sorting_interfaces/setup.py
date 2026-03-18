from setuptools import find_packages
from setuptools import setup

setup(
    name='sorting_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('sorting_interfaces', 'sorting_interfaces.*')),
)
