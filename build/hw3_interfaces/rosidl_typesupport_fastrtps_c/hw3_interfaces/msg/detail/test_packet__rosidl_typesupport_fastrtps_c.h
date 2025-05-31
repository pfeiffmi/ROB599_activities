// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from hw3_interfaces:msg/TestPacket.idl
// generated code does not contain a copyright notice
#ifndef HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hw3_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hw3_interfaces/msg/detail/test_packet__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
bool cdr_serialize_hw3_interfaces__msg__TestPacket(
  const hw3_interfaces__msg__TestPacket * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
bool cdr_deserialize_hw3_interfaces__msg__TestPacket(
  eprosima::fastcdr::Cdr &,
  hw3_interfaces__msg__TestPacket * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
size_t get_serialized_size_hw3_interfaces__msg__TestPacket(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
size_t max_serialized_size_hw3_interfaces__msg__TestPacket(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
bool cdr_serialize_key_hw3_interfaces__msg__TestPacket(
  const hw3_interfaces__msg__TestPacket * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
size_t get_serialized_size_key_hw3_interfaces__msg__TestPacket(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
size_t max_serialized_size_key_hw3_interfaces__msg__TestPacket(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw3_interfaces, msg, TestPacket)();

#ifdef __cplusplus
}
#endif

#endif  // HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
