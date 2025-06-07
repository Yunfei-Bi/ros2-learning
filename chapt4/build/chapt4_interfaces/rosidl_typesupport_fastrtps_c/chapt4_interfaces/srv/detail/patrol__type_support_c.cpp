// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from chapt4_interfaces:srv/Patrol.idl
// generated code does not contain a copyright notice
#include "chapt4_interfaces/srv/detail/patrol__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "chapt4_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "chapt4_interfaces/srv/detail/patrol__struct.h"
#include "chapt4_interfaces/srv/detail/patrol__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Patrol_Request__ros_msg_type = chapt4_interfaces__srv__Patrol_Request;

static bool _Patrol_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Patrol_Request__ros_msg_type * ros_message = static_cast<const _Patrol_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target_x
  {
    cdr << ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr << ros_message->target_y;
  }

  return true;
}

static bool _Patrol_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Patrol_Request__ros_msg_type * ros_message = static_cast<_Patrol_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target_x
  {
    cdr >> ros_message->target_x;
  }

  // Field name: target_y
  {
    cdr >> ros_message->target_y;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chapt4_interfaces
size_t get_serialized_size_chapt4_interfaces__srv__Patrol_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Patrol_Request__ros_msg_type * ros_message = static_cast<const _Patrol_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name target_x
  {
    size_t item_size = sizeof(ros_message->target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_y
  {
    size_t item_size = sizeof(ros_message->target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Patrol_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_chapt4_interfaces__srv__Patrol_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chapt4_interfaces
size_t max_serialized_size_chapt4_interfaces__srv__Patrol_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: target_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Patrol_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_chapt4_interfaces__srv__Patrol_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Patrol_Request = {
  "chapt4_interfaces::srv",
  "Patrol_Request",
  _Patrol_Request__cdr_serialize,
  _Patrol_Request__cdr_deserialize,
  _Patrol_Request__get_serialized_size,
  _Patrol_Request__max_serialized_size
};

static rosidl_message_type_support_t _Patrol_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Patrol_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, Patrol_Request)() {
  return &_Patrol_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "chapt4_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__struct.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Patrol_Response__ros_msg_type = chapt4_interfaces__srv__Patrol_Response;

static bool _Patrol_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Patrol_Response__ros_msg_type * ros_message = static_cast<const _Patrol_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << ros_message->result;
  }

  return true;
}

static bool _Patrol_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Patrol_Response__ros_msg_type * ros_message = static_cast<_Patrol_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr >> ros_message->result;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chapt4_interfaces
size_t get_serialized_size_chapt4_interfaces__srv__Patrol_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Patrol_Response__ros_msg_type * ros_message = static_cast<const _Patrol_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Patrol_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_chapt4_interfaces__srv__Patrol_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chapt4_interfaces
size_t max_serialized_size_chapt4_interfaces__srv__Patrol_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Patrol_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_chapt4_interfaces__srv__Patrol_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Patrol_Response = {
  "chapt4_interfaces::srv",
  "Patrol_Response",
  _Patrol_Response__cdr_serialize,
  _Patrol_Response__cdr_deserialize,
  _Patrol_Response__get_serialized_size,
  _Patrol_Response__max_serialized_size
};

static rosidl_message_type_support_t _Patrol_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Patrol_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, Patrol_Response)() {
  return &_Patrol_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "chapt4_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "chapt4_interfaces/srv/patrol.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Patrol__callbacks = {
  "chapt4_interfaces::srv",
  "Patrol",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, Patrol_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, Patrol_Response)(),
};

static rosidl_service_type_support_t Patrol__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Patrol__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, Patrol)() {
  return &Patrol__handle;
}

#if defined(__cplusplus)
}
#endif
