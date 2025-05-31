// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hw3_interfaces:srv/SetStatus.idl
// generated code does not contain a copyright notice

#include "hw3_interfaces/srv/detail/set_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hw3_interfaces
const rosidl_type_hash_t *
hw3_interfaces__srv__SetStatus__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x52, 0x7e, 0xee, 0x06, 0x87, 0x54, 0xd1, 0x74,
      0xf3, 0xc0, 0x00, 0xb2, 0xf0, 0xf8, 0x98, 0xba,
      0x4d, 0x65, 0x68, 0x7e, 0xda, 0x5f, 0xfc, 0xc1,
      0x57, 0x88, 0x5e, 0xc0, 0xd2, 0x14, 0xe9, 0x46,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hw3_interfaces
const rosidl_type_hash_t *
hw3_interfaces__srv__SetStatus_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0x3a, 0xb6, 0xf8, 0x83, 0x10, 0x2d, 0x00,
      0xe3, 0x19, 0x07, 0x8e, 0x07, 0xb0, 0x33, 0x50,
      0x8d, 0x1c, 0x93, 0x38, 0x99, 0x2a, 0xb4, 0x8f,
      0xaf, 0x8b, 0x85, 0x9f, 0xe7, 0x7d, 0x99, 0xc3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hw3_interfaces
const rosidl_type_hash_t *
hw3_interfaces__srv__SetStatus_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0xe7, 0xa9, 0x23, 0xc1, 0xc7, 0x72, 0x0b,
      0xef, 0x50, 0x92, 0x7c, 0x35, 0xf9, 0xc2, 0xdd,
      0xb2, 0x5b, 0x72, 0xb2, 0x48, 0x57, 0x50, 0xcb,
      0xe5, 0x74, 0xd8, 0xf6, 0xce, 0xbc, 0x00, 0x97,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_hw3_interfaces
const rosidl_type_hash_t *
hw3_interfaces__srv__SetStatus_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0x5f, 0x3b, 0x3d, 0x8e, 0xfd, 0x81, 0x25,
      0xde, 0x86, 0xa9, 0xb5, 0x22, 0x91, 0xc7, 0x96,
      0xfb, 0x19, 0x77, 0xd4, 0x89, 0xbe, 0xc5, 0x08,
      0x53, 0x97, 0xd3, 0x64, 0x54, 0xb4, 0x3b, 0x2c,
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

static char hw3_interfaces__srv__SetStatus__TYPE_NAME[] = "hw3_interfaces/srv/SetStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char hw3_interfaces__srv__SetStatus_Event__TYPE_NAME[] = "hw3_interfaces/srv/SetStatus_Event";
static char hw3_interfaces__srv__SetStatus_Request__TYPE_NAME[] = "hw3_interfaces/srv/SetStatus_Request";
static char hw3_interfaces__srv__SetStatus_Response__TYPE_NAME[] = "hw3_interfaces/srv/SetStatus_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char hw3_interfaces__srv__SetStatus__FIELD_NAME__request_message[] = "request_message";
static char hw3_interfaces__srv__SetStatus__FIELD_NAME__response_message[] = "response_message";
static char hw3_interfaces__srv__SetStatus__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field hw3_interfaces__srv__SetStatus__FIELDS[] = {
  {
    {hw3_interfaces__srv__SetStatus__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hw3_interfaces__srv__SetStatus_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {hw3_interfaces__srv__SetStatus__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hw3_interfaces__srv__SetStatus_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {hw3_interfaces__srv__SetStatus__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hw3_interfaces__srv__SetStatus_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hw3_interfaces__srv__SetStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hw3_interfaces__srv__SetStatus_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {hw3_interfaces__srv__SetStatus_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {hw3_interfaces__srv__SetStatus_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hw3_interfaces__srv__SetStatus__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hw3_interfaces__srv__SetStatus__TYPE_NAME, 28, 28},
      {hw3_interfaces__srv__SetStatus__FIELDS, 3, 3},
    },
    {hw3_interfaces__srv__SetStatus__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = hw3_interfaces__srv__SetStatus_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = hw3_interfaces__srv__SetStatus_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = hw3_interfaces__srv__SetStatus_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hw3_interfaces__srv__SetStatus_Request__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field hw3_interfaces__srv__SetStatus_Request__FIELDS[] = {
  {
    {hw3_interfaces__srv__SetStatus_Request__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hw3_interfaces__srv__SetStatus_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hw3_interfaces__srv__SetStatus_Request__TYPE_NAME, 36, 36},
      {hw3_interfaces__srv__SetStatus_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hw3_interfaces__srv__SetStatus_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field hw3_interfaces__srv__SetStatus_Response__FIELDS[] = {
  {
    {hw3_interfaces__srv__SetStatus_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hw3_interfaces__srv__SetStatus_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hw3_interfaces__srv__SetStatus_Response__TYPE_NAME, 37, 37},
      {hw3_interfaces__srv__SetStatus_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char hw3_interfaces__srv__SetStatus_Event__FIELD_NAME__info[] = "info";
static char hw3_interfaces__srv__SetStatus_Event__FIELD_NAME__request[] = "request";
static char hw3_interfaces__srv__SetStatus_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field hw3_interfaces__srv__SetStatus_Event__FIELDS[] = {
  {
    {hw3_interfaces__srv__SetStatus_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {hw3_interfaces__srv__SetStatus_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {hw3_interfaces__srv__SetStatus_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {hw3_interfaces__srv__SetStatus_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {hw3_interfaces__srv__SetStatus_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hw3_interfaces__srv__SetStatus_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hw3_interfaces__srv__SetStatus_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {hw3_interfaces__srv__SetStatus_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hw3_interfaces__srv__SetStatus_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hw3_interfaces__srv__SetStatus_Event__TYPE_NAME, 34, 34},
      {hw3_interfaces__srv__SetStatus_Event__FIELDS, 3, 3},
    },
    {hw3_interfaces__srv__SetStatus_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = hw3_interfaces__srv__SetStatus_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = hw3_interfaces__srv__SetStatus_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool data\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hw3_interfaces__srv__SetStatus__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hw3_interfaces__srv__SetStatus__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 26, 26},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hw3_interfaces__srv__SetStatus_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hw3_interfaces__srv__SetStatus_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hw3_interfaces__srv__SetStatus_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hw3_interfaces__srv__SetStatus_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
hw3_interfaces__srv__SetStatus_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hw3_interfaces__srv__SetStatus_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hw3_interfaces__srv__SetStatus__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hw3_interfaces__srv__SetStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hw3_interfaces__srv__SetStatus_Event__get_individual_type_description_source(NULL);
    sources[3] = *hw3_interfaces__srv__SetStatus_Request__get_individual_type_description_source(NULL);
    sources[4] = *hw3_interfaces__srv__SetStatus_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hw3_interfaces__srv__SetStatus_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hw3_interfaces__srv__SetStatus_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hw3_interfaces__srv__SetStatus_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hw3_interfaces__srv__SetStatus_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hw3_interfaces__srv__SetStatus_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hw3_interfaces__srv__SetStatus_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hw3_interfaces__srv__SetStatus_Request__get_individual_type_description_source(NULL);
    sources[3] = *hw3_interfaces__srv__SetStatus_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
