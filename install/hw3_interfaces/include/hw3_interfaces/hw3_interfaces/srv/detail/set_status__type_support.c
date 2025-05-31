// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hw3_interfaces:srv/SetStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hw3_interfaces/srv/detail/set_status__rosidl_typesupport_introspection_c.h"
#include "hw3_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hw3_interfaces/srv/detail/set_status__functions.h"
#include "hw3_interfaces/srv/detail/set_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hw3_interfaces__srv__SetStatus_Request__rosidl_typesupport_introspection_c__SetStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw3_interfaces__srv__SetStatus_Request__init(message_memory);
}

void hw3_interfaces__srv__SetStatus_Request__rosidl_typesupport_introspection_c__SetStatus_Request_fini_function(void * message_memory)
{
  hw3_interfaces__srv__SetStatus_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hw3_interfaces__srv__SetStatus_Request__rosidl_typesupport_introspection_c__SetStatus_Request_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw3_interfaces__srv__SetStatus_Request, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw3_interfaces__srv__SetStatus_Request__rosidl_typesupport_introspection_c__SetStatus_Request_message_members = {
  "hw3_interfaces__srv",  // message namespace
  "SetStatus_Request",  // message name
  1,  // number of fields
  sizeof(hw3_interfaces__srv__SetStatus_Request),
  false,  // has_any_key_member_
  hw3_interfaces__srv__SetStatus_Request__rosidl_typesupport_introspection_c__SetStatus_Request_message_member_array,  // message members
  hw3_interfaces__srv__SetStatus_Request__rosidl_typesupport_introspection_c__SetStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  hw3_interfaces__srv__SetStatus_Request__rosidl_typesupport_introspection_c__SetStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw3_interfaces__srv__SetStatus_Request__rosidl_typesupport_introspection_c__SetStatus_Request_message_type_support_handle = {
  0,
  &hw3_interfaces__srv__SetStatus_Request__rosidl_typesupport_introspection_c__SetStatus_Request_message_members,
  get_message_typesupport_handle_function,
  &hw3_interfaces__srv__SetStatus_Request__get_type_hash,
  &hw3_interfaces__srv__SetStatus_Request__get_type_description,
  &hw3_interfaces__srv__SetStatus_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw3_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetStatus_Request)() {
  if (!hw3_interfaces__srv__SetStatus_Request__rosidl_typesupport_introspection_c__SetStatus_Request_message_type_support_handle.typesupport_identifier) {
    hw3_interfaces__srv__SetStatus_Request__rosidl_typesupport_introspection_c__SetStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw3_interfaces__srv__SetStatus_Request__rosidl_typesupport_introspection_c__SetStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hw3_interfaces/srv/detail/set_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hw3_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_status__functions.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hw3_interfaces__srv__SetStatus_Response__rosidl_typesupport_introspection_c__SetStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw3_interfaces__srv__SetStatus_Response__init(message_memory);
}

void hw3_interfaces__srv__SetStatus_Response__rosidl_typesupport_introspection_c__SetStatus_Response_fini_function(void * message_memory)
{
  hw3_interfaces__srv__SetStatus_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hw3_interfaces__srv__SetStatus_Response__rosidl_typesupport_introspection_c__SetStatus_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw3_interfaces__srv__SetStatus_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw3_interfaces__srv__SetStatus_Response__rosidl_typesupport_introspection_c__SetStatus_Response_message_members = {
  "hw3_interfaces__srv",  // message namespace
  "SetStatus_Response",  // message name
  1,  // number of fields
  sizeof(hw3_interfaces__srv__SetStatus_Response),
  false,  // has_any_key_member_
  hw3_interfaces__srv__SetStatus_Response__rosidl_typesupport_introspection_c__SetStatus_Response_message_member_array,  // message members
  hw3_interfaces__srv__SetStatus_Response__rosidl_typesupport_introspection_c__SetStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  hw3_interfaces__srv__SetStatus_Response__rosidl_typesupport_introspection_c__SetStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw3_interfaces__srv__SetStatus_Response__rosidl_typesupport_introspection_c__SetStatus_Response_message_type_support_handle = {
  0,
  &hw3_interfaces__srv__SetStatus_Response__rosidl_typesupport_introspection_c__SetStatus_Response_message_members,
  get_message_typesupport_handle_function,
  &hw3_interfaces__srv__SetStatus_Response__get_type_hash,
  &hw3_interfaces__srv__SetStatus_Response__get_type_description,
  &hw3_interfaces__srv__SetStatus_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw3_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetStatus_Response)() {
  if (!hw3_interfaces__srv__SetStatus_Response__rosidl_typesupport_introspection_c__SetStatus_Response_message_type_support_handle.typesupport_identifier) {
    hw3_interfaces__srv__SetStatus_Response__rosidl_typesupport_introspection_c__SetStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw3_interfaces__srv__SetStatus_Response__rosidl_typesupport_introspection_c__SetStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hw3_interfaces/srv/detail/set_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hw3_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_status__functions.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_status__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "hw3_interfaces/srv/set_status.h"
// Member `request`
// Member `response`
// already included above
// #include "hw3_interfaces/srv/detail/set_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw3_interfaces__srv__SetStatus_Event__init(message_memory);
}

void hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_fini_function(void * message_memory)
{
  hw3_interfaces__srv__SetStatus_Event__fini(message_memory);
}

size_t hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__size_function__SetStatus_Event__request(
  const void * untyped_member)
{
  const hw3_interfaces__srv__SetStatus_Request__Sequence * member =
    (const hw3_interfaces__srv__SetStatus_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__get_const_function__SetStatus_Event__request(
  const void * untyped_member, size_t index)
{
  const hw3_interfaces__srv__SetStatus_Request__Sequence * member =
    (const hw3_interfaces__srv__SetStatus_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__get_function__SetStatus_Event__request(
  void * untyped_member, size_t index)
{
  hw3_interfaces__srv__SetStatus_Request__Sequence * member =
    (hw3_interfaces__srv__SetStatus_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__fetch_function__SetStatus_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hw3_interfaces__srv__SetStatus_Request * item =
    ((const hw3_interfaces__srv__SetStatus_Request *)
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__get_const_function__SetStatus_Event__request(untyped_member, index));
  hw3_interfaces__srv__SetStatus_Request * value =
    (hw3_interfaces__srv__SetStatus_Request *)(untyped_value);
  *value = *item;
}

void hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__assign_function__SetStatus_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hw3_interfaces__srv__SetStatus_Request * item =
    ((hw3_interfaces__srv__SetStatus_Request *)
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__get_function__SetStatus_Event__request(untyped_member, index));
  const hw3_interfaces__srv__SetStatus_Request * value =
    (const hw3_interfaces__srv__SetStatus_Request *)(untyped_value);
  *item = *value;
}

bool hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__resize_function__SetStatus_Event__request(
  void * untyped_member, size_t size)
{
  hw3_interfaces__srv__SetStatus_Request__Sequence * member =
    (hw3_interfaces__srv__SetStatus_Request__Sequence *)(untyped_member);
  hw3_interfaces__srv__SetStatus_Request__Sequence__fini(member);
  return hw3_interfaces__srv__SetStatus_Request__Sequence__init(member, size);
}

size_t hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__size_function__SetStatus_Event__response(
  const void * untyped_member)
{
  const hw3_interfaces__srv__SetStatus_Response__Sequence * member =
    (const hw3_interfaces__srv__SetStatus_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__get_const_function__SetStatus_Event__response(
  const void * untyped_member, size_t index)
{
  const hw3_interfaces__srv__SetStatus_Response__Sequence * member =
    (const hw3_interfaces__srv__SetStatus_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__get_function__SetStatus_Event__response(
  void * untyped_member, size_t index)
{
  hw3_interfaces__srv__SetStatus_Response__Sequence * member =
    (hw3_interfaces__srv__SetStatus_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__fetch_function__SetStatus_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hw3_interfaces__srv__SetStatus_Response * item =
    ((const hw3_interfaces__srv__SetStatus_Response *)
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__get_const_function__SetStatus_Event__response(untyped_member, index));
  hw3_interfaces__srv__SetStatus_Response * value =
    (hw3_interfaces__srv__SetStatus_Response *)(untyped_value);
  *value = *item;
}

void hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__assign_function__SetStatus_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hw3_interfaces__srv__SetStatus_Response * item =
    ((hw3_interfaces__srv__SetStatus_Response *)
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__get_function__SetStatus_Event__response(untyped_member, index));
  const hw3_interfaces__srv__SetStatus_Response * value =
    (const hw3_interfaces__srv__SetStatus_Response *)(untyped_value);
  *item = *value;
}

bool hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__resize_function__SetStatus_Event__response(
  void * untyped_member, size_t size)
{
  hw3_interfaces__srv__SetStatus_Response__Sequence * member =
    (hw3_interfaces__srv__SetStatus_Response__Sequence *)(untyped_member);
  hw3_interfaces__srv__SetStatus_Response__Sequence__fini(member);
  return hw3_interfaces__srv__SetStatus_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw3_interfaces__srv__SetStatus_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(hw3_interfaces__srv__SetStatus_Event, request),  // bytes offset in struct
    NULL,  // default value
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__size_function__SetStatus_Event__request,  // size() function pointer
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__get_const_function__SetStatus_Event__request,  // get_const(index) function pointer
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__get_function__SetStatus_Event__request,  // get(index) function pointer
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__fetch_function__SetStatus_Event__request,  // fetch(index, &value) function pointer
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__assign_function__SetStatus_Event__request,  // assign(index, value) function pointer
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__resize_function__SetStatus_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(hw3_interfaces__srv__SetStatus_Event, response),  // bytes offset in struct
    NULL,  // default value
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__size_function__SetStatus_Event__response,  // size() function pointer
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__get_const_function__SetStatus_Event__response,  // get_const(index) function pointer
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__get_function__SetStatus_Event__response,  // get(index) function pointer
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__fetch_function__SetStatus_Event__response,  // fetch(index, &value) function pointer
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__assign_function__SetStatus_Event__response,  // assign(index, value) function pointer
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__resize_function__SetStatus_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_message_members = {
  "hw3_interfaces__srv",  // message namespace
  "SetStatus_Event",  // message name
  3,  // number of fields
  sizeof(hw3_interfaces__srv__SetStatus_Event),
  false,  // has_any_key_member_
  hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_message_member_array,  // message members
  hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_message_type_support_handle = {
  0,
  &hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_message_members,
  get_message_typesupport_handle_function,
  &hw3_interfaces__srv__SetStatus_Event__get_type_hash,
  &hw3_interfaces__srv__SetStatus_Event__get_type_description,
  &hw3_interfaces__srv__SetStatus_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw3_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetStatus_Event)() {
  hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetStatus_Request)();
  hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetStatus_Response)();
  if (!hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_message_type_support_handle.typesupport_identifier) {
    hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hw3_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hw3_interfaces__srv__detail__set_status__rosidl_typesupport_introspection_c__SetStatus_service_members = {
  "hw3_interfaces__srv",  // service namespace
  "SetStatus",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // hw3_interfaces__srv__detail__set_status__rosidl_typesupport_introspection_c__SetStatus_Request_message_type_support_handle,
  NULL,  // response message
  // hw3_interfaces__srv__detail__set_status__rosidl_typesupport_introspection_c__SetStatus_Response_message_type_support_handle
  NULL  // event_message
  // hw3_interfaces__srv__detail__set_status__rosidl_typesupport_introspection_c__SetStatus_Response_message_type_support_handle
};


static rosidl_service_type_support_t hw3_interfaces__srv__detail__set_status__rosidl_typesupport_introspection_c__SetStatus_service_type_support_handle = {
  0,
  &hw3_interfaces__srv__detail__set_status__rosidl_typesupport_introspection_c__SetStatus_service_members,
  get_service_typesupport_handle_function,
  &hw3_interfaces__srv__SetStatus_Request__rosidl_typesupport_introspection_c__SetStatus_Request_message_type_support_handle,
  &hw3_interfaces__srv__SetStatus_Response__rosidl_typesupport_introspection_c__SetStatus_Response_message_type_support_handle,
  &hw3_interfaces__srv__SetStatus_Event__rosidl_typesupport_introspection_c__SetStatus_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hw3_interfaces,
    srv,
    SetStatus
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hw3_interfaces,
    srv,
    SetStatus
  ),
  &hw3_interfaces__srv__SetStatus__get_type_hash,
  &hw3_interfaces__srv__SetStatus__get_type_description,
  &hw3_interfaces__srv__SetStatus__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetStatus_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetStatus_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetStatus_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw3_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetStatus)(void) {
  if (!hw3_interfaces__srv__detail__set_status__rosidl_typesupport_introspection_c__SetStatus_service_type_support_handle.typesupport_identifier) {
    hw3_interfaces__srv__detail__set_status__rosidl_typesupport_introspection_c__SetStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hw3_interfaces__srv__detail__set_status__rosidl_typesupport_introspection_c__SetStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetStatus_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetStatus_Event)()->data;
  }

  return &hw3_interfaces__srv__detail__set_status__rosidl_typesupport_introspection_c__SetStatus_service_type_support_handle;
}
