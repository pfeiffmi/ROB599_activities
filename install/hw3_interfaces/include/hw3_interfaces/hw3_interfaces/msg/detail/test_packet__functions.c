// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hw3_interfaces:msg/TestPacket.idl
// generated code does not contain a copyright notice
#include "hw3_interfaces/msg/detail/test_packet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
hw3_interfaces__msg__TestPacket__init(hw3_interfaces__msg__TestPacket * msg)
{
  if (!msg) {
    return false;
  }
  // send_time
  // payload
  if (!rosidl_runtime_c__float__Sequence__init(&msg->payload, 0)) {
    hw3_interfaces__msg__TestPacket__fini(msg);
    return false;
  }
  return true;
}

void
hw3_interfaces__msg__TestPacket__fini(hw3_interfaces__msg__TestPacket * msg)
{
  if (!msg) {
    return;
  }
  // send_time
  // payload
  rosidl_runtime_c__float__Sequence__fini(&msg->payload);
}

bool
hw3_interfaces__msg__TestPacket__are_equal(const hw3_interfaces__msg__TestPacket * lhs, const hw3_interfaces__msg__TestPacket * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // send_time
  if (lhs->send_time != rhs->send_time) {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->payload), &(rhs->payload)))
  {
    return false;
  }
  return true;
}

bool
hw3_interfaces__msg__TestPacket__copy(
  const hw3_interfaces__msg__TestPacket * input,
  hw3_interfaces__msg__TestPacket * output)
{
  if (!input || !output) {
    return false;
  }
  // send_time
  output->send_time = input->send_time;
  // payload
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->payload), &(output->payload)))
  {
    return false;
  }
  return true;
}

hw3_interfaces__msg__TestPacket *
hw3_interfaces__msg__TestPacket__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__msg__TestPacket * msg = (hw3_interfaces__msg__TestPacket *)allocator.allocate(sizeof(hw3_interfaces__msg__TestPacket), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hw3_interfaces__msg__TestPacket));
  bool success = hw3_interfaces__msg__TestPacket__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hw3_interfaces__msg__TestPacket__destroy(hw3_interfaces__msg__TestPacket * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hw3_interfaces__msg__TestPacket__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hw3_interfaces__msg__TestPacket__Sequence__init(hw3_interfaces__msg__TestPacket__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__msg__TestPacket * data = NULL;

  if (size) {
    data = (hw3_interfaces__msg__TestPacket *)allocator.zero_allocate(size, sizeof(hw3_interfaces__msg__TestPacket), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hw3_interfaces__msg__TestPacket__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hw3_interfaces__msg__TestPacket__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hw3_interfaces__msg__TestPacket__Sequence__fini(hw3_interfaces__msg__TestPacket__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hw3_interfaces__msg__TestPacket__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hw3_interfaces__msg__TestPacket__Sequence *
hw3_interfaces__msg__TestPacket__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__msg__TestPacket__Sequence * array = (hw3_interfaces__msg__TestPacket__Sequence *)allocator.allocate(sizeof(hw3_interfaces__msg__TestPacket__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hw3_interfaces__msg__TestPacket__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hw3_interfaces__msg__TestPacket__Sequence__destroy(hw3_interfaces__msg__TestPacket__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hw3_interfaces__msg__TestPacket__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hw3_interfaces__msg__TestPacket__Sequence__are_equal(const hw3_interfaces__msg__TestPacket__Sequence * lhs, const hw3_interfaces__msg__TestPacket__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hw3_interfaces__msg__TestPacket__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hw3_interfaces__msg__TestPacket__Sequence__copy(
  const hw3_interfaces__msg__TestPacket__Sequence * input,
  hw3_interfaces__msg__TestPacket__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hw3_interfaces__msg__TestPacket);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hw3_interfaces__msg__TestPacket * data =
      (hw3_interfaces__msg__TestPacket *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hw3_interfaces__msg__TestPacket__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hw3_interfaces__msg__TestPacket__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hw3_interfaces__msg__TestPacket__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
