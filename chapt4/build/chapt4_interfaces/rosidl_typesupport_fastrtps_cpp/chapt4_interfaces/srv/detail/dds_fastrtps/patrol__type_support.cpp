// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from chapt4_interfaces:srv/Patrol.idl
// generated code does not contain a copyright notice
#include "chapt4_interfaces/srv/detail/patrol__rosidl_typesupport_fastrtps_cpp.hpp"
#include "chapt4_interfaces/srv/detail/patrol__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace chapt4_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chapt4_interfaces
cdr_serialize(
  const chapt4_interfaces::srv::Patrol_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: target_x
  cdr << ros_message.target_x;
  // Member: target_y
  cdr << ros_message.target_y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chapt4_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  chapt4_interfaces::srv::Patrol_Request & ros_message)
{
  // Member: target_x
  cdr >> ros_message.target_x;

  // Member: target_y
  cdr >> ros_message.target_y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chapt4_interfaces
get_serialized_size(
  const chapt4_interfaces::srv::Patrol_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: target_x
  {
    size_t item_size = sizeof(ros_message.target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_y
  {
    size_t item_size = sizeof(ros_message.target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chapt4_interfaces
max_serialized_size_Patrol_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: target_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: target_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Patrol_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const chapt4_interfaces::srv::Patrol_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Patrol_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<chapt4_interfaces::srv::Patrol_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Patrol_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const chapt4_interfaces::srv::Patrol_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Patrol_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Patrol_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Patrol_Request__callbacks = {
  "chapt4_interfaces::srv",
  "Patrol_Request",
  _Patrol_Request__cdr_serialize,
  _Patrol_Request__cdr_deserialize,
  _Patrol_Request__get_serialized_size,
  _Patrol_Request__max_serialized_size
};

static rosidl_message_type_support_t _Patrol_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Patrol_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace chapt4_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_chapt4_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<chapt4_interfaces::srv::Patrol_Request>()
{
  return &chapt4_interfaces::srv::typesupport_fastrtps_cpp::_Patrol_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chapt4_interfaces, srv, Patrol_Request)() {
  return &chapt4_interfaces::srv::typesupport_fastrtps_cpp::_Patrol_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace chapt4_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chapt4_interfaces
cdr_serialize(
  const chapt4_interfaces::srv::Patrol_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  cdr << ros_message.result;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chapt4_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  chapt4_interfaces::srv::Patrol_Response & ros_message)
{
  // Member: result
  cdr >> ros_message.result;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chapt4_interfaces
get_serialized_size(
  const chapt4_interfaces::srv::Patrol_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result
  {
    size_t item_size = sizeof(ros_message.result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_chapt4_interfaces
max_serialized_size_Patrol_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Patrol_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const chapt4_interfaces::srv::Patrol_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Patrol_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<chapt4_interfaces::srv::Patrol_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Patrol_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const chapt4_interfaces::srv::Patrol_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Patrol_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Patrol_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Patrol_Response__callbacks = {
  "chapt4_interfaces::srv",
  "Patrol_Response",
  _Patrol_Response__cdr_serialize,
  _Patrol_Response__cdr_deserialize,
  _Patrol_Response__get_serialized_size,
  _Patrol_Response__max_serialized_size
};

static rosidl_message_type_support_t _Patrol_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Patrol_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace chapt4_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_chapt4_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<chapt4_interfaces::srv::Patrol_Response>()
{
  return &chapt4_interfaces::srv::typesupport_fastrtps_cpp::_Patrol_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chapt4_interfaces, srv, Patrol_Response)() {
  return &chapt4_interfaces::srv::typesupport_fastrtps_cpp::_Patrol_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace chapt4_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Patrol__callbacks = {
  "chapt4_interfaces::srv",
  "Patrol",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chapt4_interfaces, srv, Patrol_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chapt4_interfaces, srv, Patrol_Response)(),
};

static rosidl_service_type_support_t _Patrol__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Patrol__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace chapt4_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_chapt4_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<chapt4_interfaces::srv::Patrol>()
{
  return &chapt4_interfaces::srv::typesupport_fastrtps_cpp::_Patrol__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chapt4_interfaces, srv, Patrol)() {
  return &chapt4_interfaces::srv::typesupport_fastrtps_cpp::_Patrol__handle;
}

#ifdef __cplusplus
}
#endif
