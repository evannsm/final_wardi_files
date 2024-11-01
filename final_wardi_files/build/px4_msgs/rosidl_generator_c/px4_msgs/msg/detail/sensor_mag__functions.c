// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/SensorMag.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/sensor_mag__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__SensorMag__init(px4_msgs__msg__SensorMag * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // device_id
  // x
  // y
  // z
  // temperature
  // error_count
  return true;
}

void
px4_msgs__msg__SensorMag__fini(px4_msgs__msg__SensorMag * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // device_id
  // x
  // y
  // z
  // temperature
  // error_count
}

bool
px4_msgs__msg__SensorMag__are_equal(const px4_msgs__msg__SensorMag * lhs, const px4_msgs__msg__SensorMag * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // timestamp_sample
  if (lhs->timestamp_sample != rhs->timestamp_sample) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // error_count
  if (lhs->error_count != rhs->error_count) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__SensorMag__copy(
  const px4_msgs__msg__SensorMag * input,
  px4_msgs__msg__SensorMag * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // device_id
  output->device_id = input->device_id;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // temperature
  output->temperature = input->temperature;
  // error_count
  output->error_count = input->error_count;
  return true;
}

px4_msgs__msg__SensorMag *
px4_msgs__msg__SensorMag__create()
{
  px4_msgs__msg__SensorMag * msg = (px4_msgs__msg__SensorMag *)malloc(sizeof(px4_msgs__msg__SensorMag));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__SensorMag));
  bool success = px4_msgs__msg__SensorMag__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__SensorMag__destroy(px4_msgs__msg__SensorMag * msg)
{
  if (msg) {
    px4_msgs__msg__SensorMag__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__SensorMag__Sequence__init(px4_msgs__msg__SensorMag__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__SensorMag * data = NULL;
  if (size) {
    data = (px4_msgs__msg__SensorMag *)calloc(size, sizeof(px4_msgs__msg__SensorMag));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__SensorMag__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__SensorMag__fini(&data[i - 1]);
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
px4_msgs__msg__SensorMag__Sequence__fini(px4_msgs__msg__SensorMag__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__SensorMag__fini(&array->data[i]);
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

px4_msgs__msg__SensorMag__Sequence *
px4_msgs__msg__SensorMag__Sequence__create(size_t size)
{
  px4_msgs__msg__SensorMag__Sequence * array = (px4_msgs__msg__SensorMag__Sequence *)malloc(sizeof(px4_msgs__msg__SensorMag__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__SensorMag__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__SensorMag__Sequence__destroy(px4_msgs__msg__SensorMag__Sequence * array)
{
  if (array) {
    px4_msgs__msg__SensorMag__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__msg__SensorMag__Sequence__are_equal(const px4_msgs__msg__SensorMag__Sequence * lhs, const px4_msgs__msg__SensorMag__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__SensorMag__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__SensorMag__Sequence__copy(
  const px4_msgs__msg__SensorMag__Sequence * input,
  px4_msgs__msg__SensorMag__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__SensorMag);
    px4_msgs__msg__SensorMag * data =
      (px4_msgs__msg__SensorMag *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__SensorMag__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__SensorMag__fini(&data[i]);
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
    if (!px4_msgs__msg__SensorMag__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
