// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chapt4_interfaces:srv/Patrol.idl
// generated code does not contain a copyright notice
#include "chapt4_interfaces/srv/detail/patrol__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
chapt4_interfaces__srv__Patrol_Request__init(chapt4_interfaces__srv__Patrol_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_x
  // target_y
  return true;
}

void
chapt4_interfaces__srv__Patrol_Request__fini(chapt4_interfaces__srv__Patrol_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_x
  // target_y
}

bool
chapt4_interfaces__srv__Patrol_Request__are_equal(const chapt4_interfaces__srv__Patrol_Request * lhs, const chapt4_interfaces__srv__Patrol_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_x
  if (lhs->target_x != rhs->target_x) {
    return false;
  }
  // target_y
  if (lhs->target_y != rhs->target_y) {
    return false;
  }
  return true;
}

bool
chapt4_interfaces__srv__Patrol_Request__copy(
  const chapt4_interfaces__srv__Patrol_Request * input,
  chapt4_interfaces__srv__Patrol_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target_x
  output->target_x = input->target_x;
  // target_y
  output->target_y = input->target_y;
  return true;
}

chapt4_interfaces__srv__Patrol_Request *
chapt4_interfaces__srv__Patrol_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chapt4_interfaces__srv__Patrol_Request * msg = (chapt4_interfaces__srv__Patrol_Request *)allocator.allocate(sizeof(chapt4_interfaces__srv__Patrol_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chapt4_interfaces__srv__Patrol_Request));
  bool success = chapt4_interfaces__srv__Patrol_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chapt4_interfaces__srv__Patrol_Request__destroy(chapt4_interfaces__srv__Patrol_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chapt4_interfaces__srv__Patrol_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chapt4_interfaces__srv__Patrol_Request__Sequence__init(chapt4_interfaces__srv__Patrol_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chapt4_interfaces__srv__Patrol_Request * data = NULL;

  if (size) {
    data = (chapt4_interfaces__srv__Patrol_Request *)allocator.zero_allocate(size, sizeof(chapt4_interfaces__srv__Patrol_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chapt4_interfaces__srv__Patrol_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chapt4_interfaces__srv__Patrol_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chapt4_interfaces__srv__Patrol_Request__Sequence__fini(chapt4_interfaces__srv__Patrol_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chapt4_interfaces__srv__Patrol_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chapt4_interfaces__srv__Patrol_Request__Sequence *
chapt4_interfaces__srv__Patrol_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chapt4_interfaces__srv__Patrol_Request__Sequence * array = (chapt4_interfaces__srv__Patrol_Request__Sequence *)allocator.allocate(sizeof(chapt4_interfaces__srv__Patrol_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chapt4_interfaces__srv__Patrol_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chapt4_interfaces__srv__Patrol_Request__Sequence__destroy(chapt4_interfaces__srv__Patrol_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chapt4_interfaces__srv__Patrol_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chapt4_interfaces__srv__Patrol_Request__Sequence__are_equal(const chapt4_interfaces__srv__Patrol_Request__Sequence * lhs, const chapt4_interfaces__srv__Patrol_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chapt4_interfaces__srv__Patrol_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chapt4_interfaces__srv__Patrol_Request__Sequence__copy(
  const chapt4_interfaces__srv__Patrol_Request__Sequence * input,
  chapt4_interfaces__srv__Patrol_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chapt4_interfaces__srv__Patrol_Request);
    chapt4_interfaces__srv__Patrol_Request * data =
      (chapt4_interfaces__srv__Patrol_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chapt4_interfaces__srv__Patrol_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          chapt4_interfaces__srv__Patrol_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chapt4_interfaces__srv__Patrol_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
chapt4_interfaces__srv__Patrol_Response__init(chapt4_interfaces__srv__Patrol_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
chapt4_interfaces__srv__Patrol_Response__fini(chapt4_interfaces__srv__Patrol_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
chapt4_interfaces__srv__Patrol_Response__are_equal(const chapt4_interfaces__srv__Patrol_Response * lhs, const chapt4_interfaces__srv__Patrol_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
chapt4_interfaces__srv__Patrol_Response__copy(
  const chapt4_interfaces__srv__Patrol_Response * input,
  chapt4_interfaces__srv__Patrol_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

chapt4_interfaces__srv__Patrol_Response *
chapt4_interfaces__srv__Patrol_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chapt4_interfaces__srv__Patrol_Response * msg = (chapt4_interfaces__srv__Patrol_Response *)allocator.allocate(sizeof(chapt4_interfaces__srv__Patrol_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chapt4_interfaces__srv__Patrol_Response));
  bool success = chapt4_interfaces__srv__Patrol_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chapt4_interfaces__srv__Patrol_Response__destroy(chapt4_interfaces__srv__Patrol_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chapt4_interfaces__srv__Patrol_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chapt4_interfaces__srv__Patrol_Response__Sequence__init(chapt4_interfaces__srv__Patrol_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chapt4_interfaces__srv__Patrol_Response * data = NULL;

  if (size) {
    data = (chapt4_interfaces__srv__Patrol_Response *)allocator.zero_allocate(size, sizeof(chapt4_interfaces__srv__Patrol_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chapt4_interfaces__srv__Patrol_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chapt4_interfaces__srv__Patrol_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chapt4_interfaces__srv__Patrol_Response__Sequence__fini(chapt4_interfaces__srv__Patrol_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chapt4_interfaces__srv__Patrol_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chapt4_interfaces__srv__Patrol_Response__Sequence *
chapt4_interfaces__srv__Patrol_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chapt4_interfaces__srv__Patrol_Response__Sequence * array = (chapt4_interfaces__srv__Patrol_Response__Sequence *)allocator.allocate(sizeof(chapt4_interfaces__srv__Patrol_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chapt4_interfaces__srv__Patrol_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chapt4_interfaces__srv__Patrol_Response__Sequence__destroy(chapt4_interfaces__srv__Patrol_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chapt4_interfaces__srv__Patrol_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chapt4_interfaces__srv__Patrol_Response__Sequence__are_equal(const chapt4_interfaces__srv__Patrol_Response__Sequence * lhs, const chapt4_interfaces__srv__Patrol_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chapt4_interfaces__srv__Patrol_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chapt4_interfaces__srv__Patrol_Response__Sequence__copy(
  const chapt4_interfaces__srv__Patrol_Response__Sequence * input,
  chapt4_interfaces__srv__Patrol_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chapt4_interfaces__srv__Patrol_Response);
    chapt4_interfaces__srv__Patrol_Response * data =
      (chapt4_interfaces__srv__Patrol_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chapt4_interfaces__srv__Patrol_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          chapt4_interfaces__srv__Patrol_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chapt4_interfaces__srv__Patrol_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
