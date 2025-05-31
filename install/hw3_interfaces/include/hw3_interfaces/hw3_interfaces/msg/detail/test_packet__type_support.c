// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hw3_interfaces:msg/TestPacket.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hw3_interfaces/msg/detail/test_packet__rosidl_typesupport_introspection_c.h"
#include "hw3_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hw3_interfaces/msg/detail/test_packet__functions.h"
#include "hw3_interfaces/msg/detail/test_packet__struct.h"


// Include directives for member types
// Member `payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__TestPacket_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw3_interfaces__msg__TestPacket__init(message_memory);
}

void hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__TestPacket_fini_function(void * message_memory)
{
  hw3_interfaces__msg__TestPacket__fini(message_memory);
}

size_t hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__size_function__TestPacket__payload(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__get_const_function__TestPacket__payload(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__get_function__TestPacket__payload(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__fetch_function__TestPacket__payload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__get_const_function__TestPacket__payload(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__assign_function__TestPacket__payload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__get_function__TestPacket__payload(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__resize_function__TestPacket__payload(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__TestPacket_message_member_array[2] = {
  {
    "send_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw3_interfaces__msg__TestPacket, send_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw3_interfaces__msg__TestPacket, payload),  // bytes offset in struct
    NULL,  // default value
    hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__size_function__TestPacket__payload,  // size() function pointer
    hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__get_const_function__TestPacket__payload,  // get_const(index) function pointer
    hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__get_function__TestPacket__payload,  // get(index) function pointer
    hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__fetch_function__TestPacket__payload,  // fetch(index, &value) function pointer
    hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__assign_function__TestPacket__payload,  // assign(index, value) function pointer
    hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__resize_function__TestPacket__payload  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__TestPacket_message_members = {
  "hw3_interfaces__msg",  // message namespace
  "TestPacket",  // message name
  2,  // number of fields
  sizeof(hw3_interfaces__msg__TestPacket),
  false,  // has_any_key_member_
  hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__TestPacket_message_member_array,  // message members
  hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__TestPacket_init_function,  // function to initialize message memory (memory has to be allocated)
  hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__TestPacket_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__TestPacket_message_type_support_handle = {
  0,
  &hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__TestPacket_message_members,
  get_message_typesupport_handle_function,
  &hw3_interfaces__msg__TestPacket__get_type_hash,
  &hw3_interfaces__msg__TestPacket__get_type_description,
  &hw3_interfaces__msg__TestPacket__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw3_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, msg, TestPacket)() {
  if (!hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__TestPacket_message_type_support_handle.typesupport_identifier) {
    hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__TestPacket_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw3_interfaces__msg__TestPacket__rosidl_typesupport_introspection_c__TestPacket_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
