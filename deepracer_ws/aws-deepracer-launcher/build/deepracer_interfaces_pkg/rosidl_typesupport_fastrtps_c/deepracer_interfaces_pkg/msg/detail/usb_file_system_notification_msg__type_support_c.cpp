// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deepracer_interfaces_pkg:msg/USBFileSystemNotificationMsg.idl
// generated code does not contain a copyright notice
#include "deepracer_interfaces_pkg/msg/detail/usb_file_system_notification_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deepracer_interfaces_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deepracer_interfaces_pkg/msg/detail/usb_file_system_notification_msg__struct.h"
#include "deepracer_interfaces_pkg/msg/detail/usb_file_system_notification_msg__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // callback_name, file_name, node_name, path
#include "rosidl_runtime_c/string_functions.h"  // callback_name, file_name, node_name, path

// forward declare type support functions


using _USBFileSystemNotificationMsg__ros_msg_type = deepracer_interfaces_pkg__msg__USBFileSystemNotificationMsg;

static bool _USBFileSystemNotificationMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _USBFileSystemNotificationMsg__ros_msg_type * ros_message = static_cast<const _USBFileSystemNotificationMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: path
  {
    const rosidl_runtime_c__String * str = &ros_message->path;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: file_name
  {
    const rosidl_runtime_c__String * str = &ros_message->file_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: callback_name
  {
    const rosidl_runtime_c__String * str = &ros_message->callback_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: node_name
  {
    const rosidl_runtime_c__String * str = &ros_message->node_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _USBFileSystemNotificationMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _USBFileSystemNotificationMsg__ros_msg_type * ros_message = static_cast<_USBFileSystemNotificationMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: path
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->path.data) {
      rosidl_runtime_c__String__init(&ros_message->path);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->path,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'path'\n");
      return false;
    }
  }

  // Field name: file_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->file_name.data) {
      rosidl_runtime_c__String__init(&ros_message->file_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->file_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'file_name'\n");
      return false;
    }
  }

  // Field name: callback_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->callback_name.data) {
      rosidl_runtime_c__String__init(&ros_message->callback_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->callback_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'callback_name'\n");
      return false;
    }
  }

  // Field name: node_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->node_name.data) {
      rosidl_runtime_c__String__init(&ros_message->node_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->node_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'node_name'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t get_serialized_size_deepracer_interfaces_pkg__msg__USBFileSystemNotificationMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _USBFileSystemNotificationMsg__ros_msg_type * ros_message = static_cast<const _USBFileSystemNotificationMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->path.size + 1);
  // field.name file_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->file_name.size + 1);
  // field.name callback_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->callback_name.size + 1);
  // field.name node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->node_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _USBFileSystemNotificationMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deepracer_interfaces_pkg__msg__USBFileSystemNotificationMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deepracer_interfaces_pkg
size_t max_serialized_size_deepracer_interfaces_pkg__msg__USBFileSystemNotificationMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: path
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: file_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: callback_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: node_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _USBFileSystemNotificationMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deepracer_interfaces_pkg__msg__USBFileSystemNotificationMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_USBFileSystemNotificationMsg = {
  "deepracer_interfaces_pkg::msg",
  "USBFileSystemNotificationMsg",
  _USBFileSystemNotificationMsg__cdr_serialize,
  _USBFileSystemNotificationMsg__cdr_deserialize,
  _USBFileSystemNotificationMsg__get_serialized_size,
  _USBFileSystemNotificationMsg__max_serialized_size
};

static rosidl_message_type_support_t _USBFileSystemNotificationMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_USBFileSystemNotificationMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deepracer_interfaces_pkg, msg, USBFileSystemNotificationMsg)() {
  return &_USBFileSystemNotificationMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
