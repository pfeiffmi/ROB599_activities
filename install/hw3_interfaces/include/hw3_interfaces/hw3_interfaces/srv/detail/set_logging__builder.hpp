// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hw3_interfaces:srv/SetLogging.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw3_interfaces/srv/set_logging.hpp"


#ifndef HW3_INTERFACES__SRV__DETAIL__SET_LOGGING__BUILDER_HPP_
#define HW3_INTERFACES__SRV__DETAIL__SET_LOGGING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hw3_interfaces/srv/detail/set_logging__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hw3_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLogging_Request_log_file
{
public:
  explicit Init_SetLogging_Request_log_file(::hw3_interfaces::srv::SetLogging_Request & msg)
  : msg_(msg)
  {}
  ::hw3_interfaces::srv::SetLogging_Request log_file(::hw3_interfaces::srv::SetLogging_Request::_log_file_type arg)
  {
    msg_.log_file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw3_interfaces::srv::SetLogging_Request msg_;
};

class Init_SetLogging_Request_log_data
{
public:
  Init_SetLogging_Request_log_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLogging_Request_log_file log_data(::hw3_interfaces::srv::SetLogging_Request::_log_data_type arg)
  {
    msg_.log_data = std::move(arg);
    return Init_SetLogging_Request_log_file(msg_);
  }

private:
  ::hw3_interfaces::srv::SetLogging_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw3_interfaces::srv::SetLogging_Request>()
{
  return hw3_interfaces::srv::builder::Init_SetLogging_Request_log_data();
}

}  // namespace hw3_interfaces


namespace hw3_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLogging_Response_success
{
public:
  Init_SetLogging_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw3_interfaces::srv::SetLogging_Response success(::hw3_interfaces::srv::SetLogging_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw3_interfaces::srv::SetLogging_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw3_interfaces::srv::SetLogging_Response>()
{
  return hw3_interfaces::srv::builder::Init_SetLogging_Response_success();
}

}  // namespace hw3_interfaces


namespace hw3_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLogging_Event_response
{
public:
  explicit Init_SetLogging_Event_response(::hw3_interfaces::srv::SetLogging_Event & msg)
  : msg_(msg)
  {}
  ::hw3_interfaces::srv::SetLogging_Event response(::hw3_interfaces::srv::SetLogging_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw3_interfaces::srv::SetLogging_Event msg_;
};

class Init_SetLogging_Event_request
{
public:
  explicit Init_SetLogging_Event_request(::hw3_interfaces::srv::SetLogging_Event & msg)
  : msg_(msg)
  {}
  Init_SetLogging_Event_response request(::hw3_interfaces::srv::SetLogging_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetLogging_Event_response(msg_);
  }

private:
  ::hw3_interfaces::srv::SetLogging_Event msg_;
};

class Init_SetLogging_Event_info
{
public:
  Init_SetLogging_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLogging_Event_request info(::hw3_interfaces::srv::SetLogging_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetLogging_Event_request(msg_);
  }

private:
  ::hw3_interfaces::srv::SetLogging_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw3_interfaces::srv::SetLogging_Event>()
{
  return hw3_interfaces::srv::builder::Init_SetLogging_Event_info();
}

}  // namespace hw3_interfaces

#endif  // HW3_INTERFACES__SRV__DETAIL__SET_LOGGING__BUILDER_HPP_
