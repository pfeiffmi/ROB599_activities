// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hw3_interfaces:srv/SetStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw3_interfaces/srv/set_status.hpp"


#ifndef HW3_INTERFACES__SRV__DETAIL__SET_STATUS__STRUCT_HPP_
#define HW3_INTERFACES__SRV__DETAIL__SET_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hw3_interfaces__srv__SetStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__hw3_interfaces__srv__SetStatus_Request __declspec(deprecated)
#endif

namespace hw3_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStatus_Request_
{
  using Type = SetStatus_Request_<ContainerAllocator>;

  explicit SetStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  explicit SetStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  // field types and members
  using _data_type =
    bool;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hw3_interfaces__srv__SetStatus_Request
    std::shared_ptr<hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hw3_interfaces__srv__SetStatus_Request
    std::shared_ptr<hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStatus_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStatus_Request_

// alias to use template instance with default allocator
using SetStatus_Request =
  hw3_interfaces::srv::SetStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hw3_interfaces


#ifndef _WIN32
# define DEPRECATED__hw3_interfaces__srv__SetStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__hw3_interfaces__srv__SetStatus_Response __declspec(deprecated)
#endif

namespace hw3_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStatus_Response_
{
  using Type = SetStatus_Response_<ContainerAllocator>;

  explicit SetStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hw3_interfaces__srv__SetStatus_Response
    std::shared_ptr<hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hw3_interfaces__srv__SetStatus_Response
    std::shared_ptr<hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStatus_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStatus_Response_

// alias to use template instance with default allocator
using SetStatus_Response =
  hw3_interfaces::srv::SetStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hw3_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hw3_interfaces__srv__SetStatus_Event __attribute__((deprecated))
#else
# define DEPRECATED__hw3_interfaces__srv__SetStatus_Event __declspec(deprecated)
#endif

namespace hw3_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStatus_Event_
{
  using Type = SetStatus_Event_<ContainerAllocator>;

  explicit SetStatus_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetStatus_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hw3_interfaces::srv::SetStatus_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hw3_interfaces::srv::SetStatus_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hw3_interfaces::srv::SetStatus_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const hw3_interfaces::srv::SetStatus_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hw3_interfaces::srv::SetStatus_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hw3_interfaces::srv::SetStatus_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hw3_interfaces::srv::SetStatus_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hw3_interfaces::srv::SetStatus_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hw3_interfaces::srv::SetStatus_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hw3_interfaces::srv::SetStatus_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hw3_interfaces::srv::SetStatus_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hw3_interfaces::srv::SetStatus_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hw3_interfaces__srv__SetStatus_Event
    std::shared_ptr<hw3_interfaces::srv::SetStatus_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hw3_interfaces__srv__SetStatus_Event
    std::shared_ptr<hw3_interfaces::srv::SetStatus_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStatus_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStatus_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStatus_Event_

// alias to use template instance with default allocator
using SetStatus_Event =
  hw3_interfaces::srv::SetStatus_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hw3_interfaces

namespace hw3_interfaces
{

namespace srv
{

struct SetStatus
{
  using Request = hw3_interfaces::srv::SetStatus_Request;
  using Response = hw3_interfaces::srv::SetStatus_Response;
  using Event = hw3_interfaces::srv::SetStatus_Event;
};

}  // namespace srv

}  // namespace hw3_interfaces

#endif  // HW3_INTERFACES__SRV__DETAIL__SET_STATUS__STRUCT_HPP_
