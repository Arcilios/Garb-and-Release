// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sorting_interfaces:msg/SortTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sorting_interfaces/msg/detail/sort_task__rosidl_typesupport_introspection_c.h"
#include "sorting_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sorting_interfaces/msg/detail/sort_task__functions.h"
#include "sorting_interfaces/msg/detail/sort_task__struct.h"


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
#include "geometry_msgs/msg/pose_stamped.h"
// Member `pick_pose`
// Member `pregrasp_pose`
// Member `lift_pose`
// Member `place_pose`
// Member `retreat_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sorting_interfaces__msg__SortTask__init(message_memory);
}

void sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_fini_function(void * message_memory)
{
  sorting_interfaces__msg__SortTask__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_message_member_array[8] = {
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces__msg__SortTask, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces__msg__SortTask, class_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_bin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces__msg__SortTask, target_bin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pick_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces__msg__SortTask, pick_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pregrasp_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces__msg__SortTask, pregrasp_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lift_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces__msg__SortTask, lift_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "place_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces__msg__SortTask, place_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "retreat_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces__msg__SortTask, retreat_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_message_members = {
  "sorting_interfaces__msg",  // message namespace
  "SortTask",  // message name
  8,  // number of fields
  sizeof(sorting_interfaces__msg__SortTask),
  false,  // has_any_key_member_
  sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_message_member_array,  // message members
  sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_init_function,  // function to initialize message memory (memory has to be allocated)
  sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_message_type_support_handle = {
  0,
  &sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_message_members,
  get_message_typesupport_handle_function,
  &sorting_interfaces__msg__SortTask__get_type_hash,
  &sorting_interfaces__msg__SortTask__get_type_description,
  &sorting_interfaces__msg__SortTask__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sorting_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sorting_interfaces, msg, SortTask)() {
  sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_message_type_support_handle.typesupport_identifier) {
    sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sorting_interfaces__msg__SortTask__rosidl_typesupport_introspection_c__SortTask_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
