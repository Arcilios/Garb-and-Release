// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sorting_interfaces:msg/DetectedObjectArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sorting_interfaces/msg/detail/detected_object_array__rosidl_typesupport_introspection_c.h"
#include "sorting_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sorting_interfaces/msg/detail/detected_object_array__functions.h"
#include "sorting_interfaces/msg/detail/detected_object_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "sorting_interfaces/msg/detected_object.h"
// Member `objects`
#include "sorting_interfaces/msg/detail/detected_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sorting_interfaces__msg__DetectedObjectArray__init(message_memory);
}

void sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_fini_function(void * message_memory)
{
  sorting_interfaces__msg__DetectedObjectArray__fini(message_memory);
}

size_t sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__size_function__DetectedObjectArray__objects(
  const void * untyped_member)
{
  const sorting_interfaces__msg__DetectedObject__Sequence * member =
    (const sorting_interfaces__msg__DetectedObject__Sequence *)(untyped_member);
  return member->size;
}

const void * sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__get_const_function__DetectedObjectArray__objects(
  const void * untyped_member, size_t index)
{
  const sorting_interfaces__msg__DetectedObject__Sequence * member =
    (const sorting_interfaces__msg__DetectedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__get_function__DetectedObjectArray__objects(
  void * untyped_member, size_t index)
{
  sorting_interfaces__msg__DetectedObject__Sequence * member =
    (sorting_interfaces__msg__DetectedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__fetch_function__DetectedObjectArray__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sorting_interfaces__msg__DetectedObject * item =
    ((const sorting_interfaces__msg__DetectedObject *)
    sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__get_const_function__DetectedObjectArray__objects(untyped_member, index));
  sorting_interfaces__msg__DetectedObject * value =
    (sorting_interfaces__msg__DetectedObject *)(untyped_value);
  *value = *item;
}

void sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__assign_function__DetectedObjectArray__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sorting_interfaces__msg__DetectedObject * item =
    ((sorting_interfaces__msg__DetectedObject *)
    sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__get_function__DetectedObjectArray__objects(untyped_member, index));
  const sorting_interfaces__msg__DetectedObject * value =
    (const sorting_interfaces__msg__DetectedObject *)(untyped_value);
  *item = *value;
}

bool sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__resize_function__DetectedObjectArray__objects(
  void * untyped_member, size_t size)
{
  sorting_interfaces__msg__DetectedObject__Sequence * member =
    (sorting_interfaces__msg__DetectedObject__Sequence *)(untyped_member);
  sorting_interfaces__msg__DetectedObject__Sequence__fini(member);
  return sorting_interfaces__msg__DetectedObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces__msg__DetectedObjectArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces__msg__DetectedObjectArray, objects),  // bytes offset in struct
    NULL,  // default value
    sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__size_function__DetectedObjectArray__objects,  // size() function pointer
    sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__get_const_function__DetectedObjectArray__objects,  // get_const(index) function pointer
    sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__get_function__DetectedObjectArray__objects,  // get(index) function pointer
    sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__fetch_function__DetectedObjectArray__objects,  // fetch(index, &value) function pointer
    sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__assign_function__DetectedObjectArray__objects,  // assign(index, value) function pointer
    sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__resize_function__DetectedObjectArray__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_message_members = {
  "sorting_interfaces__msg",  // message namespace
  "DetectedObjectArray",  // message name
  2,  // number of fields
  sizeof(sorting_interfaces__msg__DetectedObjectArray),
  false,  // has_any_key_member_
  sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_message_member_array,  // message members
  sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_init_function,  // function to initialize message memory (memory has to be allocated)
  sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_message_type_support_handle = {
  0,
  &sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_message_members,
  get_message_typesupport_handle_function,
  &sorting_interfaces__msg__DetectedObjectArray__get_type_hash,
  &sorting_interfaces__msg__DetectedObjectArray__get_type_description,
  &sorting_interfaces__msg__DetectedObjectArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sorting_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sorting_interfaces, msg, DetectedObjectArray)() {
  sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sorting_interfaces, msg, DetectedObject)();
  if (!sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_message_type_support_handle.typesupport_identifier) {
    sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sorting_interfaces__msg__DetectedObjectArray__rosidl_typesupport_introspection_c__DetectedObjectArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
