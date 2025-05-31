// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rob599_msgs:msg/Object.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rob599_msgs/msg/object.hpp"


#ifndef ROB599_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define ROB599_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rob599_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rob599_msgs
{

namespace msg
{

namespace builder
{

class Init_Object_volume
{
public:
  explicit Init_Object_volume(::rob599_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  ::rob599_msgs::msg::Object volume(::rob599_msgs::msg::Object::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_msgs::msg::Object msg_;
};

class Init_Object_name
{
public:
  Init_Object_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_volume name(::rob599_msgs::msg::Object::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Object_volume(msg_);
  }

private:
  ::rob599_msgs::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_msgs::msg::Object>()
{
  return rob599_msgs::msg::builder::Init_Object_name();
}

}  // namespace rob599_msgs

#endif  // ROB599_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
