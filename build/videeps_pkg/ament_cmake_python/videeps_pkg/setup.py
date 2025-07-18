from setuptools import find_packages
from setuptools import setup

setup(
    name='videeps_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('videeps_pkg', 'videeps_pkg.*')),
)
