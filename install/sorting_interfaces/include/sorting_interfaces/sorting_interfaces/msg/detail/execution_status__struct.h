// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sorting_interfaces:msg/ExecutionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/execution_status.h"


#ifndef SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__STRUCT_H_
#define SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__STRUCT_H_

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
// Member 'stage'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ExecutionStatus in the package sorting_interfaces.
typedef struct sorting_interfaces__msg__ExecutionStatus
{
  rosidl_runtime_c__String object_id;
  rosidl_runtime_c__String stage;
  bool success;
  rosidl_runtime_c__String message;
} sorting_interfaces__msg__ExecutionStatus;

// Struct for a sequence of sorting_interfaces__msg__ExecutionStatus.
typedef struct sorting_interfaces__msg__ExecutionStatus__Sequence
{
  sorting_interfaces__msg__ExecutionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sorting_interfaces__msg__ExecutionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__STRUCT_H_
