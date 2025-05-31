// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hw3_interfaces:msg/TestPacket.idl
// generated code does not contain a copyright notice

#include "hw3_interfaces/msg/detail/test_packet__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hw3_interfaces
const rosidl_type_hash_t *
hw3_interfaces__msg__TestPacket__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0x80, 0x23, 0x89, 0x30, 0x7d, 0xd7, 0x26,
      0x6d, 0x32, 0x02, 0x60, 0xe0, 0x54, 0x34, 0x0e,
      0x64, 0x0d, 0x5d, 0x56, 0x01, 0x4a, 0x35, 0x73,
      0xdc, 0xd6, 0x62, 0xbf, 0x9b, 0x39, 0x3d, 0xb6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hw3_interfaces__msg__TestPacket__TYPE_NAME[] = "hw3_interfaces/msg/TestPacket";

// Define type names, field names, and default values
static char hw3_interfaces__msg__TestPacket__FIELD_NAME__send_time[] = "send_time";
static char hw3_interfaces__msg__TestPacket__FIELD_NAME__payload[] = "payload";

static rosidl_runtime_c__type_description__Field hw3_interfaces__msg__TestPacket__FIELDS[] = {
  {
    {hw3_interfaces__msg__TestPacket__FIELD_NAME__send_time, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hw3_interfaces__msg__TestPacket__FIELD_NAME__payload, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hw3_interfaces__msg__TestPacket__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hw3_interfaces__msg__TestPacket__TYPE_NAME, 29, 29},
      {hw3_interfaces__msg__TestPacket__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 send_time \n"
  "\n"
  "float32[] payload";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hw3_interfaces__msg__TestPacket__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hw3_interfaces__msg__TestPacket__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hw3_interfaces__msg__TestPacket__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hw3_interfaces__msg__TestPacket__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
