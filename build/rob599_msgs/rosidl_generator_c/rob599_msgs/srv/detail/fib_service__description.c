// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rob599_msgs:srv/FibService.idl
// generated code does not contain a copyright notice

#include "rob599_msgs/srv/detail/fib_service__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
const rosidl_type_hash_t *
rob599_msgs__srv__FibService__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x36, 0xc6, 0xcc, 0x02, 0x31, 0x32, 0xb6, 0xf2,
      0x3b, 0x06, 0x72, 0x33, 0x0c, 0xa1, 0xc7, 0x2a,
      0xcb, 0xcd, 0xde, 0xb7, 0xb1, 0x52, 0xf8, 0x52,
      0xce, 0x72, 0x30, 0xd7, 0x49, 0x9a, 0xc4, 0x0e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
const rosidl_type_hash_t *
rob599_msgs__srv__FibService_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf3, 0x42, 0x69, 0x84, 0x2b, 0xa9, 0x28, 0x55,
      0x44, 0xdc, 0x44, 0x3a, 0x53, 0xfd, 0x98, 0x86,
      0x6f, 0xd1, 0x0d, 0x58, 0x9a, 0x96, 0x34, 0x7f,
      0xb0, 0xbb, 0x72, 0x67, 0xb4, 0xe9, 0xca, 0xcd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
const rosidl_type_hash_t *
rob599_msgs__srv__FibService_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0x8d, 0xef, 0xb2, 0xe5, 0xe1, 0x1b, 0xac,
      0xf8, 0xe2, 0x15, 0x15, 0x22, 0x7d, 0xa7, 0x07,
      0x92, 0x1c, 0xca, 0x9a, 0x07, 0x5a, 0x5b, 0x61,
      0x36, 0xd2, 0x60, 0xa5, 0x61, 0x32, 0x8f, 0x4d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
const rosidl_type_hash_t *
rob599_msgs__srv__FibService_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0xe4, 0x41, 0xf3, 0x8c, 0x9f, 0xa8, 0xba,
      0xf6, 0x67, 0xcd, 0x3c, 0xdc, 0xb9, 0x95, 0xb5,
      0x7d, 0x50, 0x5f, 0x28, 0x20, 0xb6, 0x0d, 0x67,
      0x7f, 0xf6, 0x45, 0x84, 0x85, 0xf3, 0x38, 0x46,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rob599_msgs__srv__FibService__TYPE_NAME[] = "rob599_msgs/srv/FibService";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rob599_msgs__srv__FibService_Event__TYPE_NAME[] = "rob599_msgs/srv/FibService_Event";
static char rob599_msgs__srv__FibService_Request__TYPE_NAME[] = "rob599_msgs/srv/FibService_Request";
static char rob599_msgs__srv__FibService_Response__TYPE_NAME[] = "rob599_msgs/srv/FibService_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rob599_msgs__srv__FibService__FIELD_NAME__request_message[] = "request_message";
static char rob599_msgs__srv__FibService__FIELD_NAME__response_message[] = "response_message";
static char rob599_msgs__srv__FibService__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rob599_msgs__srv__FibService__FIELDS[] = {
  {
    {rob599_msgs__srv__FibService__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rob599_msgs__srv__FibService_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__FibService__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rob599_msgs__srv__FibService_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__FibService__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rob599_msgs__srv__FibService_Event__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rob599_msgs__srv__FibService__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__FibService_Event__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__FibService_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__FibService_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rob599_msgs__srv__FibService__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rob599_msgs__srv__FibService__TYPE_NAME, 26, 26},
      {rob599_msgs__srv__FibService__FIELDS, 3, 3},
    },
    {rob599_msgs__srv__FibService__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rob599_msgs__srv__FibService_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rob599_msgs__srv__FibService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rob599_msgs__srv__FibService_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rob599_msgs__srv__FibService_Request__FIELD_NAME__number[] = "number";

static rosidl_runtime_c__type_description__Field rob599_msgs__srv__FibService_Request__FIELDS[] = {
  {
    {rob599_msgs__srv__FibService_Request__FIELD_NAME__number, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rob599_msgs__srv__FibService_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rob599_msgs__srv__FibService_Request__TYPE_NAME, 34, 34},
      {rob599_msgs__srv__FibService_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rob599_msgs__srv__FibService_Response__FIELD_NAME__fibonacci[] = "fibonacci";

static rosidl_runtime_c__type_description__Field rob599_msgs__srv__FibService_Response__FIELDS[] = {
  {
    {rob599_msgs__srv__FibService_Response__FIELD_NAME__fibonacci, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rob599_msgs__srv__FibService_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rob599_msgs__srv__FibService_Response__TYPE_NAME, 35, 35},
      {rob599_msgs__srv__FibService_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rob599_msgs__srv__FibService_Event__FIELD_NAME__info[] = "info";
static char rob599_msgs__srv__FibService_Event__FIELD_NAME__request[] = "request";
static char rob599_msgs__srv__FibService_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rob599_msgs__srv__FibService_Event__FIELDS[] = {
  {
    {rob599_msgs__srv__FibService_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__FibService_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rob599_msgs__srv__FibService_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__FibService_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rob599_msgs__srv__FibService_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rob599_msgs__srv__FibService_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__FibService_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__FibService_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rob599_msgs__srv__FibService_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rob599_msgs__srv__FibService_Event__TYPE_NAME, 32, 32},
      {rob599_msgs__srv__FibService_Event__FIELDS, 3, 3},
    },
    {rob599_msgs__srv__FibService_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rob599_msgs__srv__FibService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rob599_msgs__srv__FibService_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 number\n"
  "---\n"
  "int64 fibonacci";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rob599_msgs__srv__FibService__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rob599_msgs__srv__FibService__TYPE_NAME, 26, 26},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 33, 33},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rob599_msgs__srv__FibService_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rob599_msgs__srv__FibService_Request__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rob599_msgs__srv__FibService_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rob599_msgs__srv__FibService_Response__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rob599_msgs__srv__FibService_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rob599_msgs__srv__FibService_Event__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rob599_msgs__srv__FibService__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rob599_msgs__srv__FibService__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rob599_msgs__srv__FibService_Event__get_individual_type_description_source(NULL);
    sources[3] = *rob599_msgs__srv__FibService_Request__get_individual_type_description_source(NULL);
    sources[4] = *rob599_msgs__srv__FibService_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rob599_msgs__srv__FibService_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rob599_msgs__srv__FibService_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rob599_msgs__srv__FibService_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rob599_msgs__srv__FibService_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rob599_msgs__srv__FibService_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rob599_msgs__srv__FibService_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rob599_msgs__srv__FibService_Request__get_individual_type_description_source(NULL);
    sources[3] = *rob599_msgs__srv__FibService_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
