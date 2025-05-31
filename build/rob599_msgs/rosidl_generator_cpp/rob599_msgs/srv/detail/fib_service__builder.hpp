// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rob599_msgs:srv/FibService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rob599_msgs/srv/fib_service.hpp"


#ifndef ROB599_MSGS__SRV__DETAIL__FIB_SERVICE__BUILDER_HPP_
#define ROB599_MSGS__SRV__DETAIL__FIB_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rob599_msgs/srv/detail/fib_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rob599_msgs
{

namespace srv
{

namespace builder
{

class Init_FibService_Request_number
{
public:
  Init_FibService_Request_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_msgs::srv::FibService_Request number(::rob599_msgs::srv::FibService_Request::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_msgs::srv::FibService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_msgs::srv::FibService_Request>()
{
  return rob599_msgs::srv::builder::Init_FibService_Request_number();
}

}  // namespace rob599_msgs


namespace rob599_msgs
{

namespace srv
{

namespace builder
{

class Init_FibService_Response_fibonacci
{
public:
  Init_FibService_Response_fibonacci()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_msgs::srv::FibService_Response fibonacci(::rob599_msgs::srv::FibService_Response::_fibonacci_type arg)
  {
    msg_.fibonacci = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_msgs::srv::FibService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_msgs::srv::FibService_Response>()
{
  return rob599_msgs::srv::builder::Init_FibService_Response_fibonacci();
}

}  // namespace rob599_msgs


namespace rob599_msgs
{

namespace srv
{

namespace builder
{

class Init_FibService_Event_response
{
public:
  explicit Init_FibService_Event_response(::rob599_msgs::srv::FibService_Event & msg)
  : msg_(msg)
  {}
  ::rob599_msgs::srv::FibService_Event response(::rob599_msgs::srv::FibService_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_msgs::srv::FibService_Event msg_;
};

class Init_FibService_Event_request
{
public:
  explicit Init_FibService_Event_request(::rob599_msgs::srv::FibService_Event & msg)
  : msg_(msg)
  {}
  Init_FibService_Event_response request(::rob599_msgs::srv::FibService_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_FibService_Event_response(msg_);
  }

private:
  ::rob599_msgs::srv::FibService_Event msg_;
};

class Init_FibService_Event_info
{
public:
  Init_FibService_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FibService_Event_request info(::rob599_msgs::srv::FibService_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_FibService_Event_request(msg_);
  }

private:
  ::rob599_msgs::srv::FibService_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_msgs::srv::FibService_Event>()
{
  return rob599_msgs::srv::builder::Init_FibService_Event_info();
}

}  // namespace rob599_msgs

#endif  // ROB599_MSGS__SRV__DETAIL__FIB_SERVICE__BUILDER_HPP_
