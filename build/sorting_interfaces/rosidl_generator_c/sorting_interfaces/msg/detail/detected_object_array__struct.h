// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sorting_interfaces:msg/DetectedObjectArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/detected_object_array.h"


#ifndef SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT_ARRAY__STRUCT_H_
#define SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'objects'
#include "sorting_interfaces/msg/detail/detected_object__struct.h"

/// Struct defined in msg/DetectedObjectArray in the package sorting_interfaces.
typedef struct sorting_interfaces__msg__DetectedObjectArray
{
  std_msgs__msg__Header header;
  sorting_interfaces__msg__DetectedObject__Sequence objects;
} sorting_interfaces__msg__DetectedObjectArray;

// Struct for a sequence of sorting_interfaces__msg__DetectedObjectArray.
typedef struct sorting_interfaces__msg__DetectedObjectArray__Sequence
{
  sorting_interfaces__msg__DetectedObjectArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sorting_interfaces__msg__DetectedObjectArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT_ARRAY__STRUCT_H_
