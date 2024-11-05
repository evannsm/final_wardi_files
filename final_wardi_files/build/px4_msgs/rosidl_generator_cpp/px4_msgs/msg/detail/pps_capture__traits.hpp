// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PpsCapture.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PPS_CAPTURE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__PPS_CAPTURE__TRAITS_HPP_

#include "px4_msgs/msg/detail/pps_capture__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::PpsCapture & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: rtc_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtc_timestamp: ";
    value_to_yaml(msg.rtc_timestamp, out);
    out << "\n";
  }

  // member: pps_rate_exceeded_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pps_rate_exceeded_counter: ";
    value_to_yaml(msg.pps_rate_exceeded_counter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::PpsCapture & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::PpsCapture>()
{
  return "px4_msgs::msg::PpsCapture";
}

template<>
inline const char * name<px4_msgs::msg::PpsCapture>()
{
  return "px4_msgs/msg/PpsCapture";
}

template<>
struct has_fixed_size<px4_msgs::msg::PpsCapture>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PpsCapture>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::PpsCapture>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__PPS_CAPTURE__TRAITS_HPP_