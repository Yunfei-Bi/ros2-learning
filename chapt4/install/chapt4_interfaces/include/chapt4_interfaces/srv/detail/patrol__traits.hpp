// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chapt4_interfaces:srv/Patrol.idl
// generated code does not contain a copyright notice

#ifndef CHAPT4_INTERFACES__SRV__DETAIL__PATROL__TRAITS_HPP_
#define CHAPT4_INTERFACES__SRV__DETAIL__PATROL__TRAITS_HPP_

#include "chapt4_interfaces/srv/detail/patrol__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chapt4_interfaces::srv::Patrol_Request>()
{
  return "chapt4_interfaces::srv::Patrol_Request";
}

template<>
inline const char * name<chapt4_interfaces::srv::Patrol_Request>()
{
  return "chapt4_interfaces/srv/Patrol_Request";
}

template<>
struct has_fixed_size<chapt4_interfaces::srv::Patrol_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chapt4_interfaces::srv::Patrol_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chapt4_interfaces::srv::Patrol_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chapt4_interfaces::srv::Patrol_Response>()
{
  return "chapt4_interfaces::srv::Patrol_Response";
}

template<>
inline const char * name<chapt4_interfaces::srv::Patrol_Response>()
{
  return "chapt4_interfaces/srv/Patrol_Response";
}

template<>
struct has_fixed_size<chapt4_interfaces::srv::Patrol_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chapt4_interfaces::srv::Patrol_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chapt4_interfaces::srv::Patrol_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chapt4_interfaces::srv::Patrol>()
{
  return "chapt4_interfaces::srv::Patrol";
}

template<>
inline const char * name<chapt4_interfaces::srv::Patrol>()
{
  return "chapt4_interfaces/srv/Patrol";
}

template<>
struct has_fixed_size<chapt4_interfaces::srv::Patrol>
  : std::integral_constant<
    bool,
    has_fixed_size<chapt4_interfaces::srv::Patrol_Request>::value &&
    has_fixed_size<chapt4_interfaces::srv::Patrol_Response>::value
  >
{
};

template<>
struct has_bounded_size<chapt4_interfaces::srv::Patrol>
  : std::integral_constant<
    bool,
    has_bounded_size<chapt4_interfaces::srv::Patrol_Request>::value &&
    has_bounded_size<chapt4_interfaces::srv::Patrol_Response>::value
  >
{
};

template<>
struct is_service<chapt4_interfaces::srv::Patrol>
  : std::true_type
{
};

template<>
struct is_service_request<chapt4_interfaces::srv::Patrol_Request>
  : std::true_type
{
};

template<>
struct is_service_response<chapt4_interfaces::srv::Patrol_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CHAPT4_INTERFACES__SRV__DETAIL__PATROL__TRAITS_HPP_
