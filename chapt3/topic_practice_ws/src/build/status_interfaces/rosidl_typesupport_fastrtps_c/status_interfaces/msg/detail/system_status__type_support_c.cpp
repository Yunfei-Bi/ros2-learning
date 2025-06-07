// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from status_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice
#include "status_interfaces/msg/detail/system_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "status_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "status_interfaces/msg/detail/system_status__struct.h"
#include "status_interfaces/msg/detail/system_status__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp
#include "rosidl_runtime_c/string.h"  // host_name
#include "rosidl_runtime_c/string_functions.h"  // host_name

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_status_interfaces
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_status_interfaces
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_status_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _SystemStatus__ros_msg_type = status_interfaces__msg__SystemStatus;

static bool _SystemStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SystemStatus__ros_msg_type * ros_message = static_cast<const _SystemStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  // Field name: host_name
  {
    const rosidl_runtime_c__String * str = &ros_message->host_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: cpu_percent
  {
    cdr << ros_message->cpu_percent;
  }

  // Field name: memory_percent
  {
    cdr << ros_message->memory_percent;
  }

  // Field name: memory_total
  {
    cdr << ros_message->memory_total;
  }

  // Field name: memory_available
  {
    cdr << ros_message->memory_available;
  }

  // Field name: net_sent
  {
    cdr << ros_message->net_sent;
  }

  // Field name: net_recv
  {
    cdr << ros_message->net_recv;
  }

  return true;
}

static bool _SystemStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SystemStatus__ros_msg_type * ros_message = static_cast<_SystemStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  // Field name: host_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->host_name.data) {
      rosidl_runtime_c__String__init(&ros_message->host_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->host_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'host_name'\n");
      return false;
    }
  }

  // Field name: cpu_percent
  {
    cdr >> ros_message->cpu_percent;
  }

  // Field name: memory_percent
  {
    cdr >> ros_message->memory_percent;
  }

  // Field name: memory_total
  {
    cdr >> ros_message->memory_total;
  }

  // Field name: memory_available
  {
    cdr >> ros_message->memory_available;
  }

  // Field name: net_sent
  {
    cdr >> ros_message->net_sent;
  }

  // Field name: net_recv
  {
    cdr >> ros_message->net_recv;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_status_interfaces
size_t get_serialized_size_status_interfaces__msg__SystemStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SystemStatus__ros_msg_type * ros_message = static_cast<const _SystemStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name host_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->host_name.size + 1);
  // field.name cpu_percent
  {
    size_t item_size = sizeof(ros_message->cpu_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name memory_percent
  {
    size_t item_size = sizeof(ros_message->memory_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name memory_total
  {
    size_t item_size = sizeof(ros_message->memory_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name memory_available
  {
    size_t item_size = sizeof(ros_message->memory_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name net_sent
  {
    size_t item_size = sizeof(ros_message->net_sent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name net_recv
  {
    size_t item_size = sizeof(ros_message->net_recv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SystemStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_status_interfaces__msg__SystemStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_status_interfaces
size_t max_serialized_size_status_interfaces__msg__SystemStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: host_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: cpu_percent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: memory_percent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: memory_total
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: memory_available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: net_sent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: net_recv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SystemStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_status_interfaces__msg__SystemStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SystemStatus = {
  "status_interfaces::msg",
  "SystemStatus",
  _SystemStatus__cdr_serialize,
  _SystemStatus__cdr_deserialize,
  _SystemStatus__get_serialized_size,
  _SystemStatus__max_serialized_size
};

static rosidl_message_type_support_t _SystemStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SystemStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, status_interfaces, msg, SystemStatus)() {
  return &_SystemStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
