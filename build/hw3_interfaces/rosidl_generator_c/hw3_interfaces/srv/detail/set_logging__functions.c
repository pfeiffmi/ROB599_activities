// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hw3_interfaces:srv/SetLogging.idl
// generated code does not contain a copyright notice
#include "hw3_interfaces/srv/detail/set_logging__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `log_file`
#include "rosidl_runtime_c/string_functions.h"

bool
hw3_interfaces__srv__SetLogging_Request__init(hw3_interfaces__srv__SetLogging_Request * msg)
{
  if (!msg) {
    return false;
  }
  // log_data
  // log_file
  if (!rosidl_runtime_c__String__init(&msg->log_file)) {
    hw3_interfaces__srv__SetLogging_Request__fini(msg);
    return false;
  }
  return true;
}

void
hw3_interfaces__srv__SetLogging_Request__fini(hw3_interfaces__srv__SetLogging_Request * msg)
{
  if (!msg) {
    return;
  }
  // log_data
  // log_file
  rosidl_runtime_c__String__fini(&msg->log_file);
}

bool
hw3_interfaces__srv__SetLogging_Request__are_equal(const hw3_interfaces__srv__SetLogging_Request * lhs, const hw3_interfaces__srv__SetLogging_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // log_data
  if (lhs->log_data != rhs->log_data) {
    return false;
  }
  // log_file
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->log_file), &(rhs->log_file)))
  {
    return false;
  }
  return true;
}

bool
hw3_interfaces__srv__SetLogging_Request__copy(
  const hw3_interfaces__srv__SetLogging_Request * input,
  hw3_interfaces__srv__SetLogging_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // log_data
  output->log_data = input->log_data;
  // log_file
  if (!rosidl_runtime_c__String__copy(
      &(input->log_file), &(output->log_file)))
  {
    return false;
  }
  return true;
}

hw3_interfaces__srv__SetLogging_Request *
hw3_interfaces__srv__SetLogging_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__SetLogging_Request * msg = (hw3_interfaces__srv__SetLogging_Request *)allocator.allocate(sizeof(hw3_interfaces__srv__SetLogging_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hw3_interfaces__srv__SetLogging_Request));
  bool success = hw3_interfaces__srv__SetLogging_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hw3_interfaces__srv__SetLogging_Request__destroy(hw3_interfaces__srv__SetLogging_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hw3_interfaces__srv__SetLogging_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hw3_interfaces__srv__SetLogging_Request__Sequence__init(hw3_interfaces__srv__SetLogging_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__SetLogging_Request * data = NULL;

  if (size) {
    data = (hw3_interfaces__srv__SetLogging_Request *)allocator.zero_allocate(size, sizeof(hw3_interfaces__srv__SetLogging_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hw3_interfaces__srv__SetLogging_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hw3_interfaces__srv__SetLogging_Request__fini(&data[i - 1]);
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
hw3_interfaces__srv__SetLogging_Request__Sequence__fini(hw3_interfaces__srv__SetLogging_Request__Sequence * array)
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
      hw3_interfaces__srv__SetLogging_Request__fini(&array->data[i]);
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

hw3_interfaces__srv__SetLogging_Request__Sequence *
hw3_interfaces__srv__SetLogging_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__SetLogging_Request__Sequence * array = (hw3_interfaces__srv__SetLogging_Request__Sequence *)allocator.allocate(sizeof(hw3_interfaces__srv__SetLogging_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hw3_interfaces__srv__SetLogging_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hw3_interfaces__srv__SetLogging_Request__Sequence__destroy(hw3_interfaces__srv__SetLogging_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hw3_interfaces__srv__SetLogging_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hw3_interfaces__srv__SetLogging_Request__Sequence__are_equal(const hw3_interfaces__srv__SetLogging_Request__Sequence * lhs, const hw3_interfaces__srv__SetLogging_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hw3_interfaces__srv__SetLogging_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hw3_interfaces__srv__SetLogging_Request__Sequence__copy(
  const hw3_interfaces__srv__SetLogging_Request__Sequence * input,
  hw3_interfaces__srv__SetLogging_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hw3_interfaces__srv__SetLogging_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hw3_interfaces__srv__SetLogging_Request * data =
      (hw3_interfaces__srv__SetLogging_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hw3_interfaces__srv__SetLogging_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hw3_interfaces__srv__SetLogging_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hw3_interfaces__srv__SetLogging_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
hw3_interfaces__srv__SetLogging_Response__init(hw3_interfaces__srv__SetLogging_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
hw3_interfaces__srv__SetLogging_Response__fini(hw3_interfaces__srv__SetLogging_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
hw3_interfaces__srv__SetLogging_Response__are_equal(const hw3_interfaces__srv__SetLogging_Response * lhs, const hw3_interfaces__srv__SetLogging_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
hw3_interfaces__srv__SetLogging_Response__copy(
  const hw3_interfaces__srv__SetLogging_Response * input,
  hw3_interfaces__srv__SetLogging_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

hw3_interfaces__srv__SetLogging_Response *
hw3_interfaces__srv__SetLogging_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__SetLogging_Response * msg = (hw3_interfaces__srv__SetLogging_Response *)allocator.allocate(sizeof(hw3_interfaces__srv__SetLogging_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hw3_interfaces__srv__SetLogging_Response));
  bool success = hw3_interfaces__srv__SetLogging_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hw3_interfaces__srv__SetLogging_Response__destroy(hw3_interfaces__srv__SetLogging_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hw3_interfaces__srv__SetLogging_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hw3_interfaces__srv__SetLogging_Response__Sequence__init(hw3_interfaces__srv__SetLogging_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__SetLogging_Response * data = NULL;

  if (size) {
    data = (hw3_interfaces__srv__SetLogging_Response *)allocator.zero_allocate(size, sizeof(hw3_interfaces__srv__SetLogging_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hw3_interfaces__srv__SetLogging_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hw3_interfaces__srv__SetLogging_Response__fini(&data[i - 1]);
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
hw3_interfaces__srv__SetLogging_Response__Sequence__fini(hw3_interfaces__srv__SetLogging_Response__Sequence * array)
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
      hw3_interfaces__srv__SetLogging_Response__fini(&array->data[i]);
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

hw3_interfaces__srv__SetLogging_Response__Sequence *
hw3_interfaces__srv__SetLogging_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__SetLogging_Response__Sequence * array = (hw3_interfaces__srv__SetLogging_Response__Sequence *)allocator.allocate(sizeof(hw3_interfaces__srv__SetLogging_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hw3_interfaces__srv__SetLogging_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hw3_interfaces__srv__SetLogging_Response__Sequence__destroy(hw3_interfaces__srv__SetLogging_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hw3_interfaces__srv__SetLogging_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hw3_interfaces__srv__SetLogging_Response__Sequence__are_equal(const hw3_interfaces__srv__SetLogging_Response__Sequence * lhs, const hw3_interfaces__srv__SetLogging_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hw3_interfaces__srv__SetLogging_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hw3_interfaces__srv__SetLogging_Response__Sequence__copy(
  const hw3_interfaces__srv__SetLogging_Response__Sequence * input,
  hw3_interfaces__srv__SetLogging_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hw3_interfaces__srv__SetLogging_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hw3_interfaces__srv__SetLogging_Response * data =
      (hw3_interfaces__srv__SetLogging_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hw3_interfaces__srv__SetLogging_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hw3_interfaces__srv__SetLogging_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hw3_interfaces__srv__SetLogging_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "hw3_interfaces/srv/detail/set_logging__functions.h"

bool
hw3_interfaces__srv__SetLogging_Event__init(hw3_interfaces__srv__SetLogging_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    hw3_interfaces__srv__SetLogging_Event__fini(msg);
    return false;
  }
  // request
  if (!hw3_interfaces__srv__SetLogging_Request__Sequence__init(&msg->request, 0)) {
    hw3_interfaces__srv__SetLogging_Event__fini(msg);
    return false;
  }
  // response
  if (!hw3_interfaces__srv__SetLogging_Response__Sequence__init(&msg->response, 0)) {
    hw3_interfaces__srv__SetLogging_Event__fini(msg);
    return false;
  }
  return true;
}

void
hw3_interfaces__srv__SetLogging_Event__fini(hw3_interfaces__srv__SetLogging_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  hw3_interfaces__srv__SetLogging_Request__Sequence__fini(&msg->request);
  // response
  hw3_interfaces__srv__SetLogging_Response__Sequence__fini(&msg->response);
}

bool
hw3_interfaces__srv__SetLogging_Event__are_equal(const hw3_interfaces__srv__SetLogging_Event * lhs, const hw3_interfaces__srv__SetLogging_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!hw3_interfaces__srv__SetLogging_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!hw3_interfaces__srv__SetLogging_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
hw3_interfaces__srv__SetLogging_Event__copy(
  const hw3_interfaces__srv__SetLogging_Event * input,
  hw3_interfaces__srv__SetLogging_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!hw3_interfaces__srv__SetLogging_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!hw3_interfaces__srv__SetLogging_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

hw3_interfaces__srv__SetLogging_Event *
hw3_interfaces__srv__SetLogging_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__SetLogging_Event * msg = (hw3_interfaces__srv__SetLogging_Event *)allocator.allocate(sizeof(hw3_interfaces__srv__SetLogging_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hw3_interfaces__srv__SetLogging_Event));
  bool success = hw3_interfaces__srv__SetLogging_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hw3_interfaces__srv__SetLogging_Event__destroy(hw3_interfaces__srv__SetLogging_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hw3_interfaces__srv__SetLogging_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hw3_interfaces__srv__SetLogging_Event__Sequence__init(hw3_interfaces__srv__SetLogging_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__SetLogging_Event * data = NULL;

  if (size) {
    data = (hw3_interfaces__srv__SetLogging_Event *)allocator.zero_allocate(size, sizeof(hw3_interfaces__srv__SetLogging_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hw3_interfaces__srv__SetLogging_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hw3_interfaces__srv__SetLogging_Event__fini(&data[i - 1]);
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
hw3_interfaces__srv__SetLogging_Event__Sequence__fini(hw3_interfaces__srv__SetLogging_Event__Sequence * array)
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
      hw3_interfaces__srv__SetLogging_Event__fini(&array->data[i]);
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

hw3_interfaces__srv__SetLogging_Event__Sequence *
hw3_interfaces__srv__SetLogging_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hw3_interfaces__srv__SetLogging_Event__Sequence * array = (hw3_interfaces__srv__SetLogging_Event__Sequence *)allocator.allocate(sizeof(hw3_interfaces__srv__SetLogging_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hw3_interfaces__srv__SetLogging_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hw3_interfaces__srv__SetLogging_Event__Sequence__destroy(hw3_interfaces__srv__SetLogging_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hw3_interfaces__srv__SetLogging_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hw3_interfaces__srv__SetLogging_Event__Sequence__are_equal(const hw3_interfaces__srv__SetLogging_Event__Sequence * lhs, const hw3_interfaces__srv__SetLogging_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hw3_interfaces__srv__SetLogging_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hw3_interfaces__srv__SetLogging_Event__Sequence__copy(
  const hw3_interfaces__srv__SetLogging_Event__Sequence * input,
  hw3_interfaces__srv__SetLogging_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hw3_interfaces__srv__SetLogging_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hw3_interfaces__srv__SetLogging_Event * data =
      (hw3_interfaces__srv__SetLogging_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hw3_interfaces__srv__SetLogging_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hw3_interfaces__srv__SetLogging_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hw3_interfaces__srv__SetLogging_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
