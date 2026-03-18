// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sorting_interfaces:msg/ExecutionStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sorting_interfaces/msg/detail/execution_status__functions.h"
#include "sorting_interfaces/msg/detail/execution_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sorting_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecutionStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sorting_interfaces::msg::ExecutionStatus(_init);
}

void ExecutionStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sorting_interfaces::msg::ExecutionStatus *>(message_memory);
  typed_message->~ExecutionStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecutionStatus_message_member_array[4] = {
  {
    "object_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces::msg::ExecutionStatus, object_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces::msg::ExecutionStatus, stage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces::msg::ExecutionStatus, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sorting_interfaces::msg::ExecutionStatus, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecutionStatus_message_members = {
  "sorting_interfaces::msg",  // message namespace
  "ExecutionStatus",  // message name
  4,  // number of fields
  sizeof(sorting_interfaces::msg::ExecutionStatus),
  false,  // has_any_key_member_
  ExecutionStatus_message_member_array,  // message members
  ExecutionStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutionStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecutionStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutionStatus_message_members,
  get_message_typesupport_handle_function,
  &sorting_interfaces__msg__ExecutionStatus__get_type_hash,
  &sorting_interfaces__msg__ExecutionStatus__get_type_description,
  &sorting_interfaces__msg__ExecutionStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sorting_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sorting_interfaces::msg::ExecutionStatus>()
{
  return &::sorting_interfaces::msg::rosidl_typesupport_introspection_cpp::ExecutionStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sorting_interfaces, msg, ExecutionStatus)() {
  return &::sorting_interfaces::msg::rosidl_typesupport_introspection_cpp::ExecutionStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
