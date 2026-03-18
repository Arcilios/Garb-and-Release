// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from sorting_interfaces:msg/SortTask.idl
// generated code does not contain a copyright notice
#ifndef SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sorting_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sorting_interfaces/msg/detail/sort_task__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sorting_interfaces
bool cdr_serialize_sorting_interfaces__msg__SortTask(
  const sorting_interfaces__msg__SortTask * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sorting_interfaces
bool cdr_deserialize_sorting_interfaces__msg__SortTask(
  eprosima::fastcdr::Cdr &,
  sorting_interfaces__msg__SortTask * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sorting_interfaces
size_t get_serialized_size_sorting_interfaces__msg__SortTask(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sorting_interfaces
size_t max_serialized_size_sorting_interfaces__msg__SortTask(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sorting_interfaces
bool cdr_serialize_key_sorting_interfaces__msg__SortTask(
  const sorting_interfaces__msg__SortTask * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sorting_interfaces
size_t get_serialized_size_key_sorting_interfaces__msg__SortTask(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sorting_interfaces
size_t max_serialized_size_key_sorting_interfaces__msg__SortTask(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sorting_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sorting_interfaces, msg, SortTask)();

#ifdef __cplusplus
}
#endif

#endif  // SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
