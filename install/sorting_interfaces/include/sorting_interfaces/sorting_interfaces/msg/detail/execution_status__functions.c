// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sorting_interfaces:msg/ExecutionStatus.idl
// generated code does not contain a copyright notice
#include "sorting_interfaces/msg/detail/execution_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_id`
// Member `stage`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
sorting_interfaces__msg__ExecutionStatus__init(sorting_interfaces__msg__ExecutionStatus * msg)
{
  if (!msg) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    sorting_interfaces__msg__ExecutionStatus__fini(msg);
    return false;
  }
  // stage
  if (!rosidl_runtime_c__String__init(&msg->stage)) {
    sorting_interfaces__msg__ExecutionStatus__fini(msg);
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    sorting_interfaces__msg__ExecutionStatus__fini(msg);
    return false;
  }
  return true;
}

void
sorting_interfaces__msg__ExecutionStatus__fini(sorting_interfaces__msg__ExecutionStatus * msg)
{
  if (!msg) {
    return;
  }
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // stage
  rosidl_runtime_c__String__fini(&msg->stage);
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
sorting_interfaces__msg__ExecutionStatus__are_equal(const sorting_interfaces__msg__ExecutionStatus * lhs, const sorting_interfaces__msg__ExecutionStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // stage
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->stage), &(rhs->stage)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
sorting_interfaces__msg__ExecutionStatus__copy(
  const sorting_interfaces__msg__ExecutionStatus * input,
  sorting_interfaces__msg__ExecutionStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // stage
  if (!rosidl_runtime_c__String__copy(
      &(input->stage), &(output->stage)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

sorting_interfaces__msg__ExecutionStatus *
sorting_interfaces__msg__ExecutionStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sorting_interfaces__msg__ExecutionStatus * msg = (sorting_interfaces__msg__ExecutionStatus *)allocator.allocate(sizeof(sorting_interfaces__msg__ExecutionStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sorting_interfaces__msg__ExecutionStatus));
  bool success = sorting_interfaces__msg__ExecutionStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sorting_interfaces__msg__ExecutionStatus__destroy(sorting_interfaces__msg__ExecutionStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sorting_interfaces__msg__ExecutionStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sorting_interfaces__msg__ExecutionStatus__Sequence__init(sorting_interfaces__msg__ExecutionStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sorting_interfaces__msg__ExecutionStatus * data = NULL;

  if (size) {
    data = (sorting_interfaces__msg__ExecutionStatus *)allocator.zero_allocate(size, sizeof(sorting_interfaces__msg__ExecutionStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sorting_interfaces__msg__ExecutionStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sorting_interfaces__msg__ExecutionStatus__fini(&data[i - 1]);
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
sorting_interfaces__msg__ExecutionStatus__Sequence__fini(sorting_interfaces__msg__ExecutionStatus__Sequence * array)
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
      sorting_interfaces__msg__ExecutionStatus__fini(&array->data[i]);
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

sorting_interfaces__msg__ExecutionStatus__Sequence *
sorting_interfaces__msg__ExecutionStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sorting_interfaces__msg__ExecutionStatus__Sequence * array = (sorting_interfaces__msg__ExecutionStatus__Sequence *)allocator.allocate(sizeof(sorting_interfaces__msg__ExecutionStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sorting_interfaces__msg__ExecutionStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sorting_interfaces__msg__ExecutionStatus__Sequence__destroy(sorting_interfaces__msg__ExecutionStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sorting_interfaces__msg__ExecutionStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sorting_interfaces__msg__ExecutionStatus__Sequence__are_equal(const sorting_interfaces__msg__ExecutionStatus__Sequence * lhs, const sorting_interfaces__msg__ExecutionStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sorting_interfaces__msg__ExecutionStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sorting_interfaces__msg__ExecutionStatus__Sequence__copy(
  const sorting_interfaces__msg__ExecutionStatus__Sequence * input,
  sorting_interfaces__msg__ExecutionStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sorting_interfaces__msg__ExecutionStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sorting_interfaces__msg__ExecutionStatus * data =
      (sorting_interfaces__msg__ExecutionStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sorting_interfaces__msg__ExecutionStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sorting_interfaces__msg__ExecutionStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sorting_interfaces__msg__ExecutionStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
