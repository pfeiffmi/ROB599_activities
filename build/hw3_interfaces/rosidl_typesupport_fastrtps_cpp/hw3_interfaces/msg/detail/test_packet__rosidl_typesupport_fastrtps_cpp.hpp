// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from hw3_interfaces:msg/TestPacket.idl
// generated code does not contain a copyright notice

#ifndef HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hw3_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "hw3_interfaces/msg/detail/test_packet__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace hw3_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw3_interfaces
cdr_serialize(
  const hw3_interfaces::msg::TestPacket & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw3_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hw3_interfaces::msg::TestPacket & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw3_interfaces
get_serialized_size(
  const hw3_interfaces::msg::TestPacket & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw3_interfaces
max_serialized_size_TestPacket(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw3_interfaces
cdr_serialize_key(
  const hw3_interfaces::msg::TestPacket & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw3_interfaces
get_serialized_size_key(
  const hw3_interfaces::msg::TestPacket & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw3_interfaces
max_serialized_size_key_TestPacket(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hw3_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw3_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw3_interfaces, msg, TestPacket)();

#ifdef __cplusplus
}
#endif

#endif  // HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
