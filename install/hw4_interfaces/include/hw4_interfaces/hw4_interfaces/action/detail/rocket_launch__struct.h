// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hw4_interfaces:action/RocketLaunch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw4_interfaces/action/rocket_launch.h"


#ifndef HW4_INTERFACES__ACTION__DETAIL__ROCKET_LAUNCH__STRUCT_H_
#define HW4_INTERFACES__ACTION__DETAIL__ROCKET_LAUNCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/RocketLaunch in the package hw4_interfaces.
typedef struct hw4_interfaces__action__RocketLaunch_Goal
{
  int64_t number;
} hw4_interfaces__action__RocketLaunch_Goal;

// Struct for a sequence of hw4_interfaces__action__RocketLaunch_Goal.
typedef struct hw4_interfaces__action__RocketLaunch_Goal__Sequence
{
  hw4_interfaces__action__RocketLaunch_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interfaces__action__RocketLaunch_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/RocketLaunch in the package hw4_interfaces.
typedef struct hw4_interfaces__action__RocketLaunch_Result
{
  rosidl_runtime_c__int64__Sequence sequence;
} hw4_interfaces__action__RocketLaunch_Result;

// Struct for a sequence of hw4_interfaces__action__RocketLaunch_Result.
typedef struct hw4_interfaces__action__RocketLaunch_Result__Sequence
{
  hw4_interfaces__action__RocketLaunch_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interfaces__action__RocketLaunch_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/RocketLaunch in the package hw4_interfaces.
typedef struct hw4_interfaces__action__RocketLaunch_Feedback
{
  int64_t progress;
} hw4_interfaces__action__RocketLaunch_Feedback;

// Struct for a sequence of hw4_interfaces__action__RocketLaunch_Feedback.
typedef struct hw4_interfaces__action__RocketLaunch_Feedback__Sequence
{
  hw4_interfaces__action__RocketLaunch_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interfaces__action__RocketLaunch_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "hw4_interfaces/action/detail/rocket_launch__struct.h"

/// Struct defined in action/RocketLaunch in the package hw4_interfaces.
typedef struct hw4_interfaces__action__RocketLaunch_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  hw4_interfaces__action__RocketLaunch_Goal goal;
} hw4_interfaces__action__RocketLaunch_SendGoal_Request;

// Struct for a sequence of hw4_interfaces__action__RocketLaunch_SendGoal_Request.
typedef struct hw4_interfaces__action__RocketLaunch_SendGoal_Request__Sequence
{
  hw4_interfaces__action__RocketLaunch_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interfaces__action__RocketLaunch_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RocketLaunch in the package hw4_interfaces.
typedef struct hw4_interfaces__action__RocketLaunch_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} hw4_interfaces__action__RocketLaunch_SendGoal_Response;

// Struct for a sequence of hw4_interfaces__action__RocketLaunch_SendGoal_Response.
typedef struct hw4_interfaces__action__RocketLaunch_SendGoal_Response__Sequence
{
  hw4_interfaces__action__RocketLaunch_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interfaces__action__RocketLaunch_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  hw4_interfaces__action__RocketLaunch_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  hw4_interfaces__action__RocketLaunch_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/RocketLaunch in the package hw4_interfaces.
typedef struct hw4_interfaces__action__RocketLaunch_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  hw4_interfaces__action__RocketLaunch_SendGoal_Request__Sequence request;
  hw4_interfaces__action__RocketLaunch_SendGoal_Response__Sequence response;
} hw4_interfaces__action__RocketLaunch_SendGoal_Event;

// Struct for a sequence of hw4_interfaces__action__RocketLaunch_SendGoal_Event.
typedef struct hw4_interfaces__action__RocketLaunch_SendGoal_Event__Sequence
{
  hw4_interfaces__action__RocketLaunch_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interfaces__action__RocketLaunch_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RocketLaunch in the package hw4_interfaces.
typedef struct hw4_interfaces__action__RocketLaunch_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} hw4_interfaces__action__RocketLaunch_GetResult_Request;

// Struct for a sequence of hw4_interfaces__action__RocketLaunch_GetResult_Request.
typedef struct hw4_interfaces__action__RocketLaunch_GetResult_Request__Sequence
{
  hw4_interfaces__action__RocketLaunch_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interfaces__action__RocketLaunch_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__struct.h"

/// Struct defined in action/RocketLaunch in the package hw4_interfaces.
typedef struct hw4_interfaces__action__RocketLaunch_GetResult_Response
{
  int8_t status;
  hw4_interfaces__action__RocketLaunch_Result result;
} hw4_interfaces__action__RocketLaunch_GetResult_Response;

// Struct for a sequence of hw4_interfaces__action__RocketLaunch_GetResult_Response.
typedef struct hw4_interfaces__action__RocketLaunch_GetResult_Response__Sequence
{
  hw4_interfaces__action__RocketLaunch_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interfaces__action__RocketLaunch_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  hw4_interfaces__action__RocketLaunch_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  hw4_interfaces__action__RocketLaunch_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/RocketLaunch in the package hw4_interfaces.
typedef struct hw4_interfaces__action__RocketLaunch_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  hw4_interfaces__action__RocketLaunch_GetResult_Request__Sequence request;
  hw4_interfaces__action__RocketLaunch_GetResult_Response__Sequence response;
} hw4_interfaces__action__RocketLaunch_GetResult_Event;

// Struct for a sequence of hw4_interfaces__action__RocketLaunch_GetResult_Event.
typedef struct hw4_interfaces__action__RocketLaunch_GetResult_Event__Sequence
{
  hw4_interfaces__action__RocketLaunch_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interfaces__action__RocketLaunch_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__struct.h"

/// Struct defined in action/RocketLaunch in the package hw4_interfaces.
typedef struct hw4_interfaces__action__RocketLaunch_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  hw4_interfaces__action__RocketLaunch_Feedback feedback;
} hw4_interfaces__action__RocketLaunch_FeedbackMessage;

// Struct for a sequence of hw4_interfaces__action__RocketLaunch_FeedbackMessage.
typedef struct hw4_interfaces__action__RocketLaunch_FeedbackMessage__Sequence
{
  hw4_interfaces__action__RocketLaunch_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interfaces__action__RocketLaunch_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HW4_INTERFACES__ACTION__DETAIL__ROCKET_LAUNCH__STRUCT_H_
