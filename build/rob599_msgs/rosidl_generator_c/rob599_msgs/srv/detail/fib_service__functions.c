// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rob599_msgs:srv/FibService.idl
// generated code does not contain a copyright notice
#include "rob599_msgs/srv/detail/fib_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rob599_msgs__srv__FibService_Request__init(rob599_msgs__srv__FibService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // number
  return true;
}

void
rob599_msgs__srv__FibService_Request__fini(rob599_msgs__srv__FibService_Request * msg)
{
  if (!msg) {
    return;
  }
  // number
}

bool
rob599_msgs__srv__FibService_Request__are_equal(const rob599_msgs__srv__FibService_Request * lhs, const rob599_msgs__srv__FibService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  return true;
}

bool
rob599_msgs__srv__FibService_Request__copy(
  const rob599_msgs__srv__FibService_Request * input,
  rob599_msgs__srv__FibService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // number
  output->number = input->number;
  return true;
}

rob599_msgs__srv__FibService_Request *
rob599_msgs__srv__FibService_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__srv__FibService_Request * msg = (rob599_msgs__srv__FibService_Request *)allocator.allocate(sizeof(rob599_msgs__srv__FibService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rob599_msgs__srv__FibService_Request));
  bool success = rob599_msgs__srv__FibService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rob599_msgs__srv__FibService_Request__destroy(rob599_msgs__srv__FibService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rob599_msgs__srv__FibService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rob599_msgs__srv__FibService_Request__Sequence__init(rob599_msgs__srv__FibService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__srv__FibService_Request * data = NULL;

  if (size) {
    data = (rob599_msgs__srv__FibService_Request *)allocator.zero_allocate(size, sizeof(rob599_msgs__srv__FibService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rob599_msgs__srv__FibService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rob599_msgs__srv__FibService_Request__fini(&data[i - 1]);
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
rob599_msgs__srv__FibService_Request__Sequence__fini(rob599_msgs__srv__FibService_Request__Sequence * array)
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
      rob599_msgs__srv__FibService_Request__fini(&array->data[i]);
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

rob599_msgs__srv__FibService_Request__Sequence *
rob599_msgs__srv__FibService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__srv__FibService_Request__Sequence * array = (rob599_msgs__srv__FibService_Request__Sequence *)allocator.allocate(sizeof(rob599_msgs__srv__FibService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rob599_msgs__srv__FibService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rob599_msgs__srv__FibService_Request__Sequence__destroy(rob599_msgs__srv__FibService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rob599_msgs__srv__FibService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rob599_msgs__srv__FibService_Request__Sequence__are_equal(const rob599_msgs__srv__FibService_Request__Sequence * lhs, const rob599_msgs__srv__FibService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rob599_msgs__srv__FibService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rob599_msgs__srv__FibService_Request__Sequence__copy(
  const rob599_msgs__srv__FibService_Request__Sequence * input,
  rob599_msgs__srv__FibService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rob599_msgs__srv__FibService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rob599_msgs__srv__FibService_Request * data =
      (rob599_msgs__srv__FibService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rob599_msgs__srv__FibService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rob599_msgs__srv__FibService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rob599_msgs__srv__FibService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rob599_msgs__srv__FibService_Response__init(rob599_msgs__srv__FibService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // fibonacci
  return true;
}

void
rob599_msgs__srv__FibService_Response__fini(rob599_msgs__srv__FibService_Response * msg)
{
  if (!msg) {
    return;
  }
  // fibonacci
}

bool
rob599_msgs__srv__FibService_Response__are_equal(const rob599_msgs__srv__FibService_Response * lhs, const rob599_msgs__srv__FibService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fibonacci
  if (lhs->fibonacci != rhs->fibonacci) {
    return false;
  }
  return true;
}

bool
rob599_msgs__srv__FibService_Response__copy(
  const rob599_msgs__srv__FibService_Response * input,
  rob599_msgs__srv__FibService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // fibonacci
  output->fibonacci = input->fibonacci;
  return true;
}

rob599_msgs__srv__FibService_Response *
rob599_msgs__srv__FibService_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__srv__FibService_Response * msg = (rob599_msgs__srv__FibService_Response *)allocator.allocate(sizeof(rob599_msgs__srv__FibService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rob599_msgs__srv__FibService_Response));
  bool success = rob599_msgs__srv__FibService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rob599_msgs__srv__FibService_Response__destroy(rob599_msgs__srv__FibService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rob599_msgs__srv__FibService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rob599_msgs__srv__FibService_Response__Sequence__init(rob599_msgs__srv__FibService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__srv__FibService_Response * data = NULL;

  if (size) {
    data = (rob599_msgs__srv__FibService_Response *)allocator.zero_allocate(size, sizeof(rob599_msgs__srv__FibService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rob599_msgs__srv__FibService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rob599_msgs__srv__FibService_Response__fini(&data[i - 1]);
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
rob599_msgs__srv__FibService_Response__Sequence__fini(rob599_msgs__srv__FibService_Response__Sequence * array)
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
      rob599_msgs__srv__FibService_Response__fini(&array->data[i]);
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

rob599_msgs__srv__FibService_Response__Sequence *
rob599_msgs__srv__FibService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__srv__FibService_Response__Sequence * array = (rob599_msgs__srv__FibService_Response__Sequence *)allocator.allocate(sizeof(rob599_msgs__srv__FibService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rob599_msgs__srv__FibService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rob599_msgs__srv__FibService_Response__Sequence__destroy(rob599_msgs__srv__FibService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rob599_msgs__srv__FibService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rob599_msgs__srv__FibService_Response__Sequence__are_equal(const rob599_msgs__srv__FibService_Response__Sequence * lhs, const rob599_msgs__srv__FibService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rob599_msgs__srv__FibService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rob599_msgs__srv__FibService_Response__Sequence__copy(
  const rob599_msgs__srv__FibService_Response__Sequence * input,
  rob599_msgs__srv__FibService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rob599_msgs__srv__FibService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rob599_msgs__srv__FibService_Response * data =
      (rob599_msgs__srv__FibService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rob599_msgs__srv__FibService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rob599_msgs__srv__FibService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rob599_msgs__srv__FibService_Response__copy(
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
// #include "rob599_msgs/srv/detail/fib_service__functions.h"

bool
rob599_msgs__srv__FibService_Event__init(rob599_msgs__srv__FibService_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    rob599_msgs__srv__FibService_Event__fini(msg);
    return false;
  }
  // request
  if (!rob599_msgs__srv__FibService_Request__Sequence__init(&msg->request, 0)) {
    rob599_msgs__srv__FibService_Event__fini(msg);
    return false;
  }
  // response
  if (!rob599_msgs__srv__FibService_Response__Sequence__init(&msg->response, 0)) {
    rob599_msgs__srv__FibService_Event__fini(msg);
    return false;
  }
  return true;
}

void
rob599_msgs__srv__FibService_Event__fini(rob599_msgs__srv__FibService_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  rob599_msgs__srv__FibService_Request__Sequence__fini(&msg->request);
  // response
  rob599_msgs__srv__FibService_Response__Sequence__fini(&msg->response);
}

bool
rob599_msgs__srv__FibService_Event__are_equal(const rob599_msgs__srv__FibService_Event * lhs, const rob599_msgs__srv__FibService_Event * rhs)
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
  if (!rob599_msgs__srv__FibService_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!rob599_msgs__srv__FibService_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
rob599_msgs__srv__FibService_Event__copy(
  const rob599_msgs__srv__FibService_Event * input,
  rob599_msgs__srv__FibService_Event * output)
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
  if (!rob599_msgs__srv__FibService_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!rob599_msgs__srv__FibService_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

rob599_msgs__srv__FibService_Event *
rob599_msgs__srv__FibService_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__srv__FibService_Event * msg = (rob599_msgs__srv__FibService_Event *)allocator.allocate(sizeof(rob599_msgs__srv__FibService_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rob599_msgs__srv__FibService_Event));
  bool success = rob599_msgs__srv__FibService_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rob599_msgs__srv__FibService_Event__destroy(rob599_msgs__srv__FibService_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rob599_msgs__srv__FibService_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rob599_msgs__srv__FibService_Event__Sequence__init(rob599_msgs__srv__FibService_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__srv__FibService_Event * data = NULL;

  if (size) {
    data = (rob599_msgs__srv__FibService_Event *)allocator.zero_allocate(size, sizeof(rob599_msgs__srv__FibService_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rob599_msgs__srv__FibService_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rob599_msgs__srv__FibService_Event__fini(&data[i - 1]);
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
rob599_msgs__srv__FibService_Event__Sequence__fini(rob599_msgs__srv__FibService_Event__Sequence * array)
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
      rob599_msgs__srv__FibService_Event__fini(&array->data[i]);
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

rob599_msgs__srv__FibService_Event__Sequence *
rob599_msgs__srv__FibService_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rob599_msgs__srv__FibService_Event__Sequence * array = (rob599_msgs__srv__FibService_Event__Sequence *)allocator.allocate(sizeof(rob599_msgs__srv__FibService_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rob599_msgs__srv__FibService_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rob599_msgs__srv__FibService_Event__Sequence__destroy(rob599_msgs__srv__FibService_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rob599_msgs__srv__FibService_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rob599_msgs__srv__FibService_Event__Sequence__are_equal(const rob599_msgs__srv__FibService_Event__Sequence * lhs, const rob599_msgs__srv__FibService_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rob599_msgs__srv__FibService_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rob599_msgs__srv__FibService_Event__Sequence__copy(
  const rob599_msgs__srv__FibService_Event__Sequence * input,
  rob599_msgs__srv__FibService_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rob599_msgs__srv__FibService_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rob599_msgs__srv__FibService_Event * data =
      (rob599_msgs__srv__FibService_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rob599_msgs__srv__FibService_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rob599_msgs__srv__FibService_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rob599_msgs__srv__FibService_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
