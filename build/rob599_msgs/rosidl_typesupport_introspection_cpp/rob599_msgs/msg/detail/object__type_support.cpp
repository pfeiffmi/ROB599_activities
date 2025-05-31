// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rob599_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rob599_msgs/msg/detail/object__functions.h"
#include "rob599_msgs/msg/detail/object__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rob599_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Object_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rob599_msgs::msg::Object(_init);
}

void Object_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rob599_msgs::msg::Object *>(message_memory);
  typed_message->~Object();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Object_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rob599_msgs::msg::Object, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "volume",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rob599_msgs::msg::Object, volume),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Object_message_members = {
  "rob599_msgs::msg",  // message namespace
  "Object",  // message name
  2,  // number of fields
  sizeof(rob599_msgs::msg::Object),
  false,  // has_any_key_member_
  Object_message_member_array,  // message members
  Object_init_function,  // function to initialize message memory (memory has to be allocated)
  Object_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Object_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Object_message_members,
  get_message_typesupport_handle_function,
  &rob599_msgs__msg__Object__get_type_hash,
  &rob599_msgs__msg__Object__get_type_description,
  &rob599_msgs__msg__Object__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rob599_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rob599_msgs::msg::Object>()
{
  return &::rob599_msgs::msg::rosidl_typesupport_introspection_cpp::Object_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_msgs, msg, Object)() {
  return &::rob599_msgs::msg::rosidl_typesupport_introspection_cpp::Object_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
