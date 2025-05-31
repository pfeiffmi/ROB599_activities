// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hw3_interfaces:msg/TestPacket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw3_interfaces/msg/test_packet.h"


#ifndef HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__STRUCT_H_
#define HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'payload'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TestPacket in the package hw3_interfaces.
typedef struct hw3_interfaces__msg__TestPacket
{
  uint64_t send_time;
  rosidl_runtime_c__float__Sequence payload;
} hw3_interfaces__msg__TestPacket;

// Struct for a sequence of hw3_interfaces__msg__TestPacket.
typedef struct hw3_interfaces__msg__TestPacket__Sequence
{
  hw3_interfaces__msg__TestPacket * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw3_interfaces__msg__TestPacket__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__STRUCT_H_
