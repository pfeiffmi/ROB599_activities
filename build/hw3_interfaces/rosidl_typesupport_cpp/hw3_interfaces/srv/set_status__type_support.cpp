// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from hw3_interfaces:srv/SetStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hw3_interfaces/srv/detail/set_status__functions.h"
#include "hw3_interfaces/srv/detail/set_status__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetStatus_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetStatus_Request_type_support_ids_t;

static const _SetStatus_Request_type_support_ids_t _SetStatus_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetStatus_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetStatus_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetStatus_Request_type_support_symbol_names_t _SetStatus_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw3_interfaces, srv, SetStatus_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw3_interfaces, srv, SetStatus_Request)),
  }
};

typedef struct _SetStatus_Request_type_support_data_t
{
  void * data[2];
} _SetStatus_Request_type_support_data_t;

static _SetStatus_Request_type_support_data_t _SetStatus_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetStatus_Request_message_typesupport_map = {
  2,
  "hw3_interfaces",
  &_SetStatus_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetStatus_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetStatus_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetStatus_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetStatus_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw3_interfaces__srv__SetStatus_Request__get_type_hash,
  &hw3_interfaces__srv__SetStatus_Request__get_type_description,
  &hw3_interfaces__srv__SetStatus_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace hw3_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw3_interfaces::srv::SetStatus_Request>()
{
  return &::hw3_interfaces::srv::rosidl_typesupport_cpp::SetStatus_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw3_interfaces, srv, SetStatus_Request)() {
  return get_message_type_support_handle<hw3_interfaces::srv::SetStatus_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_status__functions.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetStatus_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetStatus_Response_type_support_ids_t;

static const _SetStatus_Response_type_support_ids_t _SetStatus_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetStatus_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetStatus_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetStatus_Response_type_support_symbol_names_t _SetStatus_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw3_interfaces, srv, SetStatus_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw3_interfaces, srv, SetStatus_Response)),
  }
};

typedef struct _SetStatus_Response_type_support_data_t
{
  void * data[2];
} _SetStatus_Response_type_support_data_t;

static _SetStatus_Response_type_support_data_t _SetStatus_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetStatus_Response_message_typesupport_map = {
  2,
  "hw3_interfaces",
  &_SetStatus_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetStatus_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetStatus_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetStatus_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetStatus_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw3_interfaces__srv__SetStatus_Response__get_type_hash,
  &hw3_interfaces__srv__SetStatus_Response__get_type_description,
  &hw3_interfaces__srv__SetStatus_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace hw3_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw3_interfaces::srv::SetStatus_Response>()
{
  return &::hw3_interfaces::srv::rosidl_typesupport_cpp::SetStatus_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw3_interfaces, srv, SetStatus_Response)() {
  return get_message_type_support_handle<hw3_interfaces::srv::SetStatus_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_status__functions.h"
// already included above
// #include "hw3_interfaces/srv/detail/set_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetStatus_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetStatus_Event_type_support_ids_t;

static const _SetStatus_Event_type_support_ids_t _SetStatus_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetStatus_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetStatus_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetStatus_Event_type_support_symbol_names_t _SetStatus_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw3_interfaces, srv, SetStatus_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw3_interfaces, srv, SetStatus_Event)),
  }
};

typedef struct _SetStatus_Event_type_support_data_t
{
  void * data[2];
} _SetStatus_Event_type_support_data_t;

static _SetStatus_Event_type_support_data_t _SetStatus_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetStatus_Event_message_typesupport_map = {
  2,
  "hw3_interfaces",
  &_SetStatus_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetStatus_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetStatus_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetStatus_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetStatus_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw3_interfaces__srv__SetStatus_Event__get_type_hash,
  &hw3_interfaces__srv__SetStatus_Event__get_type_description,
  &hw3_interfaces__srv__SetStatus_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace hw3_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw3_interfaces::srv::SetStatus_Event>()
{
  return &::hw3_interfaces::srv::rosidl_typesupport_cpp::SetStatus_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw3_interfaces, srv, SetStatus_Event)() {
  return get_message_type_support_handle<hw3_interfaces::srv::SetStatus_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "hw3_interfaces/srv/detail/set_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hw3_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetStatus_type_support_ids_t;

static const _SetStatus_type_support_ids_t _SetStatus_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetStatus_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetStatus_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetStatus_type_support_symbol_names_t _SetStatus_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw3_interfaces, srv, SetStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw3_interfaces, srv, SetStatus)),
  }
};

typedef struct _SetStatus_type_support_data_t
{
  void * data[2];
} _SetStatus_type_support_data_t;

static _SetStatus_type_support_data_t _SetStatus_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetStatus_service_typesupport_map = {
  2,
  "hw3_interfaces",
  &_SetStatus_service_typesupport_ids.typesupport_identifier[0],
  &_SetStatus_service_typesupport_symbol_names.symbol_name[0],
  &_SetStatus_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetStatus_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetStatus_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hw3_interfaces::srv::SetStatus_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hw3_interfaces::srv::SetStatus_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hw3_interfaces::srv::SetStatus_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<hw3_interfaces::srv::SetStatus>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<hw3_interfaces::srv::SetStatus>,
  &hw3_interfaces__srv__SetStatus__get_type_hash,
  &hw3_interfaces__srv__SetStatus__get_type_description,
  &hw3_interfaces__srv__SetStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace hw3_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<hw3_interfaces::srv::SetStatus>()
{
  return &::hw3_interfaces::srv::rosidl_typesupport_cpp::SetStatus_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, hw3_interfaces, srv, SetStatus)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<hw3_interfaces::srv::SetStatus>();
}

#ifdef __cplusplus
}
#endif
