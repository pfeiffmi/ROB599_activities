// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hw3_interfaces:srv/SetLogging.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw3_interfaces/srv/set_logging.h"


#ifndef HW3_INTERFACES__SRV__DETAIL__SET_LOGGING__STRUCT_H_
#define HW3_INTERFACES__SRV__DETAIL__SET_LOGGING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'log_file'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetLogging in the package hw3_interfaces.
typedef struct hw3_interfaces__srv__SetLogging_Request
{
  bool log_data;
  rosidl_runtime_c__String log_file;
} hw3_interfaces__srv__SetLogging_Request;

// Struct for a sequence of hw3_interfaces__srv__SetLogging_Request.
typedef struct hw3_interfaces__srv__SetLogging_Request__Sequence
{
  hw3_interfaces__srv__SetLogging_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw3_interfaces__srv__SetLogging_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetLogging in the package hw3_interfaces.
typedef struct hw3_interfaces__srv__SetLogging_Response
{
  bool success;
} hw3_interfaces__srv__SetLogging_Response;

// Struct for a sequence of hw3_interfaces__srv__SetLogging_Response.
typedef struct hw3_interfaces__srv__SetLogging_Response__Sequence
{
  hw3_interfaces__srv__SetLogging_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw3_interfaces__srv__SetLogging_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  hw3_interfaces__srv__SetLogging_Event__request__MAX_SIZE = 1
};
// response
enum
{
  hw3_interfaces__srv__SetLogging_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetLogging in the package hw3_interfaces.
typedef struct hw3_interfaces__srv__SetLogging_Event
{
  service_msgs__msg__ServiceEventInfo info;
  hw3_interfaces__srv__SetLogging_Request__Sequence request;
  hw3_interfaces__srv__SetLogging_Response__Sequence response;
} hw3_interfaces__srv__SetLogging_Event;

// Struct for a sequence of hw3_interfaces__srv__SetLogging_Event.
typedef struct hw3_interfaces__srv__SetLogging_Event__Sequence
{
  hw3_interfaces__srv__SetLogging_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw3_interfaces__srv__SetLogging_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HW3_INTERFACES__SRV__DETAIL__SET_LOGGING__STRUCT_H_
