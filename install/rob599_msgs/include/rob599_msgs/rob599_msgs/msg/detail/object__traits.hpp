// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rob599_msgs:msg/Object.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rob599_msgs/msg/object.hpp"


#ifndef ROB599_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define ROB599_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rob599_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rob599_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: volume
  {
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Object & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rob599_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs::msg::Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs::msg::Object & msg)
{
  return rob599_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs::msg::Object>()
{
  return "rob599_msgs::msg::Object";
}

template<>
inline const char * name<rob599_msgs::msg::Object>()
{
  return "rob599_msgs/msg/Object";
}

template<>
struct has_fixed_size<rob599_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rob599_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rob599_msgs::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROB599_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
