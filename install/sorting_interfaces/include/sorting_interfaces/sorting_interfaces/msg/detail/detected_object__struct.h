// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sorting_interfaces:msg/DetectedObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/detected_object.h"


#ifndef SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_
#define SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/DetectedObject in the package sorting_interfaces.
typedef struct sorting_interfaces__msg__DetectedObject
{
  rosidl_runtime_c__String object_id;
  rosidl_runtime_c__String class_name;
  float confidence;
  geometry_msgs__msg__PoseStamped pose;
  geometry_msgs__msg__Vector3 size;
} sorting_interfaces__msg__DetectedObject;

// Struct for a sequence of sorting_interfaces__msg__DetectedObject.
typedef struct sorting_interfaces__msg__DetectedObject__Sequence
{
  sorting_interfaces__msg__DetectedObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sorting_interfaces__msg__DetectedObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_
