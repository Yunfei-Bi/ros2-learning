// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from chapt4_interfaces:srv/FaceDetector.idl
// generated code does not contain a copyright notice
#include "chapt4_interfaces/srv/detail/face_detector__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "chapt4_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "chapt4_interfaces/srv/detail/face_detector__struct.h"
#include "chapt4_interfaces/srv/detail/face_detector__functions.h"
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

#include "sensor_msgs/msg/detail/image__functions.h"  // image

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chapt4_interfaces
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chapt4_interfaces
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chapt4_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();


using _FaceDetector_Request__ros_msg_type = chapt4_interfaces__srv__FaceDetector_Request;

static bool _FaceDetector_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FaceDetector_Request__ros_msg_type * ros_message = static_cast<const _FaceDetector_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->image, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FaceDetector_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FaceDetector_Request__ros_msg_type * ros_message = static_cast<_FaceDetector_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->image))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chapt4_interfaces
size_t get_serialized_size_chapt4_interfaces__srv__FaceDetector_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FaceDetector_Request__ros_msg_type * ros_message = static_cast<const _FaceDetector_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name image

  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->image), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FaceDetector_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_chapt4_interfaces__srv__FaceDetector_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chapt4_interfaces
size_t max_serialized_size_chapt4_interfaces__srv__FaceDetector_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: image
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__Image(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FaceDetector_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_chapt4_interfaces__srv__FaceDetector_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FaceDetector_Request = {
  "chapt4_interfaces::srv",
  "FaceDetector_Request",
  _FaceDetector_Request__cdr_serialize,
  _FaceDetector_Request__cdr_deserialize,
  _FaceDetector_Request__get_serialized_size,
  _FaceDetector_Request__max_serialized_size
};

static rosidl_message_type_support_t _FaceDetector_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FaceDetector_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, FaceDetector_Request)() {
  return &_FaceDetector_Request__type_support;
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
// #include "chapt4_interfaces/srv/detail/face_detector__struct.h"
// already included above
// #include "chapt4_interfaces/srv/detail/face_detector__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // bottom, left, right, top
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // bottom, left, right, top

// forward declare type support functions


using _FaceDetector_Response__ros_msg_type = chapt4_interfaces__srv__FaceDetector_Response;

static bool _FaceDetector_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FaceDetector_Response__ros_msg_type * ros_message = static_cast<const _FaceDetector_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: number
  {
    cdr << ros_message->number;
  }

  // Field name: use_time
  {
    cdr << ros_message->use_time;
  }

  // Field name: top
  {
    size_t size = ros_message->top.size;
    auto array_ptr = ros_message->top.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: right
  {
    size_t size = ros_message->right.size;
    auto array_ptr = ros_message->right.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: bottom
  {
    size_t size = ros_message->bottom.size;
    auto array_ptr = ros_message->bottom.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: left
  {
    size_t size = ros_message->left.size;
    auto array_ptr = ros_message->left.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _FaceDetector_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FaceDetector_Response__ros_msg_type * ros_message = static_cast<_FaceDetector_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: number
  {
    cdr >> ros_message->number;
  }

  // Field name: use_time
  {
    cdr >> ros_message->use_time;
  }

  // Field name: top
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->top.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->top);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->top, size)) {
      return "failed to create array for field 'top'";
    }
    auto array_ptr = ros_message->top.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: right
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->right.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->right);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->right, size)) {
      return "failed to create array for field 'right'";
    }
    auto array_ptr = ros_message->right.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: bottom
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bottom.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->bottom);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->bottom, size)) {
      return "failed to create array for field 'bottom'";
    }
    auto array_ptr = ros_message->bottom.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: left
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->left.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->left);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->left, size)) {
      return "failed to create array for field 'left'";
    }
    auto array_ptr = ros_message->left.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chapt4_interfaces
size_t get_serialized_size_chapt4_interfaces__srv__FaceDetector_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FaceDetector_Response__ros_msg_type * ros_message = static_cast<const _FaceDetector_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name number
  {
    size_t item_size = sizeof(ros_message->number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_time
  {
    size_t item_size = sizeof(ros_message->use_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name top
  {
    size_t array_size = ros_message->top.size;
    auto array_ptr = ros_message->top.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right
  {
    size_t array_size = ros_message->right.size;
    auto array_ptr = ros_message->right.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bottom
  {
    size_t array_size = ros_message->bottom.size;
    auto array_ptr = ros_message->bottom.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left
  {
    size_t array_size = ros_message->left.size;
    auto array_ptr = ros_message->left.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FaceDetector_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_chapt4_interfaces__srv__FaceDetector_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chapt4_interfaces
size_t max_serialized_size_chapt4_interfaces__srv__FaceDetector_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: use_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: top
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bottom
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _FaceDetector_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_chapt4_interfaces__srv__FaceDetector_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FaceDetector_Response = {
  "chapt4_interfaces::srv",
  "FaceDetector_Response",
  _FaceDetector_Response__cdr_serialize,
  _FaceDetector_Response__cdr_deserialize,
  _FaceDetector_Response__get_serialized_size,
  _FaceDetector_Response__max_serialized_size
};

static rosidl_message_type_support_t _FaceDetector_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FaceDetector_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, FaceDetector_Response)() {
  return &_FaceDetector_Response__type_support;
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
#include "chapt4_interfaces/srv/face_detector.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FaceDetector__callbacks = {
  "chapt4_interfaces::srv",
  "FaceDetector",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, FaceDetector_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, FaceDetector_Response)(),
};

static rosidl_service_type_support_t FaceDetector__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FaceDetector__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chapt4_interfaces, srv, FaceDetector)() {
  return &FaceDetector__handle;
}

#if defined(__cplusplus)
}
#endif
