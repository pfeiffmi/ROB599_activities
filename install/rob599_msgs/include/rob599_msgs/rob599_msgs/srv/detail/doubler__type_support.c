// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rob599_msgs:srv/Doubler.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rob599_msgs/srv/detail/doubler__rosidl_typesupport_introspection_c.h"
#include "rob599_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rob599_msgs/srv/detail/doubler__functions.h"
#include "rob599_msgs/srv/detail/doubler__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rob599_msgs__srv__Doubler_Request__rosidl_typesupport_introspection_c__Doubler_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rob599_msgs__srv__Doubler_Request__init(message_memory);
}

void rob599_msgs__srv__Doubler_Request__rosidl_typesupport_introspection_c__Doubler_Request_fini_function(void * message_memory)
{
  rob599_msgs__srv__Doubler_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rob599_msgs__srv__Doubler_Request__rosidl_typesupport_introspection_c__Doubler_Request_message_member_array[1] = {
  {
    "number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rob599_msgs__srv__Doubler_Request, number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rob599_msgs__srv__Doubler_Request__rosidl_typesupport_introspection_c__Doubler_Request_message_members = {
  "rob599_msgs__srv",  // message namespace
  "Doubler_Request",  // message name
  1,  // number of fields
  sizeof(rob599_msgs__srv__Doubler_Request),
  false,  // has_any_key_member_
  rob599_msgs__srv__Doubler_Request__rosidl_typesupport_introspection_c__Doubler_Request_message_member_array,  // message members
  rob599_msgs__srv__Doubler_Request__rosidl_typesupport_introspection_c__Doubler_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rob599_msgs__srv__Doubler_Request__rosidl_typesupport_introspection_c__Doubler_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rob599_msgs__srv__Doubler_Request__rosidl_typesupport_introspection_c__Doubler_Request_message_type_support_handle = {
  0,
  &rob599_msgs__srv__Doubler_Request__rosidl_typesupport_introspection_c__Doubler_Request_message_members,
  get_message_typesupport_handle_function,
  &rob599_msgs__srv__Doubler_Request__get_type_hash,
  &rob599_msgs__srv__Doubler_Request__get_type_description,
  &rob599_msgs__srv__Doubler_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rob599_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_msgs, srv, Doubler_Request)() {
  if (!rob599_msgs__srv__Doubler_Request__rosidl_typesupport_introspection_c__Doubler_Request_message_type_support_handle.typesupport_identifier) {
    rob599_msgs__srv__Doubler_Request__rosidl_typesupport_introspection_c__Doubler_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rob599_msgs__srv__Doubler_Request__rosidl_typesupport_introspection_c__Doubler_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rob599_msgs/srv/detail/doubler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rob599_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rob599_msgs/srv/detail/doubler__functions.h"
// already included above
// #include "rob599_msgs/srv/detail/doubler__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rob599_msgs__srv__Doubler_Response__rosidl_typesupport_introspection_c__Doubler_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rob599_msgs__srv__Doubler_Response__init(message_memory);
}

void rob599_msgs__srv__Doubler_Response__rosidl_typesupport_introspection_c__Doubler_Response_fini_function(void * message_memory)
{
  rob599_msgs__srv__Doubler_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rob599_msgs__srv__Doubler_Response__rosidl_typesupport_introspection_c__Doubler_Response_message_member_array[1] = {
  {
    "doubled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rob599_msgs__srv__Doubler_Response, doubled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rob599_msgs__srv__Doubler_Response__rosidl_typesupport_introspection_c__Doubler_Response_message_members = {
  "rob599_msgs__srv",  // message namespace
  "Doubler_Response",  // message name
  1,  // number of fields
  sizeof(rob599_msgs__srv__Doubler_Response),
  false,  // has_any_key_member_
  rob599_msgs__srv__Doubler_Response__rosidl_typesupport_introspection_c__Doubler_Response_message_member_array,  // message members
  rob599_msgs__srv__Doubler_Response__rosidl_typesupport_introspection_c__Doubler_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rob599_msgs__srv__Doubler_Response__rosidl_typesupport_introspection_c__Doubler_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rob599_msgs__srv__Doubler_Response__rosidl_typesupport_introspection_c__Doubler_Response_message_type_support_handle = {
  0,
  &rob599_msgs__srv__Doubler_Response__rosidl_typesupport_introspection_c__Doubler_Response_message_members,
  get_message_typesupport_handle_function,
  &rob599_msgs__srv__Doubler_Response__get_type_hash,
  &rob599_msgs__srv__Doubler_Response__get_type_description,
  &rob599_msgs__srv__Doubler_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rob599_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_msgs, srv, Doubler_Response)() {
  if (!rob599_msgs__srv__Doubler_Response__rosidl_typesupport_introspection_c__Doubler_Response_message_type_support_handle.typesupport_identifier) {
    rob599_msgs__srv__Doubler_Response__rosidl_typesupport_introspection_c__Doubler_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rob599_msgs__srv__Doubler_Response__rosidl_typesupport_introspection_c__Doubler_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rob599_msgs/srv/detail/doubler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rob599_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rob599_msgs/srv/detail/doubler__functions.h"
// already included above
// #include "rob599_msgs/srv/detail/doubler__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "rob599_msgs/srv/doubler.h"
// Member `request`
// Member `response`
// already included above
// #include "rob599_msgs/srv/detail/doubler__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rob599_msgs__srv__Doubler_Event__init(message_memory);
}

void rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_fini_function(void * message_memory)
{
  rob599_msgs__srv__Doubler_Event__fini(message_memory);
}

size_t rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__size_function__Doubler_Event__request(
  const void * untyped_member)
{
  const rob599_msgs__srv__Doubler_Request__Sequence * member =
    (const rob599_msgs__srv__Doubler_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__get_const_function__Doubler_Event__request(
  const void * untyped_member, size_t index)
{
  const rob599_msgs__srv__Doubler_Request__Sequence * member =
    (const rob599_msgs__srv__Doubler_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__get_function__Doubler_Event__request(
  void * untyped_member, size_t index)
{
  rob599_msgs__srv__Doubler_Request__Sequence * member =
    (rob599_msgs__srv__Doubler_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__fetch_function__Doubler_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rob599_msgs__srv__Doubler_Request * item =
    ((const rob599_msgs__srv__Doubler_Request *)
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__get_const_function__Doubler_Event__request(untyped_member, index));
  rob599_msgs__srv__Doubler_Request * value =
    (rob599_msgs__srv__Doubler_Request *)(untyped_value);
  *value = *item;
}

void rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__assign_function__Doubler_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rob599_msgs__srv__Doubler_Request * item =
    ((rob599_msgs__srv__Doubler_Request *)
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__get_function__Doubler_Event__request(untyped_member, index));
  const rob599_msgs__srv__Doubler_Request * value =
    (const rob599_msgs__srv__Doubler_Request *)(untyped_value);
  *item = *value;
}

bool rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__resize_function__Doubler_Event__request(
  void * untyped_member, size_t size)
{
  rob599_msgs__srv__Doubler_Request__Sequence * member =
    (rob599_msgs__srv__Doubler_Request__Sequence *)(untyped_member);
  rob599_msgs__srv__Doubler_Request__Sequence__fini(member);
  return rob599_msgs__srv__Doubler_Request__Sequence__init(member, size);
}

size_t rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__size_function__Doubler_Event__response(
  const void * untyped_member)
{
  const rob599_msgs__srv__Doubler_Response__Sequence * member =
    (const rob599_msgs__srv__Doubler_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__get_const_function__Doubler_Event__response(
  const void * untyped_member, size_t index)
{
  const rob599_msgs__srv__Doubler_Response__Sequence * member =
    (const rob599_msgs__srv__Doubler_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__get_function__Doubler_Event__response(
  void * untyped_member, size_t index)
{
  rob599_msgs__srv__Doubler_Response__Sequence * member =
    (rob599_msgs__srv__Doubler_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__fetch_function__Doubler_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rob599_msgs__srv__Doubler_Response * item =
    ((const rob599_msgs__srv__Doubler_Response *)
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__get_const_function__Doubler_Event__response(untyped_member, index));
  rob599_msgs__srv__Doubler_Response * value =
    (rob599_msgs__srv__Doubler_Response *)(untyped_value);
  *value = *item;
}

void rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__assign_function__Doubler_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rob599_msgs__srv__Doubler_Response * item =
    ((rob599_msgs__srv__Doubler_Response *)
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__get_function__Doubler_Event__response(untyped_member, index));
  const rob599_msgs__srv__Doubler_Response * value =
    (const rob599_msgs__srv__Doubler_Response *)(untyped_value);
  *item = *value;
}

bool rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__resize_function__Doubler_Event__response(
  void * untyped_member, size_t size)
{
  rob599_msgs__srv__Doubler_Response__Sequence * member =
    (rob599_msgs__srv__Doubler_Response__Sequence *)(untyped_member);
  rob599_msgs__srv__Doubler_Response__Sequence__fini(member);
  return rob599_msgs__srv__Doubler_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rob599_msgs__srv__Doubler_Event, info),  // bytes offset in struct
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
    offsetof(rob599_msgs__srv__Doubler_Event, request),  // bytes offset in struct
    NULL,  // default value
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__size_function__Doubler_Event__request,  // size() function pointer
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__get_const_function__Doubler_Event__request,  // get_const(index) function pointer
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__get_function__Doubler_Event__request,  // get(index) function pointer
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__fetch_function__Doubler_Event__request,  // fetch(index, &value) function pointer
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__assign_function__Doubler_Event__request,  // assign(index, value) function pointer
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__resize_function__Doubler_Event__request  // resize(index) function pointer
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
    offsetof(rob599_msgs__srv__Doubler_Event, response),  // bytes offset in struct
    NULL,  // default value
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__size_function__Doubler_Event__response,  // size() function pointer
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__get_const_function__Doubler_Event__response,  // get_const(index) function pointer
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__get_function__Doubler_Event__response,  // get(index) function pointer
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__fetch_function__Doubler_Event__response,  // fetch(index, &value) function pointer
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__assign_function__Doubler_Event__response,  // assign(index, value) function pointer
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__resize_function__Doubler_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_message_members = {
  "rob599_msgs__srv",  // message namespace
  "Doubler_Event",  // message name
  3,  // number of fields
  sizeof(rob599_msgs__srv__Doubler_Event),
  false,  // has_any_key_member_
  rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_message_member_array,  // message members
  rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_message_type_support_handle = {
  0,
  &rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_message_members,
  get_message_typesupport_handle_function,
  &rob599_msgs__srv__Doubler_Event__get_type_hash,
  &rob599_msgs__srv__Doubler_Event__get_type_description,
  &rob599_msgs__srv__Doubler_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rob599_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_msgs, srv, Doubler_Event)() {
  rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_msgs, srv, Doubler_Request)();
  rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_msgs, srv, Doubler_Response)();
  if (!rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_message_type_support_handle.typesupport_identifier) {
    rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rob599_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rob599_msgs/srv/detail/doubler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rob599_msgs__srv__detail__doubler__rosidl_typesupport_introspection_c__Doubler_service_members = {
  "rob599_msgs__srv",  // service namespace
  "Doubler",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // rob599_msgs__srv__detail__doubler__rosidl_typesupport_introspection_c__Doubler_Request_message_type_support_handle,
  NULL,  // response message
  // rob599_msgs__srv__detail__doubler__rosidl_typesupport_introspection_c__Doubler_Response_message_type_support_handle
  NULL  // event_message
  // rob599_msgs__srv__detail__doubler__rosidl_typesupport_introspection_c__Doubler_Response_message_type_support_handle
};


static rosidl_service_type_support_t rob599_msgs__srv__detail__doubler__rosidl_typesupport_introspection_c__Doubler_service_type_support_handle = {
  0,
  &rob599_msgs__srv__detail__doubler__rosidl_typesupport_introspection_c__Doubler_service_members,
  get_service_typesupport_handle_function,
  &rob599_msgs__srv__Doubler_Request__rosidl_typesupport_introspection_c__Doubler_Request_message_type_support_handle,
  &rob599_msgs__srv__Doubler_Response__rosidl_typesupport_introspection_c__Doubler_Response_message_type_support_handle,
  &rob599_msgs__srv__Doubler_Event__rosidl_typesupport_introspection_c__Doubler_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rob599_msgs,
    srv,
    Doubler
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rob599_msgs,
    srv,
    Doubler
  ),
  &rob599_msgs__srv__Doubler__get_type_hash,
  &rob599_msgs__srv__Doubler__get_type_description,
  &rob599_msgs__srv__Doubler__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_msgs, srv, Doubler_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_msgs, srv, Doubler_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_msgs, srv, Doubler_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rob599_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_msgs, srv, Doubler)(void) {
  if (!rob599_msgs__srv__detail__doubler__rosidl_typesupport_introspection_c__Doubler_service_type_support_handle.typesupport_identifier) {
    rob599_msgs__srv__detail__doubler__rosidl_typesupport_introspection_c__Doubler_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rob599_msgs__srv__detail__doubler__rosidl_typesupport_introspection_c__Doubler_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_msgs, srv, Doubler_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_msgs, srv, Doubler_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_msgs, srv, Doubler_Event)()->data;
  }

  return &rob599_msgs__srv__detail__doubler__rosidl_typesupport_introspection_c__Doubler_service_type_support_handle;
}
