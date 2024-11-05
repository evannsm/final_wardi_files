// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/Wind.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__WIND__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__WIND__TRAITS_HPP_

#include "px4_msgs/msg/detail/wind__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::Wind & msg,
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

  // member: timestamp_sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_sample: ";
    value_to_yaml(msg.timestamp_sample, out);
    out << "\n";
  }

  // member: windspeed_north
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "windspeed_north: ";
    value_to_yaml(msg.windspeed_north, out);
    out << "\n";
  }

  // member: windspeed_east
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "windspeed_east: ";
    value_to_yaml(msg.windspeed_east, out);
    out << "\n";
  }

  // member: variance_north
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variance_north: ";
    value_to_yaml(msg.variance_north, out);
    out << "\n";
  }

  // member: variance_east
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variance_east: ";
    value_to_yaml(msg.variance_east, out);
    out << "\n";
  }

  // member: tas_innov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tas_innov: ";
    value_to_yaml(msg.tas_innov, out);
    out << "\n";
  }

  // member: tas_innov_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tas_innov_var: ";
    value_to_yaml(msg.tas_innov_var, out);
    out << "\n";
  }

  // member: beta_innov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beta_innov: ";
    value_to_yaml(msg.beta_innov, out);
    out << "\n";
  }

  // member: beta_innov_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beta_innov_var: ";
    value_to_yaml(msg.beta_innov_var, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::Wind & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::Wind>()
{
  return "px4_msgs::msg::Wind";
}

template<>
inline const char * name<px4_msgs::msg::Wind>()
{
  return "px4_msgs/msg/Wind";
}

template<>
struct has_fixed_size<px4_msgs::msg::Wind>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::Wind>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::Wind>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__WIND__TRAITS_HPP_