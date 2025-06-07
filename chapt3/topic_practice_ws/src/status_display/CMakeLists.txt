cmake_minimum_required(VERSION 3.5)
project(status_display)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(status_interfaces REQUIRED)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

add_executable(hello_qt src/hello_qt.cpp)
target_link_libraries(hello_qt Qt5::Widgets)

add_executable(sys_status_display src/sys_status_display.cpp)

# 对于非 ROS 功能包使用 CMake 原生指令进行链接库 
target_link_libraries(sys_status_display Qt5::Widgets)
ament_target_dependencies(sys_status_display rclcpp status_interfaces)

install(TARGETS
  hello_qt
  sys_status_display
  DESTINATION lib/${PROJECT_NAME})

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
