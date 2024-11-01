// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/GimbalManagerStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/gimbal_manager_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__GimbalManagerStatus__init(px4_msgs__msg__GimbalManagerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // flags
  // gimbal_device_id
  // primary_control_sysid
  // primary_control_compid
  // secondary_control_sysid
  // secondary_control_compid
  return true;
}

void
px4_msgs__msg__GimbalManagerStatus__fini(px4_msgs__msg__GimbalManagerStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // flags
  // gimbal_device_id
  // primary_control_sysid
  // primary_control_compid
  // secondary_control_sysid
  // secondary_control_compid
}

bool
px4_msgs__msg__GimbalManagerStatus__are_equal(const px4_msgs__msg__GimbalManagerStatus * lhs, const px4_msgs__msg__GimbalManagerStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // gimbal_device_id
  if (lhs->gimbal_device_id != rhs->gimbal_device_id) {
    return false;
  }
  // primary_control_sysid
  if (lhs->primary_control_sysid != rhs->primary_control_sysid) {
    return false;
  }
  // primary_control_compid
  if (lhs->primary_control_compid != rhs->primary_control_compid) {
    return false;
  }
  // secondary_control_sysid
  if (lhs->secondary_control_sysid != rhs->secondary_control_sysid) {
    return false;
  }
  // secondary_control_compid
  if (lhs->secondary_control_compid != rhs->secondary_control_compid) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__GimbalManagerStatus__copy(
  const px4_msgs__msg__GimbalManagerStatus * input,
  px4_msgs__msg__GimbalManagerStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // flags
  output->flags = input->flags;
  // gimbal_device_id
  output->gimbal_device_id = input->gimbal_device_id;
  // primary_control_sysid
  output->primary_control_sysid = input->primary_control_sysid;
  // primary_control_compid
  output->primary_control_compid = input->primary_control_compid;
  // secondary_control_sysid
  output->secondary_control_sysid = input->secondary_control_sysid;
  // secondary_control_compid
  output->secondary_control_compid = input->secondary_control_compid;
  return true;
}

px4_msgs__msg__GimbalManagerStatus *
px4_msgs__msg__GimbalManagerStatus__create()
{
  px4_msgs__msg__GimbalManagerStatus * msg = (px4_msgs__msg__GimbalManagerStatus *)malloc(sizeof(px4_msgs__msg__GimbalManagerStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__GimbalManagerStatus));
  bool success = px4_msgs__msg__GimbalManagerStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__GimbalManagerStatus__destroy(px4_msgs__msg__GimbalManagerStatus * msg)
{
  if (msg) {
    px4_msgs__msg__GimbalManagerStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__GimbalManagerStatus__Sequence__init(px4_msgs__msg__GimbalManagerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__GimbalManagerStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__GimbalManagerStatus *)calloc(size, sizeof(px4_msgs__msg__GimbalManagerStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__GimbalManagerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__GimbalManagerStatus__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_msgs__msg__GimbalManagerStatus__Sequence__fini(px4_msgs__msg__GimbalManagerStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__GimbalManagerStatus__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_msgs__msg__GimbalManagerStatus__Sequence *
px4_msgs__msg__GimbalManagerStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__GimbalManagerStatus__Sequence * array = (px4_msgs__msg__GimbalManagerStatus__Sequence *)malloc(sizeof(px4_msgs__msg__GimbalManagerStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__GimbalManagerStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__GimbalManagerStatus__Sequence__destroy(px4_msgs__msg__GimbalManagerStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__GimbalManagerStatus__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__msg__GimbalManagerStatus__Sequence__are_equal(const px4_msgs__msg__GimbalManagerStatus__Sequence * lhs, const px4_msgs__msg__GimbalManagerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__GimbalManagerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__GimbalManagerStatus__Sequence__copy(
  const px4_msgs__msg__GimbalManagerStatus__Sequence * input,
  px4_msgs__msg__GimbalManagerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__GimbalManagerStatus);
    px4_msgs__msg__GimbalManagerStatus * data =
      (px4_msgs__msg__GimbalManagerStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__GimbalManagerStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__GimbalManagerStatus__fini(&data[i]);
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
    if (!px4_msgs__msg__GimbalManagerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
