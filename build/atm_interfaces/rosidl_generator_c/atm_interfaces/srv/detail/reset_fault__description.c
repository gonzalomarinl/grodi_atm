// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from atm_interfaces:srv/ResetFault.idl
// generated code does not contain a copyright notice

#include "atm_interfaces/srv/detail/reset_fault__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_type_hash_t *
atm_interfaces__srv__ResetFault__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0x9a, 0xc0, 0x7b, 0xcf, 0x13, 0xa3, 0x3b,
      0x50, 0x5c, 0xdb, 0xf7, 0x55, 0xa7, 0xcd, 0x1b,
      0xc3, 0x57, 0x07, 0xa0, 0xa3, 0xaa, 0x77, 0xfe,
      0xd1, 0x8a, 0xfd, 0xd5, 0xee, 0x3b, 0xf7, 0x52,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_type_hash_t *
atm_interfaces__srv__ResetFault_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0x41, 0x87, 0x6a, 0x67, 0x7c, 0x29, 0x53,
      0x45, 0x38, 0x6b, 0x61, 0x25, 0xc2, 0xff, 0x97,
      0x29, 0x2d, 0x1c, 0x53, 0xa1, 0x9a, 0xf2, 0x77,
      0xcc, 0x1e, 0x48, 0xe0, 0xa2, 0xb1, 0x13, 0x62,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_type_hash_t *
atm_interfaces__srv__ResetFault_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0x06, 0xf0, 0x92, 0x9e, 0x30, 0xe5, 0x91,
      0x5b, 0xba, 0xd5, 0x15, 0x9d, 0xb7, 0x9c, 0xbb,
      0xe8, 0x9f, 0x58, 0x37, 0xce, 0x90, 0xae, 0x13,
      0x1a, 0x6c, 0xd8, 0xfc, 0xba, 0x43, 0xb0, 0x08,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_type_hash_t *
atm_interfaces__srv__ResetFault_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x8d, 0x86, 0x8d, 0x6c, 0x5f, 0x67, 0x87,
      0x5a, 0x8a, 0x28, 0x53, 0x28, 0x15, 0x9b, 0x70,
      0xf0, 0x86, 0x76, 0x07, 0xf7, 0x58, 0x7e, 0x71,
      0xee, 0x4b, 0xeb, 0xcc, 0xed, 0xa8, 0x6c, 0x09,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char atm_interfaces__srv__ResetFault__TYPE_NAME[] = "atm_interfaces/srv/ResetFault";
static char atm_interfaces__srv__ResetFault_Event__TYPE_NAME[] = "atm_interfaces/srv/ResetFault_Event";
static char atm_interfaces__srv__ResetFault_Request__TYPE_NAME[] = "atm_interfaces/srv/ResetFault_Request";
static char atm_interfaces__srv__ResetFault_Response__TYPE_NAME[] = "atm_interfaces/srv/ResetFault_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char atm_interfaces__srv__ResetFault__FIELD_NAME__request_message[] = "request_message";
static char atm_interfaces__srv__ResetFault__FIELD_NAME__response_message[] = "response_message";
static char atm_interfaces__srv__ResetFault__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field atm_interfaces__srv__ResetFault__FIELDS[] = {
  {
    {atm_interfaces__srv__ResetFault__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {atm_interfaces__srv__ResetFault_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__srv__ResetFault__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {atm_interfaces__srv__ResetFault_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__srv__ResetFault__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {atm_interfaces__srv__ResetFault_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription atm_interfaces__srv__ResetFault__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {atm_interfaces__srv__ResetFault_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__srv__ResetFault_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__srv__ResetFault_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
atm_interfaces__srv__ResetFault__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {atm_interfaces__srv__ResetFault__TYPE_NAME, 29, 29},
      {atm_interfaces__srv__ResetFault__FIELDS, 3, 3},
    },
    {atm_interfaces__srv__ResetFault__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = atm_interfaces__srv__ResetFault_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = atm_interfaces__srv__ResetFault_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = atm_interfaces__srv__ResetFault_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char atm_interfaces__srv__ResetFault_Request__FIELD_NAME__source[] = "source";
static char atm_interfaces__srv__ResetFault_Request__FIELD_NAME__reason[] = "reason";

static rosidl_runtime_c__type_description__Field atm_interfaces__srv__ResetFault_Request__FIELDS[] = {
  {
    {atm_interfaces__srv__ResetFault_Request__FIELD_NAME__source, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__srv__ResetFault_Request__FIELD_NAME__reason, 6, 6},
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
atm_interfaces__srv__ResetFault_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {atm_interfaces__srv__ResetFault_Request__TYPE_NAME, 37, 37},
      {atm_interfaces__srv__ResetFault_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char atm_interfaces__srv__ResetFault_Response__FIELD_NAME__success[] = "success";
static char atm_interfaces__srv__ResetFault_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field atm_interfaces__srv__ResetFault_Response__FIELDS[] = {
  {
    {atm_interfaces__srv__ResetFault_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__srv__ResetFault_Response__FIELD_NAME__message, 7, 7},
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
atm_interfaces__srv__ResetFault_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {atm_interfaces__srv__ResetFault_Response__TYPE_NAME, 38, 38},
      {atm_interfaces__srv__ResetFault_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char atm_interfaces__srv__ResetFault_Event__FIELD_NAME__info[] = "info";
static char atm_interfaces__srv__ResetFault_Event__FIELD_NAME__request[] = "request";
static char atm_interfaces__srv__ResetFault_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field atm_interfaces__srv__ResetFault_Event__FIELDS[] = {
  {
    {atm_interfaces__srv__ResetFault_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__srv__ResetFault_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {atm_interfaces__srv__ResetFault_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__srv__ResetFault_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {atm_interfaces__srv__ResetFault_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription atm_interfaces__srv__ResetFault_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {atm_interfaces__srv__ResetFault_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__srv__ResetFault_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
atm_interfaces__srv__ResetFault_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {atm_interfaces__srv__ResetFault_Event__TYPE_NAME, 35, 35},
      {atm_interfaces__srv__ResetFault_Event__FIELDS, 3, 3},
    },
    {atm_interfaces__srv__ResetFault_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = atm_interfaces__srv__ResetFault_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = atm_interfaces__srv__ResetFault_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string source\n"
  "string reason\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
atm_interfaces__srv__ResetFault__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {atm_interfaces__srv__ResetFault__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 60, 60},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
atm_interfaces__srv__ResetFault_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {atm_interfaces__srv__ResetFault_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
atm_interfaces__srv__ResetFault_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {atm_interfaces__srv__ResetFault_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
atm_interfaces__srv__ResetFault_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {atm_interfaces__srv__ResetFault_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
atm_interfaces__srv__ResetFault__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *atm_interfaces__srv__ResetFault__get_individual_type_description_source(NULL),
    sources[1] = *atm_interfaces__srv__ResetFault_Event__get_individual_type_description_source(NULL);
    sources[2] = *atm_interfaces__srv__ResetFault_Request__get_individual_type_description_source(NULL);
    sources[3] = *atm_interfaces__srv__ResetFault_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
atm_interfaces__srv__ResetFault_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *atm_interfaces__srv__ResetFault_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
atm_interfaces__srv__ResetFault_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *atm_interfaces__srv__ResetFault_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
atm_interfaces__srv__ResetFault_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *atm_interfaces__srv__ResetFault_Event__get_individual_type_description_source(NULL),
    sources[1] = *atm_interfaces__srv__ResetFault_Request__get_individual_type_description_source(NULL);
    sources[2] = *atm_interfaces__srv__ResetFault_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
