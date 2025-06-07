// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chapt4_interfaces:srv/Patrol.idl
// generated code does not contain a copyright notice

#ifndef CHAPT4_INTERFACES__SRV__DETAIL__PATROL__STRUCT_HPP_
#define CHAPT4_INTERFACES__SRV__DETAIL__PATROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__chapt4_interfaces__srv__Patrol_Request __attribute__((deprecated))
#else
# define DEPRECATED__chapt4_interfaces__srv__Patrol_Request __declspec(deprecated)
#endif

namespace chapt4_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Patrol_Request_
{
  using Type = Patrol_Request_<ContainerAllocator>;

  explicit Patrol_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_x = 0.0f;
      this->target_y = 0.0f;
    }
  }

  explicit Patrol_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_x = 0.0f;
      this->target_y = 0.0f;
    }
  }

  // field types and members
  using _target_x_type =
    float;
  _target_x_type target_x;
  using _target_y_type =
    float;
  _target_y_type target_y;

  // setters for named parameter idiom
  Type & set__target_x(
    const float & _arg)
  {
    this->target_x = _arg;
    return *this;
  }
  Type & set__target_y(
    const float & _arg)
  {
    this->target_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chapt4_interfaces::srv::Patrol_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const chapt4_interfaces::srv::Patrol_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chapt4_interfaces::srv::Patrol_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chapt4_interfaces::srv::Patrol_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chapt4_interfaces::srv::Patrol_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chapt4_interfaces::srv::Patrol_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chapt4_interfaces::srv::Patrol_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chapt4_interfaces::srv::Patrol_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chapt4_interfaces::srv::Patrol_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chapt4_interfaces::srv::Patrol_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chapt4_interfaces__srv__Patrol_Request
    std::shared_ptr<chapt4_interfaces::srv::Patrol_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chapt4_interfaces__srv__Patrol_Request
    std::shared_ptr<chapt4_interfaces::srv::Patrol_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Patrol_Request_ & other) const
  {
    if (this->target_x != other.target_x) {
      return false;
    }
    if (this->target_y != other.target_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Patrol_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Patrol_Request_

// alias to use template instance with default allocator
using Patrol_Request =
  chapt4_interfaces::srv::Patrol_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace chapt4_interfaces


#ifndef _WIN32
# define DEPRECATED__chapt4_interfaces__srv__Patrol_Response __attribute__((deprecated))
#else
# define DEPRECATED__chapt4_interfaces__srv__Patrol_Response __declspec(deprecated)
#endif

namespace chapt4_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Patrol_Response_
{
  using Type = Patrol_Response_<ContainerAllocator>;

  explicit Patrol_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit Patrol_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _result_type =
    int8_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t SUCCESS =
    1;
  static constexpr int8_t FAIL =
    0;

  // pointer types
  using RawPtr =
    chapt4_interfaces::srv::Patrol_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const chapt4_interfaces::srv::Patrol_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chapt4_interfaces::srv::Patrol_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chapt4_interfaces::srv::Patrol_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chapt4_interfaces::srv::Patrol_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chapt4_interfaces::srv::Patrol_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chapt4_interfaces::srv::Patrol_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chapt4_interfaces::srv::Patrol_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chapt4_interfaces::srv::Patrol_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chapt4_interfaces::srv::Patrol_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chapt4_interfaces__srv__Patrol_Response
    std::shared_ptr<chapt4_interfaces::srv::Patrol_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chapt4_interfaces__srv__Patrol_Response
    std::shared_ptr<chapt4_interfaces::srv::Patrol_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Patrol_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Patrol_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Patrol_Response_

// alias to use template instance with default allocator
using Patrol_Response =
  chapt4_interfaces::srv::Patrol_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t Patrol_Response_<ContainerAllocator>::SUCCESS;
template<typename ContainerAllocator>
constexpr int8_t Patrol_Response_<ContainerAllocator>::FAIL;

}  // namespace srv

}  // namespace chapt4_interfaces

namespace chapt4_interfaces
{

namespace srv
{

struct Patrol
{
  using Request = chapt4_interfaces::srv::Patrol_Request;
  using Response = chapt4_interfaces::srv::Patrol_Response;
};

}  // namespace srv

}  // namespace chapt4_interfaces

#endif  // CHAPT4_INTERFACES__SRV__DETAIL__PATROL__STRUCT_HPP_
