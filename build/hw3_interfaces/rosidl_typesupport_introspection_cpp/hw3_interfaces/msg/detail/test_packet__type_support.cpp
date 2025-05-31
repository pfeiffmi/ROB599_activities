// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hw3_interfaces:msg/TestPacket.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hw3_interfaces/msg/detail/test_packet__functions.h"
#include "hw3_interfaces/msg/detail/test_packet__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hw3_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TestPacket_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hw3_interfaces::msg::TestPacket(_init);
}

void TestPacket_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hw3_interfaces::msg::TestPacket *>(message_memory);
  typed_message->~TestPacket();
}

size_t size_function__TestPacket__payload(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestPacket__payload(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TestPacket__payload(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestPacket__payload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TestPacket__payload(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TestPacket__payload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TestPacket__payload(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__TestPacket__payload(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestPacket_message_member_array[2] = {
  {
    "send_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw3_interfaces::msg::TestPacket, send_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "payload",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw3_interfaces::msg::TestPacket, payload),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestPacket__payload,  // size() function pointer
    get_const_function__TestPacket__payload,  // get_const(index) function pointer
    get_function__TestPacket__payload,  // get(index) function pointer
    fetch_function__TestPacket__payload,  // fetch(index, &value) function pointer
    assign_function__TestPacket__payload,  // assign(index, value) function pointer
    resize_function__TestPacket__payload  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestPacket_message_members = {
  "hw3_interfaces::msg",  // message namespace
  "TestPacket",  // message name
  2,  // number of fields
  sizeof(hw3_interfaces::msg::TestPacket),
  false,  // has_any_key_member_
  TestPacket_message_member_array,  // message members
  TestPacket_init_function,  // function to initialize message memory (memory has to be allocated)
  TestPacket_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestPacket_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestPacket_message_members,
  get_message_typesupport_handle_function,
  &hw3_interfaces__msg__TestPacket__get_type_hash,
  &hw3_interfaces__msg__TestPacket__get_type_description,
  &hw3_interfaces__msg__TestPacket__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hw3_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw3_interfaces::msg::TestPacket>()
{
  return &::hw3_interfaces::msg::rosidl_typesupport_introspection_cpp::TestPacket_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw3_interfaces, msg, TestPacket)() {
  return &::hw3_interfaces::msg::rosidl_typesupport_introspection_cpp::TestPacket_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
