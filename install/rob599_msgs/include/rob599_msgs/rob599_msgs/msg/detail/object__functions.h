// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rob599_msgs:msg/Object.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rob599_msgs/msg/object.h"


#ifndef ROB599_MSGS__MSG__DETAIL__OBJECT__FUNCTIONS_H_
#define ROB599_MSGS__MSG__DETAIL__OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "rob599_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rob599_msgs/msg/detail/object__struct.h"

/// Initialize msg/Object message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rob599_msgs__msg__Object
 * )) before or use
 * rob599_msgs__msg__Object__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
bool
rob599_msgs__msg__Object__init(rob599_msgs__msg__Object * msg);

/// Finalize msg/Object message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
void
rob599_msgs__msg__Object__fini(rob599_msgs__msg__Object * msg);

/// Create msg/Object message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rob599_msgs__msg__Object__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
rob599_msgs__msg__Object *
rob599_msgs__msg__Object__create(void);

/// Destroy msg/Object message.
/**
 * It calls
 * rob599_msgs__msg__Object__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
void
rob599_msgs__msg__Object__destroy(rob599_msgs__msg__Object * msg);

/// Check for msg/Object message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
bool
rob599_msgs__msg__Object__are_equal(const rob599_msgs__msg__Object * lhs, const rob599_msgs__msg__Object * rhs);

/// Copy a msg/Object message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
bool
rob599_msgs__msg__Object__copy(
  const rob599_msgs__msg__Object * input,
  rob599_msgs__msg__Object * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
const rosidl_type_hash_t *
rob599_msgs__msg__Object__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
const rosidl_runtime_c__type_description__TypeDescription *
rob599_msgs__msg__Object__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
const rosidl_runtime_c__type_description__TypeSource *
rob599_msgs__msg__Object__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rob599_msgs__msg__Object__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Object messages.
/**
 * It allocates the memory for the number of elements and calls
 * rob599_msgs__msg__Object__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
bool
rob599_msgs__msg__Object__Sequence__init(rob599_msgs__msg__Object__Sequence * array, size_t size);

/// Finalize array of msg/Object messages.
/**
 * It calls
 * rob599_msgs__msg__Object__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
void
rob599_msgs__msg__Object__Sequence__fini(rob599_msgs__msg__Object__Sequence * array);

/// Create array of msg/Object messages.
/**
 * It allocates the memory for the array and calls
 * rob599_msgs__msg__Object__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
rob599_msgs__msg__Object__Sequence *
rob599_msgs__msg__Object__Sequence__create(size_t size);

/// Destroy array of msg/Object messages.
/**
 * It calls
 * rob599_msgs__msg__Object__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
void
rob599_msgs__msg__Object__Sequence__destroy(rob599_msgs__msg__Object__Sequence * array);

/// Check for msg/Object message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
bool
rob599_msgs__msg__Object__Sequence__are_equal(const rob599_msgs__msg__Object__Sequence * lhs, const rob599_msgs__msg__Object__Sequence * rhs);

/// Copy an array of msg/Object messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rob599_msgs
bool
rob599_msgs__msg__Object__Sequence__copy(
  const rob599_msgs__msg__Object__Sequence * input,
  rob599_msgs__msg__Object__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROB599_MSGS__MSG__DETAIL__OBJECT__FUNCTIONS_H_
