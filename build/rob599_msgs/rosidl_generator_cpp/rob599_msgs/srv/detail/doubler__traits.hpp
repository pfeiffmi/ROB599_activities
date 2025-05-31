// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rob599_msgs:srv/Doubler.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rob599_msgs/srv/doubler.hpp"


#ifndef ROB599_MSGS__SRV__DETAIL__DOUBLER__TRAITS_HPP_
#define ROB599_MSGS__SRV__DETAIL__DOUBLER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rob599_msgs/srv/detail/doubler__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rob599_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Doubler_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Doubler_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Doubler_Request & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs::srv::Doubler_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs::srv::Doubler_Request & msg)
{
  return rob599_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs::srv::Doubler_Request>()
{
  return "rob599_msgs::srv::Doubler_Request";
}

template<>
inline const char * name<rob599_msgs::srv::Doubler_Request>()
{
  return "rob599_msgs/srv/Doubler_Request";
}

template<>
struct has_fixed_size<rob599_msgs::srv::Doubler_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rob599_msgs::srv::Doubler_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rob599_msgs::srv::Doubler_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rob599_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Doubler_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: doubled
  {
    out << "doubled: ";
    rosidl_generator_traits::value_to_yaml(msg.doubled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Doubler_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: doubled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "doubled: ";
    rosidl_generator_traits::value_to_yaml(msg.doubled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Doubler_Response & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs::srv::Doubler_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs::srv::Doubler_Response & msg)
{
  return rob599_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs::srv::Doubler_Response>()
{
  return "rob599_msgs::srv::Doubler_Response";
}

template<>
inline const char * name<rob599_msgs::srv::Doubler_Response>()
{
  return "rob599_msgs/srv/Doubler_Response";
}

template<>
struct has_fixed_size<rob599_msgs::srv::Doubler_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rob599_msgs::srv::Doubler_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rob599_msgs::srv::Doubler_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace rob599_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Doubler_Event & msg,
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
  const Doubler_Event & msg,
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

inline std::string to_yaml(const Doubler_Event & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs::srv::Doubler_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs::srv::Doubler_Event & msg)
{
  return rob599_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs::srv::Doubler_Event>()
{
  return "rob599_msgs::srv::Doubler_Event";
}

template<>
inline const char * name<rob599_msgs::srv::Doubler_Event>()
{
  return "rob599_msgs/srv/Doubler_Event";
}

template<>
struct has_fixed_size<rob599_msgs::srv::Doubler_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rob599_msgs::srv::Doubler_Event>
  : std::integral_constant<bool, has_bounded_size<rob599_msgs::srv::Doubler_Request>::value && has_bounded_size<rob599_msgs::srv::Doubler_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<rob599_msgs::srv::Doubler_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rob599_msgs::srv::Doubler>()
{
  return "rob599_msgs::srv::Doubler";
}

template<>
inline const char * name<rob599_msgs::srv::Doubler>()
{
  return "rob599_msgs/srv/Doubler";
}

template<>
struct has_fixed_size<rob599_msgs::srv::Doubler>
  : std::integral_constant<
    bool,
    has_fixed_size<rob599_msgs::srv::Doubler_Request>::value &&
    has_fixed_size<rob599_msgs::srv::Doubler_Response>::value
  >
{
};

template<>
struct has_bounded_size<rob599_msgs::srv::Doubler>
  : std::integral_constant<
    bool,
    has_bounded_size<rob599_msgs::srv::Doubler_Request>::value &&
    has_bounded_size<rob599_msgs::srv::Doubler_Response>::value
  >
{
};

template<>
struct is_service<rob599_msgs::srv::Doubler>
  : std::true_type
{
};

template<>
struct is_service_request<rob599_msgs::srv::Doubler_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rob599_msgs::srv::Doubler_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROB599_MSGS__SRV__DETAIL__DOUBLER__TRAITS_HPP_
