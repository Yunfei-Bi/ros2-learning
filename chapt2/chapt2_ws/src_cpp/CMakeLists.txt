cmake_minimum_required(VERSION 3.5)
project(demo_cpp_pkg)

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
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

# 1. 查找 rclcpp 头文件和库
find_package(rclcpp REQUIRED)
# 2. 添加可知性文件 cpp_node
add_executable(cpp_node src/cpp_node.cpp)
# 3. 为 cpp_node 添加依赖
ament_target_dependencies(cpp_node rclcpp)

add_executable(person_node src/person_node.cpp)
ament_target_dependencies(person_node rclcpp)

add_executable(learn_auto src/learn_auto.cpp)
ament_target_dependencies(learn_auto rclcpp)

add_executable(learn_shared_ptr src/learn_shared_ptr.cpp)
ament_target_dependencies(learn_shared_ptr rclcpp)

add_executable(learn_lambda src/learn_lambda.cpp)
ament_target_dependencies(learn_lambda rclcpp)

add_executable(learn_function src/learn_function.cpp)
ament_target_dependencies(learn_function rclcpp)

add_executable(learn_thread src/learn_thread.cpp)
ament_target_dependencies(learn_thread rclcpp)

# 4. 将 cpp_node 拷贝到 install 目录下
install(TARGETS
  cpp_node
  person_node
  learn_auto
  learn_shared_ptr
  learn_lambda
  learn_function
  learn_thread
  DESTINATION lib/${PROJECT_NAME}
)




if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  set(ament_cmake_copyright_FOUND TRUE) # 跳过版权检查
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  set(ament_cmake_cpplint_FOUND TRUE) # 跳过 ament_cmake_cpplint 工具的检查，该工具用于检查 C++ 代码是否符合 Google C++ 风格指南。
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
