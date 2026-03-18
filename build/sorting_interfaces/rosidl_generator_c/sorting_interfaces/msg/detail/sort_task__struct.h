// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sorting_interfaces:msg/SortTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/sort_task.h"


#ifndef SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__STRUCT_H_
#define SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'object_id'
// Member 'class_name'
// Member 'target_bin'
#include "rosidl_runtime_c/string.h"
// Member 'pick_pose'
// Member 'pregrasp_pose'
// Member 'lift_pose'
// Member 'place_pose'
// Member 'retreat_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/SortTask in the package sorting_interfaces.
typedef struct sorting_interfaces__msg__SortTask
{
  rosidl_runtime_c__String object_id;
  rosidl_runtime_c__String class_name;
  rosidl_runtime_c__String target_bin;
  geometry_msgs__msg__PoseStamped pick_pose;
  geometry_msgs__msg__PoseStamped pregrasp_pose;
  geometry_msgs__msg__PoseStamped lift_pose;
  geometry_msgs__msg__PoseStamped place_pose;
  geometry_msgs__msg__PoseStamped retreat_pose;
} sorting_interfaces__msg__SortTask;

// Struct for a sequence of sorting_interfaces__msg__SortTask.
typedef struct sorting_interfaces__msg__SortTask__Sequence
{
  sorting_interfaces__msg__SortTask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sorting_interfaces__msg__SortTask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__STRUCT_H_
