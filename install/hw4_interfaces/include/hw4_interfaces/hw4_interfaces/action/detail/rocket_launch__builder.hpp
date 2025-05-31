// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hw4_interfaces:action/RocketLaunch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw4_interfaces/action/rocket_launch.hpp"


#ifndef HW4_INTERFACES__ACTION__DETAIL__ROCKET_LAUNCH__BUILDER_HPP_
#define HW4_INTERFACES__ACTION__DETAIL__ROCKET_LAUNCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_RocketLaunch_Goal_number
{
public:
  Init_RocketLaunch_Goal_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw4_interfaces::action::RocketLaunch_Goal number(::hw4_interfaces::action::RocketLaunch_Goal::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::RocketLaunch_Goal>()
{
  return hw4_interfaces::action::builder::Init_RocketLaunch_Goal_number();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_RocketLaunch_Result_sequence
{
public:
  Init_RocketLaunch_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw4_interfaces::action::RocketLaunch_Result sequence(::hw4_interfaces::action::RocketLaunch_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::RocketLaunch_Result>()
{
  return hw4_interfaces::action::builder::Init_RocketLaunch_Result_sequence();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_RocketLaunch_Feedback_progress
{
public:
  Init_RocketLaunch_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw4_interfaces::action::RocketLaunch_Feedback progress(::hw4_interfaces::action::RocketLaunch_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::RocketLaunch_Feedback>()
{
  return hw4_interfaces::action::builder::Init_RocketLaunch_Feedback_progress();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_RocketLaunch_SendGoal_Request_goal
{
public:
  explicit Init_RocketLaunch_SendGoal_Request_goal(::hw4_interfaces::action::RocketLaunch_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::hw4_interfaces::action::RocketLaunch_SendGoal_Request goal(::hw4_interfaces::action::RocketLaunch_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_SendGoal_Request msg_;
};

class Init_RocketLaunch_SendGoal_Request_goal_id
{
public:
  Init_RocketLaunch_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RocketLaunch_SendGoal_Request_goal goal_id(::hw4_interfaces::action::RocketLaunch_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RocketLaunch_SendGoal_Request_goal(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::RocketLaunch_SendGoal_Request>()
{
  return hw4_interfaces::action::builder::Init_RocketLaunch_SendGoal_Request_goal_id();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_RocketLaunch_SendGoal_Response_stamp
{
public:
  explicit Init_RocketLaunch_SendGoal_Response_stamp(::hw4_interfaces::action::RocketLaunch_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::hw4_interfaces::action::RocketLaunch_SendGoal_Response stamp(::hw4_interfaces::action::RocketLaunch_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_SendGoal_Response msg_;
};

class Init_RocketLaunch_SendGoal_Response_accepted
{
public:
  Init_RocketLaunch_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RocketLaunch_SendGoal_Response_stamp accepted(::hw4_interfaces::action::RocketLaunch_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RocketLaunch_SendGoal_Response_stamp(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::RocketLaunch_SendGoal_Response>()
{
  return hw4_interfaces::action::builder::Init_RocketLaunch_SendGoal_Response_accepted();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_RocketLaunch_SendGoal_Event_response
{
public:
  explicit Init_RocketLaunch_SendGoal_Event_response(::hw4_interfaces::action::RocketLaunch_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::hw4_interfaces::action::RocketLaunch_SendGoal_Event response(::hw4_interfaces::action::RocketLaunch_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_SendGoal_Event msg_;
};

class Init_RocketLaunch_SendGoal_Event_request
{
public:
  explicit Init_RocketLaunch_SendGoal_Event_request(::hw4_interfaces::action::RocketLaunch_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_RocketLaunch_SendGoal_Event_response request(::hw4_interfaces::action::RocketLaunch_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RocketLaunch_SendGoal_Event_response(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_SendGoal_Event msg_;
};

class Init_RocketLaunch_SendGoal_Event_info
{
public:
  Init_RocketLaunch_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RocketLaunch_SendGoal_Event_request info(::hw4_interfaces::action::RocketLaunch_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RocketLaunch_SendGoal_Event_request(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::RocketLaunch_SendGoal_Event>()
{
  return hw4_interfaces::action::builder::Init_RocketLaunch_SendGoal_Event_info();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_RocketLaunch_GetResult_Request_goal_id
{
public:
  Init_RocketLaunch_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw4_interfaces::action::RocketLaunch_GetResult_Request goal_id(::hw4_interfaces::action::RocketLaunch_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::RocketLaunch_GetResult_Request>()
{
  return hw4_interfaces::action::builder::Init_RocketLaunch_GetResult_Request_goal_id();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_RocketLaunch_GetResult_Response_result
{
public:
  explicit Init_RocketLaunch_GetResult_Response_result(::hw4_interfaces::action::RocketLaunch_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::hw4_interfaces::action::RocketLaunch_GetResult_Response result(::hw4_interfaces::action::RocketLaunch_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_GetResult_Response msg_;
};

class Init_RocketLaunch_GetResult_Response_status
{
public:
  Init_RocketLaunch_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RocketLaunch_GetResult_Response_result status(::hw4_interfaces::action::RocketLaunch_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RocketLaunch_GetResult_Response_result(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::RocketLaunch_GetResult_Response>()
{
  return hw4_interfaces::action::builder::Init_RocketLaunch_GetResult_Response_status();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_RocketLaunch_GetResult_Event_response
{
public:
  explicit Init_RocketLaunch_GetResult_Event_response(::hw4_interfaces::action::RocketLaunch_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::hw4_interfaces::action::RocketLaunch_GetResult_Event response(::hw4_interfaces::action::RocketLaunch_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_GetResult_Event msg_;
};

class Init_RocketLaunch_GetResult_Event_request
{
public:
  explicit Init_RocketLaunch_GetResult_Event_request(::hw4_interfaces::action::RocketLaunch_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_RocketLaunch_GetResult_Event_response request(::hw4_interfaces::action::RocketLaunch_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RocketLaunch_GetResult_Event_response(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_GetResult_Event msg_;
};

class Init_RocketLaunch_GetResult_Event_info
{
public:
  Init_RocketLaunch_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RocketLaunch_GetResult_Event_request info(::hw4_interfaces::action::RocketLaunch_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RocketLaunch_GetResult_Event_request(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::RocketLaunch_GetResult_Event>()
{
  return hw4_interfaces::action::builder::Init_RocketLaunch_GetResult_Event_info();
}

}  // namespace hw4_interfaces


namespace hw4_interfaces
{

namespace action
{

namespace builder
{

class Init_RocketLaunch_FeedbackMessage_feedback
{
public:
  explicit Init_RocketLaunch_FeedbackMessage_feedback(::hw4_interfaces::action::RocketLaunch_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::hw4_interfaces::action::RocketLaunch_FeedbackMessage feedback(::hw4_interfaces::action::RocketLaunch_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_FeedbackMessage msg_;
};

class Init_RocketLaunch_FeedbackMessage_goal_id
{
public:
  Init_RocketLaunch_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RocketLaunch_FeedbackMessage_feedback goal_id(::hw4_interfaces::action::RocketLaunch_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RocketLaunch_FeedbackMessage_feedback(msg_);
  }

private:
  ::hw4_interfaces::action::RocketLaunch_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interfaces::action::RocketLaunch_FeedbackMessage>()
{
  return hw4_interfaces::action::builder::Init_RocketLaunch_FeedbackMessage_goal_id();
}

}  // namespace hw4_interfaces

#endif  // HW4_INTERFACES__ACTION__DETAIL__ROCKET_LAUNCH__BUILDER_HPP_
