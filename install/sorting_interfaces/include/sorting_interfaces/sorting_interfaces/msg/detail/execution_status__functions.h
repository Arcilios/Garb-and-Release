// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sorting_interfaces:msg/ExecutionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/execution_status.h"


#ifndef SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__FUNCTIONS_H_
#define SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "sorting_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sorting_interfaces/msg/detail/execution_status__struct.h"

/// Initialize msg/ExecutionStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sorting_interfaces__msg__ExecutionStatus
 * )) before or use
 * sorting_interfaces__msg__ExecutionStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
bool
sorting_interfaces__msg__ExecutionStatus__init(sorting_interfaces__msg__ExecutionStatus * msg);

/// Finalize msg/ExecutionStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
void
sorting_interfaces__msg__ExecutionStatus__fini(sorting_interfaces__msg__ExecutionStatus * msg);

/// Create msg/ExecutionStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sorting_interfaces__msg__ExecutionStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
sorting_interfaces__msg__ExecutionStatus *
sorting_interfaces__msg__ExecutionStatus__create(void);

/// Destroy msg/ExecutionStatus message.
/**
 * It calls
 * sorting_interfaces__msg__ExecutionStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
void
sorting_interfaces__msg__ExecutionStatus__destroy(sorting_interfaces__msg__ExecutionStatus * msg);

/// Check for msg/ExecutionStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
bool
sorting_interfaces__msg__ExecutionStatus__are_equal(const sorting_interfaces__msg__ExecutionStatus * lhs, const sorting_interfaces__msg__ExecutionStatus * rhs);

/// Copy a msg/ExecutionStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
bool
sorting_interfaces__msg__ExecutionStatus__copy(
  const sorting_interfaces__msg__ExecutionStatus * input,
  sorting_interfaces__msg__ExecutionStatus * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
const rosidl_type_hash_t *
sorting_interfaces__msg__ExecutionStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
sorting_interfaces__msg__ExecutionStatus__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
const rosidl_runtime_c__type_description__TypeSource *
sorting_interfaces__msg__ExecutionStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
sorting_interfaces__msg__ExecutionStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ExecutionStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * sorting_interfaces__msg__ExecutionStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
bool
sorting_interfaces__msg__ExecutionStatus__Sequence__init(sorting_interfaces__msg__ExecutionStatus__Sequence * array, size_t size);

/// Finalize array of msg/ExecutionStatus messages.
/**
 * It calls
 * sorting_interfaces__msg__ExecutionStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
void
sorting_interfaces__msg__ExecutionStatus__Sequence__fini(sorting_interfaces__msg__ExecutionStatus__Sequence * array);

/// Create array of msg/ExecutionStatus messages.
/**
 * It allocates the memory for the array and calls
 * sorting_interfaces__msg__ExecutionStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
sorting_interfaces__msg__ExecutionStatus__Sequence *
sorting_interfaces__msg__ExecutionStatus__Sequence__create(size_t size);

/// Destroy array of msg/ExecutionStatus messages.
/**
 * It calls
 * sorting_interfaces__msg__ExecutionStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
void
sorting_interfaces__msg__ExecutionStatus__Sequence__destroy(sorting_interfaces__msg__ExecutionStatus__Sequence * array);

/// Check for msg/ExecutionStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
bool
sorting_interfaces__msg__ExecutionStatus__Sequence__are_equal(const sorting_interfaces__msg__ExecutionStatus__Sequence * lhs, const sorting_interfaces__msg__ExecutionStatus__Sequence * rhs);

/// Copy an array of msg/ExecutionStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
bool
sorting_interfaces__msg__ExecutionStatus__Sequence__copy(
  const sorting_interfaces__msg__ExecutionStatus__Sequence * input,
  sorting_interfaces__msg__ExecutionStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__FUNCTIONS_H_
