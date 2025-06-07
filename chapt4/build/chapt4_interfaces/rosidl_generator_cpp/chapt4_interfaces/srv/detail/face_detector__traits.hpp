// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chapt4_interfaces:srv/FaceDetector.idl
// generated code does not contain a copyright notice

#ifndef CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECTOR__TRAITS_HPP_
#define CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECTOR__TRAITS_HPP_

#include "chapt4_interfaces/srv/detail/face_detector__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chapt4_interfaces::srv::FaceDetector_Request>()
{
  return "chapt4_interfaces::srv::FaceDetector_Request";
}

template<>
inline const char * name<chapt4_interfaces::srv::FaceDetector_Request>()
{
  return "chapt4_interfaces/srv/FaceDetector_Request";
}

template<>
struct has_fixed_size<chapt4_interfaces::srv::FaceDetector_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<chapt4_interfaces::srv::FaceDetector_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<chapt4_interfaces::srv::FaceDetector_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chapt4_interfaces::srv::FaceDetector_Response>()
{
  return "chapt4_interfaces::srv::FaceDetector_Response";
}

template<>
inline const char * name<chapt4_interfaces::srv::FaceDetector_Response>()
{
  return "chapt4_interfaces/srv/FaceDetector_Response";
}

template<>
struct has_fixed_size<chapt4_interfaces::srv::FaceDetector_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<chapt4_interfaces::srv::FaceDetector_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<chapt4_interfaces::srv::FaceDetector_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chapt4_interfaces::srv::FaceDetector>()
{
  return "chapt4_interfaces::srv::FaceDetector";
}

template<>
inline const char * name<chapt4_interfaces::srv::FaceDetector>()
{
  return "chapt4_interfaces/srv/FaceDetector";
}

template<>
struct has_fixed_size<chapt4_interfaces::srv::FaceDetector>
  : std::integral_constant<
    bool,
    has_fixed_size<chapt4_interfaces::srv::FaceDetector_Request>::value &&
    has_fixed_size<chapt4_interfaces::srv::FaceDetector_Response>::value
  >
{
};

template<>
struct has_bounded_size<chapt4_interfaces::srv::FaceDetector>
  : std::integral_constant<
    bool,
    has_bounded_size<chapt4_interfaces::srv::FaceDetector_Request>::value &&
    has_bounded_size<chapt4_interfaces::srv::FaceDetector_Response>::value
  >
{
};

template<>
struct is_service<chapt4_interfaces::srv::FaceDetector>
  : std::true_type
{
};

template<>
struct is_service_request<chapt4_interfaces::srv::FaceDetector_Request>
  : std::true_type
{
};

template<>
struct is_service_response<chapt4_interfaces::srv::FaceDetector_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CHAPT4_INTERFACES__SRV__DETAIL__FACE_DETECTOR__TRAITS_HPP_
