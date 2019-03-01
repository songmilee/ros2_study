from setuptools import setup
 
package_name = 'service'
 
setup(
    name=package_name,
    version='0.0.0',
    packages=[],
    py_modules=[
        'py_srv',
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    author='user',
    author_email="user@todo.todo",
    maintainer='user',
    maintainer_email="user@todo.todo",
    keywords=['ROS', 'ROS2'],
    classifiers=[
        'Intended Audience :: Developers',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Topic :: Software Development',
    ],
    description='TODO: Package description.',
    license='Apache License, Version 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'py_srv = py_srv:main',
        ],
    },
)
