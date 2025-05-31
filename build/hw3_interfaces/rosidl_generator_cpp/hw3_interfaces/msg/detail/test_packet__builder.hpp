// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hw3_interfaces:msg/TestPacket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw3_interfaces/msg/test_packet.hpp"


#ifndef HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__BUILDER_HPP_
#define HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hw3_interfaces/msg/detail/test_packet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hw3_interfaces
{

namespace msg
{

namespace builder
{

class Init_TestPacket_payload
{
public:
  explicit Init_TestPacket_payload(::hw3_interfaces::msg::TestPacket & msg)
  : msg_(msg)
  {}
  ::hw3_interfaces::msg::TestPacket payload(::hw3_interfaces::msg::TestPacket::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw3_interfaces::msg::TestPacket msg_;
};

class Init_TestPacket_send_time
{
public:
  Init_TestPacket_send_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestPacket_payload send_time(::hw3_interfaces::msg::TestPacket::_send_time_type arg)
  {
    msg_.send_time = std::move(arg);
    return Init_TestPacket_payload(msg_);
  }

private:
  ::hw3_interfaces::msg::TestPacket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw3_interfaces::msg::TestPacket>()
{
  return hw3_interfaces::msg::builder::Init_TestPacket_send_time();
}

}  // namespace hw3_interfaces

#endif  // HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__BUILDER_HPP_
