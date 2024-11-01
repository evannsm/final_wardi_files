// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EstimatorSensorBias.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_sensor_bias__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/estimator_sensor_bias__struct.h"
#include "px4_msgs/msg/detail/estimator_sensor_bias__functions.h"
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


using _EstimatorSensorBias__ros_msg_type = px4_msgs__msg__EstimatorSensorBias;

static bool _EstimatorSensorBias__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EstimatorSensorBias__ros_msg_type * ros_message = static_cast<const _EstimatorSensorBias__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: gyro_device_id
  {
    cdr << ros_message->gyro_device_id;
  }

  // Field name: gyro_bias
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_bias;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_bias_limit
  {
    cdr << ros_message->gyro_bias_limit;
  }

  // Field name: gyro_bias_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_bias_variance;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_bias_valid
  {
    cdr << (ros_message->gyro_bias_valid ? true : false);
  }

  // Field name: gyro_bias_stable
  {
    cdr << (ros_message->gyro_bias_stable ? true : false);
  }

  // Field name: accel_device_id
  {
    cdr << ros_message->accel_device_id;
  }

  // Field name: accel_bias
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_bias;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: accel_bias_limit
  {
    cdr << ros_message->accel_bias_limit;
  }

  // Field name: accel_bias_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_bias_variance;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: accel_bias_valid
  {
    cdr << (ros_message->accel_bias_valid ? true : false);
  }

  // Field name: accel_bias_stable
  {
    cdr << (ros_message->accel_bias_stable ? true : false);
  }

  // Field name: mag_device_id
  {
    cdr << ros_message->mag_device_id;
  }

  // Field name: mag_bias
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_bias;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mag_bias_limit
  {
    cdr << ros_message->mag_bias_limit;
  }

  // Field name: mag_bias_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_bias_variance;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mag_bias_valid
  {
    cdr << (ros_message->mag_bias_valid ? true : false);
  }

  // Field name: mag_bias_stable
  {
    cdr << (ros_message->mag_bias_stable ? true : false);
  }

  return true;
}

static bool _EstimatorSensorBias__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EstimatorSensorBias__ros_msg_type * ros_message = static_cast<_EstimatorSensorBias__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: gyro_device_id
  {
    cdr >> ros_message->gyro_device_id;
  }

  // Field name: gyro_bias
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_bias;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_bias_limit
  {
    cdr >> ros_message->gyro_bias_limit;
  }

  // Field name: gyro_bias_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_bias_variance;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_bias_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gyro_bias_valid = tmp ? true : false;
  }

  // Field name: gyro_bias_stable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gyro_bias_stable = tmp ? true : false;
  }

  // Field name: accel_device_id
  {
    cdr >> ros_message->accel_device_id;
  }

  // Field name: accel_bias
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_bias;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: accel_bias_limit
  {
    cdr >> ros_message->accel_bias_limit;
  }

  // Field name: accel_bias_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_bias_variance;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: accel_bias_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accel_bias_valid = tmp ? true : false;
  }

  // Field name: accel_bias_stable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accel_bias_stable = tmp ? true : false;
  }

  // Field name: mag_device_id
  {
    cdr >> ros_message->mag_device_id;
  }

  // Field name: mag_bias
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_bias;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mag_bias_limit
  {
    cdr >> ros_message->mag_bias_limit;
  }

  // Field name: mag_bias_variance
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_bias_variance;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mag_bias_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mag_bias_valid = tmp ? true : false;
  }

  // Field name: mag_bias_stable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mag_bias_stable = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EstimatorSensorBias(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EstimatorSensorBias__ros_msg_type * ros_message = static_cast<const _EstimatorSensorBias__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_sample
  {
    size_t item_size = sizeof(ros_message->timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_device_id
  {
    size_t item_size = sizeof(ros_message->gyro_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_bias
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->gyro_bias;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_bias_limit
  {
    size_t item_size = sizeof(ros_message->gyro_bias_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_bias_variance
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->gyro_bias_variance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_bias_valid
  {
    size_t item_size = sizeof(ros_message->gyro_bias_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_bias_stable
  {
    size_t item_size = sizeof(ros_message->gyro_bias_stable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_device_id
  {
    size_t item_size = sizeof(ros_message->accel_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_bias
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->accel_bias;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_bias_limit
  {
    size_t item_size = sizeof(ros_message->accel_bias_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_bias_variance
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->accel_bias_variance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_bias_valid
  {
    size_t item_size = sizeof(ros_message->accel_bias_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_bias_stable
  {
    size_t item_size = sizeof(ros_message->accel_bias_stable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_device_id
  {
    size_t item_size = sizeof(ros_message->mag_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_bias
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->mag_bias;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_bias_limit
  {
    size_t item_size = sizeof(ros_message->mag_bias_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_bias_variance
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->mag_bias_variance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_bias_valid
  {
    size_t item_size = sizeof(ros_message->mag_bias_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_bias_stable
  {
    size_t item_size = sizeof(ros_message->mag_bias_stable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EstimatorSensorBias__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EstimatorSensorBias(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EstimatorSensorBias(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timestamp_sample
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_device_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_bias
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_bias_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_bias_variance
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_bias_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gyro_bias_stable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accel_device_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_bias
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_bias_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_bias_variance
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_bias_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accel_bias_stable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mag_device_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_bias
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_bias_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_bias_variance
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_bias_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mag_bias_stable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EstimatorSensorBias__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__EstimatorSensorBias(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EstimatorSensorBias = {
  "px4_msgs::msg",
  "EstimatorSensorBias",
  _EstimatorSensorBias__cdr_serialize,
  _EstimatorSensorBias__cdr_deserialize,
  _EstimatorSensorBias__get_serialized_size,
  _EstimatorSensorBias__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorSensorBias__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EstimatorSensorBias,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EstimatorSensorBias)() {
  return &_EstimatorSensorBias__type_support;
}

#if defined(__cplusplus)
}
#endif
