// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from status_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef STATUS_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
#define STATUS_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_

#include "status_interfaces/msg/detail/system_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<status_interfaces::msg::SystemStatus>()
{
  return "status_interfaces::msg::SystemStatus";
}

template<>
inline const char * name<status_interfaces::msg::SystemStatus>()
{
  return "status_interfaces/msg/SystemStatus";
}

template<>
struct has_fixed_size<status_interfaces::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<status_interfaces::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<status_interfaces::msg::SystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STATUS_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
