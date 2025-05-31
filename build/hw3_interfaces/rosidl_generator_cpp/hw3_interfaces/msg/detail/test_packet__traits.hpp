// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hw3_interfaces:msg/TestPacket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw3_interfaces/msg/test_packet.hpp"


#ifndef HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__TRAITS_HPP_
#define HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hw3_interfaces/msg/detail/test_packet__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hw3_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestPacket & msg,
  std::ostream & out)
{
  out << "{";
  // member: send_time
  {
    out << "send_time: ";
    rosidl_generator_traits::value_to_yaml(msg.send_time, out);
    out << ", ";
  }

  // member: payload
  {
    if (msg.payload.size() == 0) {
      out << "payload: []";
    } else {
      out << "payload: [";
      size_t pending_items = msg.payload.size();
      for (auto item : msg.payload) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestPacket & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: send_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "send_time: ";
    rosidl_generator_traits::value_to_yaml(msg.send_time, out);
    out << "\n";
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.payload.size() == 0) {
      out << "payload: []\n";
    } else {
      out << "payload:\n";
      for (auto item : msg.payload) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestPacket & msg, bool use_flow_style = false)
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

}  // namespace hw3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw3_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw3_interfaces::msg::TestPacket & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw3_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw3_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const hw3_interfaces::msg::TestPacket & msg)
{
  return hw3_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hw3_interfaces::msg::TestPacket>()
{
  return "hw3_interfaces::msg::TestPacket";
}

template<>
inline const char * name<hw3_interfaces::msg::TestPacket>()
{
  return "hw3_interfaces/msg/TestPacket";
}

template<>
struct has_fixed_size<hw3_interfaces::msg::TestPacket>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hw3_interfaces::msg::TestPacket>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hw3_interfaces::msg::TestPacket>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__TRAITS_HPP_
