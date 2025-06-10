from setuptools import setup

package_name = 'learn_lifecyclenode_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yunfeibi',
    maintainer_email='2277241439@qq.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'lifecyclenode = learn_lifecyclenode_py.learn_lifecyclenode:main'
        ],
    },
)
