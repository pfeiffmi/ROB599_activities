// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hw3_interfaces:srv/SetStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw3_interfaces/srv/set_status.hpp"


#ifndef HW3_INTERFACES__SRV__DETAIL__SET_STATUS__BUILDER_HPP_
#define HW3_INTERFACES__SRV__DETAIL__SET_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hw3_interfaces/srv/detail/set_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hw3_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStatus_Request_data
{
public:
  Init_SetStatus_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw3_interfaces::srv::SetStatus_Request data(::hw3_interfaces::srv::SetStatus_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw3_interfaces::srv::SetStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw3_interfaces::srv::SetStatus_Request>()
{
  return hw3_interfaces::srv::builder::Init_SetStatus_Request_data();
}

}  // namespace hw3_interfaces


namespace hw3_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStatus_Response_success
{
public:
  Init_SetStatus_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw3_interfaces::srv::SetStatus_Response success(::hw3_interfaces::srv::SetStatus_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw3_interfaces::srv::SetStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw3_interfaces::srv::SetStatus_Response>()
{
  return hw3_interfaces::srv::builder::Init_SetStatus_Response_success();
}

}  // namespace hw3_interfaces


namespace hw3_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStatus_Event_response
{
public:
  explicit Init_SetStatus_Event_response(::hw3_interfaces::srv::SetStatus_Event & msg)
  : msg_(msg)
  {}
  ::hw3_interfaces::srv::SetStatus_Event response(::hw3_interfaces::srv::SetStatus_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw3_interfaces::srv::SetStatus_Event msg_;
};

class Init_SetStatus_Event_request
{
public:
  explicit Init_SetStatus_Event_request(::hw3_interfaces::srv::SetStatus_Event & msg)
  : msg_(msg)
  {}
  Init_SetStatus_Event_response request(::hw3_interfaces::srv::SetStatus_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetStatus_Event_response(msg_);
  }

private:
  ::hw3_interfaces::srv::SetStatus_Event msg_;
};

class Init_SetStatus_Event_info
{
public:
  Init_SetStatus_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetStatus_Event_request info(::hw3_interfaces::srv::SetStatus_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetStatus_Event_request(msg_);
  }

private:
  ::hw3_interfaces::srv::SetStatus_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw3_interfaces::srv::SetStatus_Event>()
{
  return hw3_interfaces::srv::builder::Init_SetStatus_Event_info();
}

}  // namespace hw3_interfaces

#endif  // HW3_INTERFACES__SRV__DETAIL__SET_STATUS__BUILDER_HPP_
