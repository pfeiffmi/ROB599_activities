// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rob599_msgs:srv/Doubler.idl
// generated code does not contain a copyright notice

#include "rob599_msgs/srv/detail/doubler__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
const rosidl_type_hash_t *
rob599_msgs__srv__Doubler__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0x28, 0x6d, 0xe6, 0xe2, 0xee, 0xf0, 0xdb,
      0x5d, 0x6d, 0xcd, 0x57, 0x74, 0x93, 0xdb, 0x02,
      0xe7, 0x73, 0x7d, 0x54, 0x95, 0x06, 0x3b, 0x55,
      0x90, 0x23, 0xa3, 0xae, 0x1a, 0x27, 0xb2, 0xdd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
const rosidl_type_hash_t *
rob599_msgs__srv__Doubler_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x42, 0x07, 0x6d, 0x94, 0x72, 0x8a, 0x66, 0xf5,
      0xb7, 0x20, 0x45, 0x50, 0xa6, 0xd6, 0x06, 0x50,
      0x1a, 0x00, 0x89, 0xe0, 0xf6, 0xd5, 0x93, 0x7d,
      0xe7, 0xba, 0x78, 0xee, 0xdf, 0x66, 0xda, 0x14,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
const rosidl_type_hash_t *
rob599_msgs__srv__Doubler_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0x4a, 0x1b, 0x21, 0x45, 0x36, 0x52, 0x1b,
      0x83, 0xb2, 0xfd, 0x43, 0xab, 0x09, 0x67, 0x83,
      0x24, 0xe9, 0x01, 0x0f, 0xf9, 0xd1, 0xb7, 0x10,
      0x53, 0x95, 0xd1, 0xb8, 0xb4, 0x7c, 0x83, 0x0f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
const rosidl_type_hash_t *
rob599_msgs__srv__Doubler_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0xa1, 0x9c, 0xa7, 0x49, 0x98, 0x7a, 0x02,
      0x31, 0x8f, 0x38, 0xc9, 0xe4, 0x1f, 0x89, 0x39,
      0xef, 0xe4, 0x97, 0xa4, 0xcc, 0xc5, 0xbe, 0x7c,
      0xa5, 0x29, 0x79, 0x9d, 0x1c, 0xa0, 0x13, 0x0f,
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

static char rob599_msgs__srv__Doubler__TYPE_NAME[] = "rob599_msgs/srv/Doubler";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rob599_msgs__srv__Doubler_Event__TYPE_NAME[] = "rob599_msgs/srv/Doubler_Event";
static char rob599_msgs__srv__Doubler_Request__TYPE_NAME[] = "rob599_msgs/srv/Doubler_Request";
static char rob599_msgs__srv__Doubler_Response__TYPE_NAME[] = "rob599_msgs/srv/Doubler_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rob599_msgs__srv__Doubler__FIELD_NAME__request_message[] = "request_message";
static char rob599_msgs__srv__Doubler__FIELD_NAME__response_message[] = "response_message";
static char rob599_msgs__srv__Doubler__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rob599_msgs__srv__Doubler__FIELDS[] = {
  {
    {rob599_msgs__srv__Doubler__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rob599_msgs__srv__Doubler_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__Doubler__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rob599_msgs__srv__Doubler_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__Doubler__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rob599_msgs__srv__Doubler_Event__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rob599_msgs__srv__Doubler__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__Doubler_Event__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__Doubler_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__Doubler_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rob599_msgs__srv__Doubler__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rob599_msgs__srv__Doubler__TYPE_NAME, 23, 23},
      {rob599_msgs__srv__Doubler__FIELDS, 3, 3},
    },
    {rob599_msgs__srv__Doubler__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rob599_msgs__srv__Doubler_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rob599_msgs__srv__Doubler_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rob599_msgs__srv__Doubler_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rob599_msgs__srv__Doubler_Request__FIELD_NAME__number[] = "number";

static rosidl_runtime_c__type_description__Field rob599_msgs__srv__Doubler_Request__FIELDS[] = {
  {
    {rob599_msgs__srv__Doubler_Request__FIELD_NAME__number, 6, 6},
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
rob599_msgs__srv__Doubler_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rob599_msgs__srv__Doubler_Request__TYPE_NAME, 31, 31},
      {rob599_msgs__srv__Doubler_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rob599_msgs__srv__Doubler_Response__FIELD_NAME__doubled[] = "doubled";

static rosidl_runtime_c__type_description__Field rob599_msgs__srv__Doubler_Response__FIELDS[] = {
  {
    {rob599_msgs__srv__Doubler_Response__FIELD_NAME__doubled, 7, 7},
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
rob599_msgs__srv__Doubler_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rob599_msgs__srv__Doubler_Response__TYPE_NAME, 32, 32},
      {rob599_msgs__srv__Doubler_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rob599_msgs__srv__Doubler_Event__FIELD_NAME__info[] = "info";
static char rob599_msgs__srv__Doubler_Event__FIELD_NAME__request[] = "request";
static char rob599_msgs__srv__Doubler_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rob599_msgs__srv__Doubler_Event__FIELDS[] = {
  {
    {rob599_msgs__srv__Doubler_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__Doubler_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rob599_msgs__srv__Doubler_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__Doubler_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rob599_msgs__srv__Doubler_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rob599_msgs__srv__Doubler_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__Doubler_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__srv__Doubler_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rob599_msgs__srv__Doubler_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rob599_msgs__srv__Doubler_Event__TYPE_NAME, 29, 29},
      {rob599_msgs__srv__Doubler_Event__FIELDS, 3, 3},
    },
    {rob599_msgs__srv__Doubler_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rob599_msgs__srv__Doubler_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rob599_msgs__srv__Doubler_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# inputs\n"
  "int64 number\n"
  "---\n"
  "# outputs\n"
  "int64 doubled";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rob599_msgs__srv__Doubler__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rob599_msgs__srv__Doubler__TYPE_NAME, 23, 23},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rob599_msgs__srv__Doubler_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rob599_msgs__srv__Doubler_Request__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rob599_msgs__srv__Doubler_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rob599_msgs__srv__Doubler_Response__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rob599_msgs__srv__Doubler_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rob599_msgs__srv__Doubler_Event__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rob599_msgs__srv__Doubler__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rob599_msgs__srv__Doubler__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rob599_msgs__srv__Doubler_Event__get_individual_type_description_source(NULL);
    sources[3] = *rob599_msgs__srv__Doubler_Request__get_individual_type_description_source(NULL);
    sources[4] = *rob599_msgs__srv__Doubler_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rob599_msgs__srv__Doubler_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rob599_msgs__srv__Doubler_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rob599_msgs__srv__Doubler_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rob599_msgs__srv__Doubler_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rob599_msgs__srv__Doubler_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rob599_msgs__srv__Doubler_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rob599_msgs__srv__Doubler_Request__get_individual_type_description_source(NULL);
    sources[3] = *rob599_msgs__srv__Doubler_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
