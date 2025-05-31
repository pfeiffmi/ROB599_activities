// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from hw4_interfaces:action/RocketLaunch.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hw4_interfaces/action/detail/rocket_launch__functions.h"
#include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RocketLaunch_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RocketLaunch_Goal_type_support_ids_t;

static const _RocketLaunch_Goal_type_support_ids_t _RocketLaunch_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RocketLaunch_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RocketLaunch_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RocketLaunch_Goal_type_support_symbol_names_t _RocketLaunch_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interfaces, action, RocketLaunch_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw4_interfaces, action, RocketLaunch_Goal)),
  }
};

typedef struct _RocketLaunch_Goal_type_support_data_t
{
  void * data[2];
} _RocketLaunch_Goal_type_support_data_t;

static _RocketLaunch_Goal_type_support_data_t _RocketLaunch_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RocketLaunch_Goal_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_RocketLaunch_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_RocketLaunch_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_RocketLaunch_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RocketLaunch_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RocketLaunch_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw4_interfaces__action__RocketLaunch_Goal__get_type_hash,
  &hw4_interfaces__action__RocketLaunch_Goal__get_type_description,
  &hw4_interfaces__action__RocketLaunch_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_Goal>()
{
  return &::hw4_interfaces::action::rosidl_typesupport_cpp::RocketLaunch_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw4_interfaces, action, RocketLaunch_Goal)() {
  return get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_Goal>();
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
// #include "hw4_interfaces/action/detail/rocket_launch__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RocketLaunch_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RocketLaunch_Result_type_support_ids_t;

static const _RocketLaunch_Result_type_support_ids_t _RocketLaunch_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RocketLaunch_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RocketLaunch_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RocketLaunch_Result_type_support_symbol_names_t _RocketLaunch_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interfaces, action, RocketLaunch_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw4_interfaces, action, RocketLaunch_Result)),
  }
};

typedef struct _RocketLaunch_Result_type_support_data_t
{
  void * data[2];
} _RocketLaunch_Result_type_support_data_t;

static _RocketLaunch_Result_type_support_data_t _RocketLaunch_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RocketLaunch_Result_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_RocketLaunch_Result_message_typesupport_ids.typesupport_identifier[0],
  &_RocketLaunch_Result_message_typesupport_symbol_names.symbol_name[0],
  &_RocketLaunch_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RocketLaunch_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RocketLaunch_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw4_interfaces__action__RocketLaunch_Result__get_type_hash,
  &hw4_interfaces__action__RocketLaunch_Result__get_type_description,
  &hw4_interfaces__action__RocketLaunch_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_Result>()
{
  return &::hw4_interfaces::action::rosidl_typesupport_cpp::RocketLaunch_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw4_interfaces, action, RocketLaunch_Result)() {
  return get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_Result>();
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
// #include "hw4_interfaces/action/detail/rocket_launch__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RocketLaunch_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RocketLaunch_Feedback_type_support_ids_t;

static const _RocketLaunch_Feedback_type_support_ids_t _RocketLaunch_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RocketLaunch_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RocketLaunch_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RocketLaunch_Feedback_type_support_symbol_names_t _RocketLaunch_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interfaces, action, RocketLaunch_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw4_interfaces, action, RocketLaunch_Feedback)),
  }
};

typedef struct _RocketLaunch_Feedback_type_support_data_t
{
  void * data[2];
} _RocketLaunch_Feedback_type_support_data_t;

static _RocketLaunch_Feedback_type_support_data_t _RocketLaunch_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RocketLaunch_Feedback_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_RocketLaunch_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_RocketLaunch_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_RocketLaunch_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RocketLaunch_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RocketLaunch_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw4_interfaces__action__RocketLaunch_Feedback__get_type_hash,
  &hw4_interfaces__action__RocketLaunch_Feedback__get_type_description,
  &hw4_interfaces__action__RocketLaunch_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_Feedback>()
{
  return &::hw4_interfaces::action::rosidl_typesupport_cpp::RocketLaunch_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw4_interfaces, action, RocketLaunch_Feedback)() {
  return get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_Feedback>();
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
// #include "hw4_interfaces/action/detail/rocket_launch__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RocketLaunch_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RocketLaunch_SendGoal_Request_type_support_ids_t;

static const _RocketLaunch_SendGoal_Request_type_support_ids_t _RocketLaunch_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RocketLaunch_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RocketLaunch_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RocketLaunch_SendGoal_Request_type_support_symbol_names_t _RocketLaunch_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interfaces, action, RocketLaunch_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw4_interfaces, action, RocketLaunch_SendGoal_Request)),
  }
};

typedef struct _RocketLaunch_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _RocketLaunch_SendGoal_Request_type_support_data_t;

static _RocketLaunch_SendGoal_Request_type_support_data_t _RocketLaunch_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RocketLaunch_SendGoal_Request_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_RocketLaunch_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RocketLaunch_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RocketLaunch_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RocketLaunch_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RocketLaunch_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw4_interfaces__action__RocketLaunch_SendGoal_Request__get_type_hash,
  &hw4_interfaces__action__RocketLaunch_SendGoal_Request__get_type_description,
  &hw4_interfaces__action__RocketLaunch_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_SendGoal_Request>()
{
  return &::hw4_interfaces::action::rosidl_typesupport_cpp::RocketLaunch_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw4_interfaces, action, RocketLaunch_SendGoal_Request)() {
  return get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_SendGoal_Request>();
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
// #include "hw4_interfaces/action/detail/rocket_launch__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RocketLaunch_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RocketLaunch_SendGoal_Response_type_support_ids_t;

static const _RocketLaunch_SendGoal_Response_type_support_ids_t _RocketLaunch_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RocketLaunch_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RocketLaunch_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RocketLaunch_SendGoal_Response_type_support_symbol_names_t _RocketLaunch_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interfaces, action, RocketLaunch_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw4_interfaces, action, RocketLaunch_SendGoal_Response)),
  }
};

typedef struct _RocketLaunch_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _RocketLaunch_SendGoal_Response_type_support_data_t;

static _RocketLaunch_SendGoal_Response_type_support_data_t _RocketLaunch_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RocketLaunch_SendGoal_Response_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_RocketLaunch_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RocketLaunch_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RocketLaunch_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RocketLaunch_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RocketLaunch_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw4_interfaces__action__RocketLaunch_SendGoal_Response__get_type_hash,
  &hw4_interfaces__action__RocketLaunch_SendGoal_Response__get_type_description,
  &hw4_interfaces__action__RocketLaunch_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_SendGoal_Response>()
{
  return &::hw4_interfaces::action::rosidl_typesupport_cpp::RocketLaunch_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw4_interfaces, action, RocketLaunch_SendGoal_Response)() {
  return get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_SendGoal_Response>();
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
// #include "hw4_interfaces/action/detail/rocket_launch__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RocketLaunch_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RocketLaunch_SendGoal_Event_type_support_ids_t;

static const _RocketLaunch_SendGoal_Event_type_support_ids_t _RocketLaunch_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RocketLaunch_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RocketLaunch_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RocketLaunch_SendGoal_Event_type_support_symbol_names_t _RocketLaunch_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interfaces, action, RocketLaunch_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw4_interfaces, action, RocketLaunch_SendGoal_Event)),
  }
};

typedef struct _RocketLaunch_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _RocketLaunch_SendGoal_Event_type_support_data_t;

static _RocketLaunch_SendGoal_Event_type_support_data_t _RocketLaunch_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RocketLaunch_SendGoal_Event_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_RocketLaunch_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RocketLaunch_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RocketLaunch_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RocketLaunch_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RocketLaunch_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw4_interfaces__action__RocketLaunch_SendGoal_Event__get_type_hash,
  &hw4_interfaces__action__RocketLaunch_SendGoal_Event__get_type_description,
  &hw4_interfaces__action__RocketLaunch_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_SendGoal_Event>()
{
  return &::hw4_interfaces::action::rosidl_typesupport_cpp::RocketLaunch_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw4_interfaces, action, RocketLaunch_SendGoal_Event)() {
  return get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_SendGoal_Event>();
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
// #include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RocketLaunch_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RocketLaunch_SendGoal_type_support_ids_t;

static const _RocketLaunch_SendGoal_type_support_ids_t _RocketLaunch_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RocketLaunch_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RocketLaunch_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RocketLaunch_SendGoal_type_support_symbol_names_t _RocketLaunch_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interfaces, action, RocketLaunch_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw4_interfaces, action, RocketLaunch_SendGoal)),
  }
};

typedef struct _RocketLaunch_SendGoal_type_support_data_t
{
  void * data[2];
} _RocketLaunch_SendGoal_type_support_data_t;

static _RocketLaunch_SendGoal_type_support_data_t _RocketLaunch_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RocketLaunch_SendGoal_service_typesupport_map = {
  2,
  "hw4_interfaces",
  &_RocketLaunch_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_RocketLaunch_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_RocketLaunch_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RocketLaunch_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RocketLaunch_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<hw4_interfaces::action::RocketLaunch_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<hw4_interfaces::action::RocketLaunch_SendGoal>,
  &hw4_interfaces__action__RocketLaunch_SendGoal__get_type_hash,
  &hw4_interfaces__action__RocketLaunch_SendGoal__get_type_description,
  &hw4_interfaces__action__RocketLaunch_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<hw4_interfaces::action::RocketLaunch_SendGoal>()
{
  return &::hw4_interfaces::action::rosidl_typesupport_cpp::RocketLaunch_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, hw4_interfaces, action, RocketLaunch_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<hw4_interfaces::action::RocketLaunch_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RocketLaunch_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RocketLaunch_GetResult_Request_type_support_ids_t;

static const _RocketLaunch_GetResult_Request_type_support_ids_t _RocketLaunch_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RocketLaunch_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RocketLaunch_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RocketLaunch_GetResult_Request_type_support_symbol_names_t _RocketLaunch_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interfaces, action, RocketLaunch_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw4_interfaces, action, RocketLaunch_GetResult_Request)),
  }
};

typedef struct _RocketLaunch_GetResult_Request_type_support_data_t
{
  void * data[2];
} _RocketLaunch_GetResult_Request_type_support_data_t;

static _RocketLaunch_GetResult_Request_type_support_data_t _RocketLaunch_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RocketLaunch_GetResult_Request_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_RocketLaunch_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RocketLaunch_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RocketLaunch_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RocketLaunch_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RocketLaunch_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw4_interfaces__action__RocketLaunch_GetResult_Request__get_type_hash,
  &hw4_interfaces__action__RocketLaunch_GetResult_Request__get_type_description,
  &hw4_interfaces__action__RocketLaunch_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_GetResult_Request>()
{
  return &::hw4_interfaces::action::rosidl_typesupport_cpp::RocketLaunch_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw4_interfaces, action, RocketLaunch_GetResult_Request)() {
  return get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_GetResult_Request>();
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
// #include "hw4_interfaces/action/detail/rocket_launch__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RocketLaunch_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RocketLaunch_GetResult_Response_type_support_ids_t;

static const _RocketLaunch_GetResult_Response_type_support_ids_t _RocketLaunch_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RocketLaunch_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RocketLaunch_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RocketLaunch_GetResult_Response_type_support_symbol_names_t _RocketLaunch_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interfaces, action, RocketLaunch_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw4_interfaces, action, RocketLaunch_GetResult_Response)),
  }
};

typedef struct _RocketLaunch_GetResult_Response_type_support_data_t
{
  void * data[2];
} _RocketLaunch_GetResult_Response_type_support_data_t;

static _RocketLaunch_GetResult_Response_type_support_data_t _RocketLaunch_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RocketLaunch_GetResult_Response_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_RocketLaunch_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RocketLaunch_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RocketLaunch_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RocketLaunch_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RocketLaunch_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw4_interfaces__action__RocketLaunch_GetResult_Response__get_type_hash,
  &hw4_interfaces__action__RocketLaunch_GetResult_Response__get_type_description,
  &hw4_interfaces__action__RocketLaunch_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_GetResult_Response>()
{
  return &::hw4_interfaces::action::rosidl_typesupport_cpp::RocketLaunch_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw4_interfaces, action, RocketLaunch_GetResult_Response)() {
  return get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_GetResult_Response>();
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
// #include "hw4_interfaces/action/detail/rocket_launch__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RocketLaunch_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RocketLaunch_GetResult_Event_type_support_ids_t;

static const _RocketLaunch_GetResult_Event_type_support_ids_t _RocketLaunch_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RocketLaunch_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RocketLaunch_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RocketLaunch_GetResult_Event_type_support_symbol_names_t _RocketLaunch_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interfaces, action, RocketLaunch_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw4_interfaces, action, RocketLaunch_GetResult_Event)),
  }
};

typedef struct _RocketLaunch_GetResult_Event_type_support_data_t
{
  void * data[2];
} _RocketLaunch_GetResult_Event_type_support_data_t;

static _RocketLaunch_GetResult_Event_type_support_data_t _RocketLaunch_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RocketLaunch_GetResult_Event_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_RocketLaunch_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RocketLaunch_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RocketLaunch_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RocketLaunch_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RocketLaunch_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw4_interfaces__action__RocketLaunch_GetResult_Event__get_type_hash,
  &hw4_interfaces__action__RocketLaunch_GetResult_Event__get_type_description,
  &hw4_interfaces__action__RocketLaunch_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_GetResult_Event>()
{
  return &::hw4_interfaces::action::rosidl_typesupport_cpp::RocketLaunch_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw4_interfaces, action, RocketLaunch_GetResult_Event)() {
  return get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RocketLaunch_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RocketLaunch_GetResult_type_support_ids_t;

static const _RocketLaunch_GetResult_type_support_ids_t _RocketLaunch_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RocketLaunch_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RocketLaunch_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RocketLaunch_GetResult_type_support_symbol_names_t _RocketLaunch_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interfaces, action, RocketLaunch_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw4_interfaces, action, RocketLaunch_GetResult)),
  }
};

typedef struct _RocketLaunch_GetResult_type_support_data_t
{
  void * data[2];
} _RocketLaunch_GetResult_type_support_data_t;

static _RocketLaunch_GetResult_type_support_data_t _RocketLaunch_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RocketLaunch_GetResult_service_typesupport_map = {
  2,
  "hw4_interfaces",
  &_RocketLaunch_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_RocketLaunch_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_RocketLaunch_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RocketLaunch_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RocketLaunch_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<hw4_interfaces::action::RocketLaunch_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<hw4_interfaces::action::RocketLaunch_GetResult>,
  &hw4_interfaces__action__RocketLaunch_GetResult__get_type_hash,
  &hw4_interfaces__action__RocketLaunch_GetResult__get_type_description,
  &hw4_interfaces__action__RocketLaunch_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<hw4_interfaces::action::RocketLaunch_GetResult>()
{
  return &::hw4_interfaces::action::rosidl_typesupport_cpp::RocketLaunch_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, hw4_interfaces, action, RocketLaunch_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<hw4_interfaces::action::RocketLaunch_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__functions.h"
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
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

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RocketLaunch_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RocketLaunch_FeedbackMessage_type_support_ids_t;

static const _RocketLaunch_FeedbackMessage_type_support_ids_t _RocketLaunch_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RocketLaunch_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RocketLaunch_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RocketLaunch_FeedbackMessage_type_support_symbol_names_t _RocketLaunch_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interfaces, action, RocketLaunch_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hw4_interfaces, action, RocketLaunch_FeedbackMessage)),
  }
};

typedef struct _RocketLaunch_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _RocketLaunch_FeedbackMessage_type_support_data_t;

static _RocketLaunch_FeedbackMessage_type_support_data_t _RocketLaunch_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RocketLaunch_FeedbackMessage_message_typesupport_map = {
  2,
  "hw4_interfaces",
  &_RocketLaunch_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_RocketLaunch_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_RocketLaunch_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RocketLaunch_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RocketLaunch_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hw4_interfaces__action__RocketLaunch_FeedbackMessage__get_type_hash,
  &hw4_interfaces__action__RocketLaunch_FeedbackMessage__get_type_description,
  &hw4_interfaces__action__RocketLaunch_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_FeedbackMessage>()
{
  return &::hw4_interfaces::action::rosidl_typesupport_cpp::RocketLaunch_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hw4_interfaces, action, RocketLaunch_FeedbackMessage)() {
  return get_message_type_support_handle<hw4_interfaces::action::RocketLaunch_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "hw4_interfaces/action/detail/rocket_launch__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace hw4_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t RocketLaunch_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &hw4_interfaces__action__RocketLaunch__get_type_hash,
  &hw4_interfaces__action__RocketLaunch__get_type_description,
  &hw4_interfaces__action__RocketLaunch__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hw4_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<hw4_interfaces::action::RocketLaunch>()
{
  using ::hw4_interfaces::action::rosidl_typesupport_cpp::RocketLaunch_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  RocketLaunch_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::hw4_interfaces::action::RocketLaunch::Impl::SendGoalService>();
  RocketLaunch_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::hw4_interfaces::action::RocketLaunch::Impl::GetResultService>();
  RocketLaunch_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::hw4_interfaces::action::RocketLaunch::Impl::CancelGoalService>();
  RocketLaunch_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::hw4_interfaces::action::RocketLaunch::Impl::FeedbackMessage>();
  RocketLaunch_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::hw4_interfaces::action::RocketLaunch::Impl::GoalStatusMessage>();
  return &RocketLaunch_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, hw4_interfaces, action, RocketLaunch)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<hw4_interfaces::action::RocketLaunch>();
}

#ifdef __cplusplus
}
#endif
