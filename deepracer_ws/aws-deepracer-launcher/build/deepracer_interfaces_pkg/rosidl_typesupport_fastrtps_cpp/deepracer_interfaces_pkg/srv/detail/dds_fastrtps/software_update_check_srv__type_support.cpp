// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deepracer_interfaces_pkg:srv/SoftwareUpdateCheckSrv.idl
// generated code does not contain a copyright notice
#include "deepracer_interfaces_pkg/srv/detail/software_update_check_srv__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deepracer_interfaces_pkg/srv/detail/software_update_check_srv__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace deepracer_interfaces_pkg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deepracer_interfaces_pkg
cdr_serialize(
  const deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: force_update_check
  cdr << ros_message.force_update_check;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deepracer_interfaces_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Request & ros_message)
{
  // Member: force_update_check
  cdr >> ros_message.force_update_check;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deepracer_interfaces_pkg
get_serialized_size(
  const deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: force_update_check
  {
    size_t item_size = sizeof(ros_message.force_update_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deepracer_interfaces_pkg
max_serialized_size_SoftwareUpdateCheckSrv_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: force_update_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SoftwareUpdateCheckSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SoftwareUpdateCheckSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SoftwareUpdateCheckSrv_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SoftwareUpdateCheckSrv_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SoftwareUpdateCheckSrv_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _SoftwareUpdateCheckSrv_Request__callbacks = {
  "deepracer_interfaces_pkg::srv",
  "SoftwareUpdateCheckSrv_Request",
  _SoftwareUpdateCheckSrv_Request__cdr_serialize,
  _SoftwareUpdateCheckSrv_Request__cdr_deserialize,
  _SoftwareUpdateCheckSrv_Request__get_serialized_size,
  _SoftwareUpdateCheckSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _SoftwareUpdateCheckSrv_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SoftwareUpdateCheckSrv_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace deepracer_interfaces_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deepracer_interfaces_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Request>()
{
  return &deepracer_interfaces_pkg::srv::typesupport_fastrtps_cpp::_SoftwareUpdateCheckSrv_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deepracer_interfaces_pkg, srv, SoftwareUpdateCheckSrv_Request)() {
  return &deepracer_interfaces_pkg::srv::typesupport_fastrtps_cpp::_SoftwareUpdateCheckSrv_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace deepracer_interfaces_pkg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deepracer_interfaces_pkg
cdr_serialize(
  const deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: software_update_state
  cdr << ros_message.software_update_state;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deepracer_interfaces_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Response & ros_message)
{
  // Member: software_update_state
  cdr >> ros_message.software_update_state;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deepracer_interfaces_pkg
get_serialized_size(
  const deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: software_update_state
  {
    size_t item_size = sizeof(ros_message.software_update_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deepracer_interfaces_pkg
max_serialized_size_SoftwareUpdateCheckSrv_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: software_update_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SoftwareUpdateCheckSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SoftwareUpdateCheckSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SoftwareUpdateCheckSrv_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SoftwareUpdateCheckSrv_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SoftwareUpdateCheckSrv_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _SoftwareUpdateCheckSrv_Response__callbacks = {
  "deepracer_interfaces_pkg::srv",
  "SoftwareUpdateCheckSrv_Response",
  _SoftwareUpdateCheckSrv_Response__cdr_serialize,
  _SoftwareUpdateCheckSrv_Response__cdr_deserialize,
  _SoftwareUpdateCheckSrv_Response__get_serialized_size,
  _SoftwareUpdateCheckSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _SoftwareUpdateCheckSrv_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SoftwareUpdateCheckSrv_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace deepracer_interfaces_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deepracer_interfaces_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv_Response>()
{
  return &deepracer_interfaces_pkg::srv::typesupport_fastrtps_cpp::_SoftwareUpdateCheckSrv_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deepracer_interfaces_pkg, srv, SoftwareUpdateCheckSrv_Response)() {
  return &deepracer_interfaces_pkg::srv::typesupport_fastrtps_cpp::_SoftwareUpdateCheckSrv_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace deepracer_interfaces_pkg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SoftwareUpdateCheckSrv__callbacks = {
  "deepracer_interfaces_pkg::srv",
  "SoftwareUpdateCheckSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deepracer_interfaces_pkg, srv, SoftwareUpdateCheckSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deepracer_interfaces_pkg, srv, SoftwareUpdateCheckSrv_Response)(),
};

static rosidl_service_type_support_t _SoftwareUpdateCheckSrv__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SoftwareUpdateCheckSrv__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace deepracer_interfaces_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deepracer_interfaces_pkg
const rosidl_service_type_support_t *
get_service_type_support_handle<deepracer_interfaces_pkg::srv::SoftwareUpdateCheckSrv>()
{
  return &deepracer_interfaces_pkg::srv::typesupport_fastrtps_cpp::_SoftwareUpdateCheckSrv__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deepracer_interfaces_pkg, srv, SoftwareUpdateCheckSrv)() {
  return &deepracer_interfaces_pkg::srv::typesupport_fastrtps_cpp::_SoftwareUpdateCheckSrv__handle;
}

#ifdef __cplusplus
}
#endif
