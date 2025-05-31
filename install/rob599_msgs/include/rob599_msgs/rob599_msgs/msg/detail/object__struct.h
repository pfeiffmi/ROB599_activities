// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rob599_msgs:msg/Object.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rob599_msgs/msg/object.h"


#ifndef ROB599_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
#define ROB599_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Object in the package rob599_msgs.
typedef struct rob599_msgs__msg__Object
{
  rosidl_runtime_c__String name;
  double volume;
} rob599_msgs__msg__Object;

// Struct for a sequence of rob599_msgs__msg__Object.
typedef struct rob599_msgs__msg__Object__Sequence
{
  rob599_msgs__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_msgs__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROB599_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
