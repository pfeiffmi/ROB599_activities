// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rob599_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rob599_msgs/msg/detail/object__rosidl_typesupport_introspection_c.h"
#include "rob599_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rob599_msgs/msg/detail/object__functions.h"
#include "rob599_msgs/msg/detail/object__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rob599_msgs__msg__Object__rosidl_typesupport_introspection_c__Object_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rob599_msgs__msg__Object__init(message_memory);
}

void rob599_msgs__msg__Object__rosidl_typesupport_introspection_c__Object_fini_function(void * message_memory)
{
  rob599_msgs__msg__Object__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rob599_msgs__msg__Object__rosidl_typesupport_introspection_c__Object_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rob599_msgs__msg__Object, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "volume",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rob599_msgs__msg__Object, volume),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rob599_msgs__msg__Object__rosidl_typesupport_introspection_c__Object_message_members = {
  "rob599_msgs__msg",  // message namespace
  "Object",  // message name
  2,  // number of fields
  sizeof(rob599_msgs__msg__Object),
  false,  // has_any_key_member_
  rob599_msgs__msg__Object__rosidl_typesupport_introspection_c__Object_message_member_array,  // message members
  rob599_msgs__msg__Object__rosidl_typesupport_introspection_c__Object_init_function,  // function to initialize message memory (memory has to be allocated)
  rob599_msgs__msg__Object__rosidl_typesupport_introspection_c__Object_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rob599_msgs__msg__Object__rosidl_typesupport_introspection_c__Object_message_type_support_handle = {
  0,
  &rob599_msgs__msg__Object__rosidl_typesupport_introspection_c__Object_message_members,
  get_message_typesupport_handle_function,
  &rob599_msgs__msg__Object__get_type_hash,
  &rob599_msgs__msg__Object__get_type_description,
  &rob599_msgs__msg__Object__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rob599_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_msgs, msg, Object)() {
  if (!rob599_msgs__msg__Object__rosidl_typesupport_introspection_c__Object_message_type_support_handle.typesupport_identifier) {
    rob599_msgs__msg__Object__rosidl_typesupport_introspection_c__Object_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rob599_msgs__msg__Object__rosidl_typesupport_introspection_c__Object_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
