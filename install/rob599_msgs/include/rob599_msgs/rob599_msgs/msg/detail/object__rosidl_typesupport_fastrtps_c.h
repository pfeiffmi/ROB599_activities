// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rob599_msgs:msg/Object.idl
// generated code does not contain a copyright notice
#ifndef ROB599_MSGS__MSG__DETAIL__OBJECT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROB599_MSGS__MSG__DETAIL__OBJECT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rob599_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rob599_msgs/msg/detail/object__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rob599_msgs
bool cdr_serialize_rob599_msgs__msg__Object(
  const rob599_msgs__msg__Object * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rob599_msgs
bool cdr_deserialize_rob599_msgs__msg__Object(
  eprosima::fastcdr::Cdr &,
  rob599_msgs__msg__Object * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rob599_msgs
size_t get_serialized_size_rob599_msgs__msg__Object(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rob599_msgs
size_t max_serialized_size_rob599_msgs__msg__Object(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rob599_msgs
bool cdr_serialize_key_rob599_msgs__msg__Object(
  const rob599_msgs__msg__Object * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rob599_msgs
size_t get_serialized_size_key_rob599_msgs__msg__Object(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rob599_msgs
size_t max_serialized_size_key_rob599_msgs__msg__Object(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rob599_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rob599_msgs, msg, Object)();

#ifdef __cplusplus
}
#endif

#endif  // ROB599_MSGS__MSG__DETAIL__OBJECT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
