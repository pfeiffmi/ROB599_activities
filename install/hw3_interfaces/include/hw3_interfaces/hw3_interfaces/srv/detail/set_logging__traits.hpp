// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hw3_interfaces:srv/SetLogging.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw3_interfaces/srv/set_logging.hpp"


#ifndef HW3_INTERFACES__SRV__DETAIL__SET_LOGGING__TRAITS_HPP_
#define HW3_INTERFACES__SRV__DETAIL__SET_LOGGING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hw3_interfaces/srv/detail/set_logging__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hw3_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLogging_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: log_data
  {
    out << "log_data: ";
    rosidl_generator_traits::value_to_yaml(msg.log_data, out);
    out << ", ";
  }

  // member: log_file
  {
    out << "log_file: ";
    rosidl_generator_traits::value_to_yaml(msg.log_file, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLogging_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: log_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "log_data: ";
    rosidl_generator_traits::value_to_yaml(msg.log_data, out);
    out << "\n";
  }

  // member: log_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "log_file: ";
    rosidl_generator_traits::value_to_yaml(msg.log_file, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLogging_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hw3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw3_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw3_interfaces::srv::SetLogging_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw3_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw3_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const hw3_interfaces::srv::SetLogging_Request & msg)
{
  return hw3_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hw3_interfaces::srv::SetLogging_Request>()
{
  return "hw3_interfaces::srv::SetLogging_Request";
}

template<>
inline const char * name<hw3_interfaces::srv::SetLogging_Request>()
{
  return "hw3_interfaces/srv/SetLogging_Request";
}

template<>
struct has_fixed_size<hw3_interfaces::srv::SetLogging_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hw3_interfaces::srv::SetLogging_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hw3_interfaces::srv::SetLogging_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hw3_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLogging_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLogging_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLogging_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hw3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw3_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw3_interfaces::srv::SetLogging_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw3_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw3_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const hw3_interfaces::srv::SetLogging_Response & msg)
{
  return hw3_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hw3_interfaces::srv::SetLogging_Response>()
{
  return "hw3_interfaces::srv::SetLogging_Response";
}

template<>
inline const char * name<hw3_interfaces::srv::SetLogging_Response>()
{
  return "hw3_interfaces/srv/SetLogging_Response";
}

template<>
struct has_fixed_size<hw3_interfaces::srv::SetLogging_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hw3_interfaces::srv::SetLogging_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hw3_interfaces::srv::SetLogging_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace hw3_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLogging_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLogging_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLogging_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hw3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hw3_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw3_interfaces::srv::SetLogging_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw3_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw3_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const hw3_interfaces::srv::SetLogging_Event & msg)
{
  return hw3_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hw3_interfaces::srv::SetLogging_Event>()
{
  return "hw3_interfaces::srv::SetLogging_Event";
}

template<>
inline const char * name<hw3_interfaces::srv::SetLogging_Event>()
{
  return "hw3_interfaces/srv/SetLogging_Event";
}

template<>
struct has_fixed_size<hw3_interfaces::srv::SetLogging_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hw3_interfaces::srv::SetLogging_Event>
  : std::integral_constant<bool, has_bounded_size<hw3_interfaces::srv::SetLogging_Request>::value && has_bounded_size<hw3_interfaces::srv::SetLogging_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<hw3_interfaces::srv::SetLogging_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hw3_interfaces::srv::SetLogging>()
{
  return "hw3_interfaces::srv::SetLogging";
}

template<>
inline const char * name<hw3_interfaces::srv::SetLogging>()
{
  return "hw3_interfaces/srv/SetLogging";
}

template<>
struct has_fixed_size<hw3_interfaces::srv::SetLogging>
  : std::integral_constant<
    bool,
    has_fixed_size<hw3_interfaces::srv::SetLogging_Request>::value &&
    has_fixed_size<hw3_interfaces::srv::SetLogging_Response>::value
  >
{
};

template<>
struct has_bounded_size<hw3_interfaces::srv::SetLogging>
  : std::integral_constant<
    bool,
    has_bounded_size<hw3_interfaces::srv::SetLogging_Request>::value &&
    has_bounded_size<hw3_interfaces::srv::SetLogging_Response>::value
  >
{
};

template<>
struct is_service<hw3_interfaces::srv::SetLogging>
  : std::true_type
{
};

template<>
struct is_service_request<hw3_interfaces::srv::SetLogging_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hw3_interfaces::srv::SetLogging_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HW3_INTERFACES__SRV__DETAIL__SET_LOGGING__TRAITS_HPP_
