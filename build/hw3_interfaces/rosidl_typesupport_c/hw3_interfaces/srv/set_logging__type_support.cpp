// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from hw3_interfaces:srv/SetLogging.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hw3_interfaces/srv/detail/set_logging__struct.h"
#include "hw3_interfaces/srv/detail/set_logging__type_support.h"
#include "hw3_interfaces/srv/detail/set_logging__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetLogging_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLogging_Request_type_support_ids_t;

static const _SetLogging_Request_type_support_ids_t _SetLogging_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLogging_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLogging_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLogging_Request_type_support_symbol_names_t _SetLogging_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw3_interfaces, srv, SetLogging_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetLogging_Request)),
  }
};

typedef struct _SetLogging_Request_type_support_data_t
{
  void * data[2];
} _SetLogging_Request_type_support_data_t;

static _SetLogging_Request_type_support_data_t _SetLogging_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLogging_Request_message_typesupport_map = {
  2,
  "hw3_interfaces",
  &_SetLogging_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetLogging_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetLogging_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLogging_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLogging_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw3_interfaces__srv__SetLogging_Request__get_type_hash,
  &hw3_interfaces__srv__SetLogging_Request__get_type_description,
  &hw3_interfaces__srv__SetLogging_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hw3_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw3_interfaces, srv, SetLogging_Request)() {
  return &::hw3_interfaces::srv::rosidl_typesupport_c::SetLogging_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_logging__struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_logging__type_support.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_logging__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetLogging_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLogging_Response_type_support_ids_t;

static const _SetLogging_Response_type_support_ids_t _SetLogging_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLogging_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLogging_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLogging_Response_type_support_symbol_names_t _SetLogging_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw3_interfaces, srv, SetLogging_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetLogging_Response)),
  }
};

typedef struct _SetLogging_Response_type_support_data_t
{
  void * data[2];
} _SetLogging_Response_type_support_data_t;

static _SetLogging_Response_type_support_data_t _SetLogging_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLogging_Response_message_typesupport_map = {
  2,
  "hw3_interfaces",
  &_SetLogging_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetLogging_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetLogging_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLogging_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLogging_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw3_interfaces__srv__SetLogging_Response__get_type_hash,
  &hw3_interfaces__srv__SetLogging_Response__get_type_description,
  &hw3_interfaces__srv__SetLogging_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hw3_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw3_interfaces, srv, SetLogging_Response)() {
  return &::hw3_interfaces::srv::rosidl_typesupport_c::SetLogging_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_logging__struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_logging__type_support.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_logging__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetLogging_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLogging_Event_type_support_ids_t;

static const _SetLogging_Event_type_support_ids_t _SetLogging_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLogging_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLogging_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLogging_Event_type_support_symbol_names_t _SetLogging_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw3_interfaces, srv, SetLogging_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetLogging_Event)),
  }
};

typedef struct _SetLogging_Event_type_support_data_t
{
  void * data[2];
} _SetLogging_Event_type_support_data_t;

static _SetLogging_Event_type_support_data_t _SetLogging_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLogging_Event_message_typesupport_map = {
  2,
  "hw3_interfaces",
  &_SetLogging_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetLogging_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetLogging_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLogging_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLogging_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hw3_interfaces__srv__SetLogging_Event__get_type_hash,
  &hw3_interfaces__srv__SetLogging_Event__get_type_description,
  &hw3_interfaces__srv__SetLogging_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hw3_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hw3_interfaces, srv, SetLogging_Event)() {
  return &::hw3_interfaces::srv::rosidl_typesupport_c::SetLogging_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_logging__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetLogging_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLogging_type_support_ids_t;

static const _SetLogging_type_support_ids_t _SetLogging_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLogging_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLogging_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLogging_type_support_symbol_names_t _SetLogging_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw3_interfaces, srv, SetLogging)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw3_interfaces, srv, SetLogging)),
  }
};

typedef struct _SetLogging_type_support_data_t
{
  void * data[2];
} _SetLogging_type_support_data_t;

static _SetLogging_type_support_data_t _SetLogging_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLogging_service_typesupport_map = {
  2,
  "hw3_interfaces",
  &_SetLogging_service_typesupport_ids.typesupport_identifier[0],
  &_SetLogging_service_typesupport_symbol_names.symbol_name[0],
  &_SetLogging_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetLogging_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLogging_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetLogging_Request_message_type_support_handle,
  &SetLogging_Response_message_type_support_handle,
  &SetLogging_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hw3_interfaces,
    srv,
    SetLogging
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hw3_interfaces,
    srv,
    SetLogging
  ),
  &hw3_interfaces__srv__SetLogging__get_type_hash,
  &hw3_interfaces__srv__SetLogging__get_type_description,
  &hw3_interfaces__srv__SetLogging__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hw3_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hw3_interfaces, srv, SetLogging)() {
  return &::hw3_interfaces::srv::rosidl_typesupport_c::SetLogging_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
