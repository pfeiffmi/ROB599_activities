// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rob599_msgs:srv/Doubler.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rob599_msgs/srv/doubler.h"


#ifndef ROB599_MSGS__SRV__DETAIL__DOUBLER__STRUCT_H_
#define ROB599_MSGS__SRV__DETAIL__DOUBLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Doubler in the package rob599_msgs.
typedef struct rob599_msgs__srv__Doubler_Request
{
  int64_t number;
} rob599_msgs__srv__Doubler_Request;

// Struct for a sequence of rob599_msgs__srv__Doubler_Request.
typedef struct rob599_msgs__srv__Doubler_Request__Sequence
{
  rob599_msgs__srv__Doubler_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_msgs__srv__Doubler_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Doubler in the package rob599_msgs.
typedef struct rob599_msgs__srv__Doubler_Response
{
  int64_t doubled;
} rob599_msgs__srv__Doubler_Response;

// Struct for a sequence of rob599_msgs__srv__Doubler_Response.
typedef struct rob599_msgs__srv__Doubler_Response__Sequence
{
  rob599_msgs__srv__Doubler_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_msgs__srv__Doubler_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rob599_msgs__srv__Doubler_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rob599_msgs__srv__Doubler_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Doubler in the package rob599_msgs.
typedef struct rob599_msgs__srv__Doubler_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rob599_msgs__srv__Doubler_Request__Sequence request;
  rob599_msgs__srv__Doubler_Response__Sequence response;
} rob599_msgs__srv__Doubler_Event;

// Struct for a sequence of rob599_msgs__srv__Doubler_Event.
typedef struct rob599_msgs__srv__Doubler_Event__Sequence
{
  rob599_msgs__srv__Doubler_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_msgs__srv__Doubler_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROB599_MSGS__SRV__DETAIL__DOUBLER__STRUCT_H_
