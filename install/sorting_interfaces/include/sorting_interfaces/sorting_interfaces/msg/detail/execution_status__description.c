// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sorting_interfaces:msg/ExecutionStatus.idl
// generated code does not contain a copyright notice

#include "sorting_interfaces/msg/detail/execution_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sorting_interfaces
const rosidl_type_hash_t *
sorting_interfaces__msg__ExecutionStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0x6e, 0xef, 0xc3, 0xb3, 0xe9, 0x36, 0x12,
      0x94, 0xcc, 0x5a, 0x4d, 0x80, 0x85, 0x2e, 0x5b,
      0x09, 0x7a, 0xca, 0x35, 0xc2, 0x11, 0x6a, 0x37,
      0x77, 0xc0, 0xb7, 0xec, 0x2e, 0x43, 0x64, 0x8d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sorting_interfaces__msg__ExecutionStatus__TYPE_NAME[] = "sorting_interfaces/msg/ExecutionStatus";

// Define type names, field names, and default values
static char sorting_interfaces__msg__ExecutionStatus__FIELD_NAME__object_id[] = "object_id";
static char sorting_interfaces__msg__ExecutionStatus__FIELD_NAME__stage[] = "stage";
static char sorting_interfaces__msg__ExecutionStatus__FIELD_NAME__success[] = "success";
static char sorting_interfaces__msg__ExecutionStatus__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field sorting_interfaces__msg__ExecutionStatus__FIELDS[] = {
  {
    {sorting_interfaces__msg__ExecutionStatus__FIELD_NAME__object_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sorting_interfaces__msg__ExecutionStatus__FIELD_NAME__stage, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sorting_interfaces__msg__ExecutionStatus__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sorting_interfaces__msg__ExecutionStatus__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sorting_interfaces__msg__ExecutionStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sorting_interfaces__msg__ExecutionStatus__TYPE_NAME, 38, 38},
      {sorting_interfaces__msg__ExecutionStatus__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string object_id\n"
  "string stage\n"
  "bool success\n"
  "string message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sorting_interfaces__msg__ExecutionStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sorting_interfaces__msg__ExecutionStatus__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 57, 57},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sorting_interfaces__msg__ExecutionStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sorting_interfaces__msg__ExecutionStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
