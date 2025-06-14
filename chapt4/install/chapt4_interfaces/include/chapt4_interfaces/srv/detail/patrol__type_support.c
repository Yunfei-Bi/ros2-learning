// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from chapt4_interfaces:srv/Patrol.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "chapt4_interfaces/srv/detail/patrol__rosidl_typesupport_introspection_c.h"
#include "chapt4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "chapt4_interfaces/srv/detail/patrol__functions.h"
#include "chapt4_interfaces/srv/detail/patrol__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Patrol_Request__rosidl_typesupport_introspection_c__Patrol_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chapt4_interfaces__srv__Patrol_Request__init(message_memory);
}

void Patrol_Request__rosidl_typesupport_introspection_c__Patrol_Request_fini_function(void * message_memory)
{
  chapt4_interfaces__srv__Patrol_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Patrol_Request__rosidl_typesupport_introspection_c__Patrol_Request_message_member_array[2] = {
  {
    "target_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chapt4_interfaces__srv__Patrol_Request, target_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chapt4_interfaces__srv__Patrol_Request, target_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Patrol_Request__rosidl_typesupport_introspection_c__Patrol_Request_message_members = {
  "chapt4_interfaces__srv",  // message namespace
  "Patrol_Request",  // message name
  2,  // number of fields
  sizeof(chapt4_interfaces__srv__Patrol_Request),
  Patrol_Request__rosidl_typesupport_introspection_c__Patrol_Request_message_member_array,  // message members
  Patrol_Request__rosidl_typesupport_introspection_c__Patrol_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Patrol_Request__rosidl_typesupport_introspection_c__Patrol_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Patrol_Request__rosidl_typesupport_introspection_c__Patrol_Request_message_type_support_handle = {
  0,
  &Patrol_Request__rosidl_typesupport_introspection_c__Patrol_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chapt4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chapt4_interfaces, srv, Patrol_Request)() {
  if (!Patrol_Request__rosidl_typesupport_introspection_c__Patrol_Request_message_type_support_handle.typesupport_identifier) {
    Patrol_Request__rosidl_typesupport_introspection_c__Patrol_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Patrol_Request__rosidl_typesupport_introspection_c__Patrol_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "chapt4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__functions.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Patrol_Response__rosidl_typesupport_introspection_c__Patrol_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chapt4_interfaces__srv__Patrol_Response__init(message_memory);
}

void Patrol_Response__rosidl_typesupport_introspection_c__Patrol_Response_fini_function(void * message_memory)
{
  chapt4_interfaces__srv__Patrol_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Patrol_Response__rosidl_typesupport_introspection_c__Patrol_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chapt4_interfaces__srv__Patrol_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Patrol_Response__rosidl_typesupport_introspection_c__Patrol_Response_message_members = {
  "chapt4_interfaces__srv",  // message namespace
  "Patrol_Response",  // message name
  1,  // number of fields
  sizeof(chapt4_interfaces__srv__Patrol_Response),
  Patrol_Response__rosidl_typesupport_introspection_c__Patrol_Response_message_member_array,  // message members
  Patrol_Response__rosidl_typesupport_introspection_c__Patrol_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Patrol_Response__rosidl_typesupport_introspection_c__Patrol_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Patrol_Response__rosidl_typesupport_introspection_c__Patrol_Response_message_type_support_handle = {
  0,
  &Patrol_Response__rosidl_typesupport_introspection_c__Patrol_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chapt4_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chapt4_interfaces, srv, Patrol_Response)() {
  if (!Patrol_Response__rosidl_typesupport_introspection_c__Patrol_Response_message_type_support_handle.typesupport_identifier) {
    Patrol_Response__rosidl_typesupport_introspection_c__Patrol_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Patrol_Response__rosidl_typesupport_introspection_c__Patrol_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "chapt4_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers chapt4_interfaces__srv__detail__patrol__rosidl_typesupport_introspection_c__Patrol_service_members = {
  "chapt4_interfaces__srv",  // service namespace
  "Patrol",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // chapt4_interfaces__srv__detail__patrol__rosidl_typesupport_introspection_c__Patrol_Request_message_type_support_handle,
  NULL  // response message
  // chapt4_interfaces__srv__detail__patrol__rosidl_typesupport_introspection_c__Patrol_Response_message_type_support_handle
};

static rosidl_service_type_support_t chapt4_interfaces__srv__detail__patrol__rosidl_typesupport_introspection_c__Patrol_service_type_support_handle = {
  0,
  &chapt4_interfaces__srv__detail__patrol__rosidl_typesupport_introspection_c__Patrol_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chapt4_interfaces, srv, Patrol_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chapt4_interfaces, srv, Patrol_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chapt4_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chapt4_interfaces, srv, Patrol)() {
  if (!chapt4_interfaces__srv__detail__patrol__rosidl_typesupport_introspection_c__Patrol_service_type_support_handle.typesupport_identifier) {
    chapt4_interfaces__srv__detail__patrol__rosidl_typesupport_introspection_c__Patrol_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)chapt4_interfaces__srv__detail__patrol__rosidl_typesupport_introspection_c__Patrol_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chapt4_interfaces, srv, Patrol_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chapt4_interfaces, srv, Patrol_Response)()->data;
  }

  return &chapt4_interfaces__srv__detail__patrol__rosidl_typesupport_introspection_c__Patrol_service_type_support_handle;
}
