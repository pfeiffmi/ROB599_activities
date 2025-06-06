// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hw3_interfaces:msg/TestPacket.idl
// generated code does not contain a copyright notice
#include "hw3_interfaces/msg/detail/test_packet__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hw3_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hw3_interfaces/msg/detail/test_packet__struct.h"
#include "hw3_interfaces/msg/detail/test_packet__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // payload
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // payload

// forward declare type support functions


using _TestPacket__ros_msg_type = hw3_interfaces__msg__TestPacket;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
bool cdr_serialize_hw3_interfaces__msg__TestPacket(
  const hw3_interfaces__msg__TestPacket * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: send_time
  {
    cdr << ros_message->send_time;
  }

  // Field name: payload
  {
    size_t size = ros_message->payload.size;
    auto array_ptr = ros_message->payload.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
bool cdr_deserialize_hw3_interfaces__msg__TestPacket(
  eprosima::fastcdr::Cdr & cdr,
  hw3_interfaces__msg__TestPacket * ros_message)
{
  // Field name: send_time
  {
    cdr >> ros_message->send_time;
  }

  // Field name: payload
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->payload.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->payload);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->payload, size)) {
      fprintf(stderr, "failed to create array for field 'payload'");
      return false;
    }
    auto array_ptr = ros_message->payload.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
size_t get_serialized_size_hw3_interfaces__msg__TestPacket(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TestPacket__ros_msg_type * ros_message = static_cast<const _TestPacket__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: send_time
  {
    size_t item_size = sizeof(ros_message->send_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: payload
  {
    size_t array_size = ros_message->payload.size;
    auto array_ptr = ros_message->payload.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
size_t max_serialized_size_hw3_interfaces__msg__TestPacket(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: send_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: payload
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hw3_interfaces__msg__TestPacket;
    is_plain =
      (
      offsetof(DataType, payload) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
bool cdr_serialize_key_hw3_interfaces__msg__TestPacket(
  const hw3_interfaces__msg__TestPacket * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: send_time
  {
    cdr << ros_message->send_time;
  }

  // Field name: payload
  {
    size_t size = ros_message->payload.size;
    auto array_ptr = ros_message->payload.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
size_t get_serialized_size_key_hw3_interfaces__msg__TestPacket(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TestPacket__ros_msg_type * ros_message = static_cast<const _TestPacket__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: send_time
  {
    size_t item_size = sizeof(ros_message->send_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: payload
  {
    size_t array_size = ros_message->payload.size;
    auto array_ptr = ros_message->payload.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hw3_interfaces
size_t max_serialized_size_key_hw3_interfaces__msg__TestPacket(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: send_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: payload
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hw3_interfaces__msg__TestPacket;
    is_plain =
      (
      offsetof(DataType, payload) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TestPacket__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const hw3_interfaces__msg__TestPacket * ros_message = static_cast<const hw3_interfaces__msg__TestPacket *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_hw3_interfaces__msg__TestPacket(ros_message, cdr);
}

static bool _TestPacket__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  hw3_interfaces__msg__TestPacket * ros_message = static_cast<hw3_interfaces__msg__TestPacket *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_hw3_interfaces__msg__TestPacket(cdr, ros_message);
}

static uint32_t _TestPacket__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hw3_interfaces__msg__TestPacket(
      untyped_ros_message, 0));
}

static size_t _TestPacket__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hw3_interfaces__msg__TestPacket(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TestPacket = {
  "hw3_interfaces::msg",
  "TestPacket",
  _TestPacket__cdr_serialize,
  _TestPacket__cdr_deserialize,
  _TestPacket__get_serialized_size,
  _TestPacket__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TestPacket__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TestPacket,
  get_message_typesupport_handle_function,
  &hw3_interfaces__msg__TestPacket__get_type_hash,
  &hw3_interfaces__msg__TestPacket__get_type_description,
  &hw3_interfaces__msg__TestPacket__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hw3_interfaces, msg, TestPacket)() {
  return &_TestPacket__type_support;
}

#if defined(__cplusplus)
}
#endif
