// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chapt4_interfaces:srv/Patrol.idl
// generated code does not contain a copyright notice

#ifndef CHAPT4_INTERFACES__SRV__DETAIL__PATROL__STRUCT_H_
#define CHAPT4_INTERFACES__SRV__DETAIL__PATROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Patrol in the package chapt4_interfaces.
typedef struct chapt4_interfaces__srv__Patrol_Request
{
  float target_x;
  float target_y;
} chapt4_interfaces__srv__Patrol_Request;

// Struct for a sequence of chapt4_interfaces__srv__Patrol_Request.
typedef struct chapt4_interfaces__srv__Patrol_Request__Sequence
{
  chapt4_interfaces__srv__Patrol_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chapt4_interfaces__srv__Patrol_Request__Sequence;


// Constants defined in the message

/// Constant 'SUCCESS'.
enum
{
  chapt4_interfaces__srv__Patrol_Response__SUCCESS = 1
};

/// Constant 'FAIL'.
enum
{
  chapt4_interfaces__srv__Patrol_Response__FAIL = 0
};

// Struct defined in srv/Patrol in the package chapt4_interfaces.
typedef struct chapt4_interfaces__srv__Patrol_Response
{
  int8_t result;
} chapt4_interfaces__srv__Patrol_Response;

// Struct for a sequence of chapt4_interfaces__srv__Patrol_Response.
typedef struct chapt4_interfaces__srv__Patrol_Response__Sequence
{
  chapt4_interfaces__srv__Patrol_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chapt4_interfaces__srv__Patrol_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHAPT4_INTERFACES__SRV__DETAIL__PATROL__STRUCT_H_
