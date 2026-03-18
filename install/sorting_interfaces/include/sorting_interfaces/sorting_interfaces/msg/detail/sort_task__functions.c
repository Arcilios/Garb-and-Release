// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sorting_interfaces:msg/SortTask.idl
// generated code does not contain a copyright notice
#include "sorting_interfaces/msg/detail/sort_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_id`
// Member `class_name`
// Member `target_bin`
#include "rosidl_runtime_c/string_functions.h"
// Member `pick_pose`
// Member `pregrasp_pose`
// Member `lift_pose`
// Member `place_pose`
// Member `retreat_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
sorting_interfaces__msg__SortTask__init(sorting_interfaces__msg__SortTask * msg)
{
  if (!msg) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    sorting_interfaces__msg__SortTask__fini(msg);
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    sorting_interfaces__msg__SortTask__fini(msg);
    return false;
  }
  // target_bin
  if (!rosidl_runtime_c__String__init(&msg->target_bin)) {
    sorting_interfaces__msg__SortTask__fini(msg);
    return false;
  }
  // pick_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pick_pose)) {
    sorting_interfaces__msg__SortTask__fini(msg);
    return false;
  }
  // pregrasp_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pregrasp_pose)) {
    sorting_interfaces__msg__SortTask__fini(msg);
    return false;
  }
  // lift_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->lift_pose)) {
    sorting_interfaces__msg__SortTask__fini(msg);
    return false;
  }
  // place_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->place_pose)) {
    sorting_interfaces__msg__SortTask__fini(msg);
    return false;
  }
  // retreat_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->retreat_pose)) {
    sorting_interfaces__msg__SortTask__fini(msg);
    return false;
  }
  return true;
}

void
sorting_interfaces__msg__SortTask__fini(sorting_interfaces__msg__SortTask * msg)
{
  if (!msg) {
    return;
  }
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // target_bin
  rosidl_runtime_c__String__fini(&msg->target_bin);
  // pick_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pick_pose);
  // pregrasp_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pregrasp_pose);
  // lift_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->lift_pose);
  // place_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->place_pose);
  // retreat_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->retreat_pose);
}

bool
sorting_interfaces__msg__SortTask__are_equal(const sorting_interfaces__msg__SortTask * lhs, const sorting_interfaces__msg__SortTask * rhs)
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
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // target_bin
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_bin), &(rhs->target_bin)))
  {
    return false;
  }
  // pick_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pick_pose), &(rhs->pick_pose)))
  {
    return false;
  }
  // pregrasp_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pregrasp_pose), &(rhs->pregrasp_pose)))
  {
    return false;
  }
  // lift_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->lift_pose), &(rhs->lift_pose)))
  {
    return false;
  }
  // place_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->place_pose), &(rhs->place_pose)))
  {
    return false;
  }
  // retreat_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->retreat_pose), &(rhs->retreat_pose)))
  {
    return false;
  }
  return true;
}

bool
sorting_interfaces__msg__SortTask__copy(
  const sorting_interfaces__msg__SortTask * input,
  sorting_interfaces__msg__SortTask * output)
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
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // target_bin
  if (!rosidl_runtime_c__String__copy(
      &(input->target_bin), &(output->target_bin)))
  {
    return false;
  }
  // pick_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pick_pose), &(output->pick_pose)))
  {
    return false;
  }
  // pregrasp_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pregrasp_pose), &(output->pregrasp_pose)))
  {
    return false;
  }
  // lift_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->lift_pose), &(output->lift_pose)))
  {
    return false;
  }
  // place_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->place_pose), &(output->place_pose)))
  {
    return false;
  }
  // retreat_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->retreat_pose), &(output->retreat_pose)))
  {
    return false;
  }
  return true;
}

sorting_interfaces__msg__SortTask *
sorting_interfaces__msg__SortTask__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sorting_interfaces__msg__SortTask * msg = (sorting_interfaces__msg__SortTask *)allocator.allocate(sizeof(sorting_interfaces__msg__SortTask), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sorting_interfaces__msg__SortTask));
  bool success = sorting_interfaces__msg__SortTask__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sorting_interfaces__msg__SortTask__destroy(sorting_interfaces__msg__SortTask * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sorting_interfaces__msg__SortTask__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sorting_interfaces__msg__SortTask__Sequence__init(sorting_interfaces__msg__SortTask__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sorting_interfaces__msg__SortTask * data = NULL;

  if (size) {
    data = (sorting_interfaces__msg__SortTask *)allocator.zero_allocate(size, sizeof(sorting_interfaces__msg__SortTask), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sorting_interfaces__msg__SortTask__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sorting_interfaces__msg__SortTask__fini(&data[i - 1]);
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
sorting_interfaces__msg__SortTask__Sequence__fini(sorting_interfaces__msg__SortTask__Sequence * array)
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
      sorting_interfaces__msg__SortTask__fini(&array->data[i]);
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

sorting_interfaces__msg__SortTask__Sequence *
sorting_interfaces__msg__SortTask__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sorting_interfaces__msg__SortTask__Sequence * array = (sorting_interfaces__msg__SortTask__Sequence *)allocator.allocate(sizeof(sorting_interfaces__msg__SortTask__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sorting_interfaces__msg__SortTask__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sorting_interfaces__msg__SortTask__Sequence__destroy(sorting_interfaces__msg__SortTask__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sorting_interfaces__msg__SortTask__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sorting_interfaces__msg__SortTask__Sequence__are_equal(const sorting_interfaces__msg__SortTask__Sequence * lhs, const sorting_interfaces__msg__SortTask__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sorting_interfaces__msg__SortTask__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sorting_interfaces__msg__SortTask__Sequence__copy(
  const sorting_interfaces__msg__SortTask__Sequence * input,
  sorting_interfaces__msg__SortTask__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sorting_interfaces__msg__SortTask);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sorting_interfaces__msg__SortTask * data =
      (sorting_interfaces__msg__SortTask *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sorting_interfaces__msg__SortTask__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sorting_interfaces__msg__SortTask__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sorting_interfaces__msg__SortTask__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
