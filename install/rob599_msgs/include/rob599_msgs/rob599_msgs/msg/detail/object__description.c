// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rob599_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#include "rob599_msgs/msg/detail/object__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
const rosidl_type_hash_t *
rob599_msgs__msg__Object__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0xcf, 0x03, 0x3a, 0xd6, 0x7e, 0x36, 0x5e,
      0x0c, 0xb9, 0x77, 0x60, 0x52, 0x01, 0xe6, 0x5a,
      0xb0, 0xbc, 0xb6, 0x94, 0x1c, 0xd6, 0x8c, 0x0c,
      0x0b, 0x30, 0xf5, 0x7d, 0xfc, 0xed, 0x54, 0x20,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rob599_msgs__msg__Object__TYPE_NAME[] = "rob599_msgs/msg/Object";

// Define type names, field names, and default values
static char rob599_msgs__msg__Object__FIELD_NAME__name[] = "name";
static char rob599_msgs__msg__Object__FIELD_NAME__volume[] = "volume";

static rosidl_runtime_c__type_description__Field rob599_msgs__msg__Object__FIELDS[] = {
  {
    {rob599_msgs__msg__Object__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rob599_msgs__msg__Object__FIELD_NAME__volume, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rob599_msgs__msg__Object__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rob599_msgs__msg__Object__TYPE_NAME, 22, 22},
      {rob599_msgs__msg__Object__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "float64 volume";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rob599_msgs__msg__Object__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rob599_msgs__msg__Object__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 27, 27},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rob599_msgs__msg__Object__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rob599_msgs__msg__Object__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
