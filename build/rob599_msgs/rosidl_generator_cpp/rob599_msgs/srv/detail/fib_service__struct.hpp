// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rob599_msgs:srv/FibService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rob599_msgs/srv/fib_service.hpp"


#ifndef ROB599_MSGS__SRV__DETAIL__FIB_SERVICE__STRUCT_HPP_
#define ROB599_MSGS__SRV__DETAIL__FIB_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rob599_msgs__srv__FibService_Request __attribute__((deprecated))
#else
# define DEPRECATED__rob599_msgs__srv__FibService_Request __declspec(deprecated)
#endif

namespace rob599_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FibService_Request_
{
  using Type = FibService_Request_<ContainerAllocator>;

  explicit FibService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number = 0ll;
    }
  }

  explicit FibService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number = 0ll;
    }
  }

  // field types and members
  using _number_type =
    int64_t;
  _number_type number;

  // setters for named parameter idiom
  Type & set__number(
    const int64_t & _arg)
  {
    this->number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_msgs::srv::FibService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_msgs::srv::FibService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_msgs::srv::FibService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_msgs::srv::FibService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_msgs::srv::FibService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_msgs::srv::FibService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_msgs::srv::FibService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_msgs::srv::FibService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_msgs::srv::FibService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_msgs::srv::FibService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_msgs__srv__FibService_Request
    std::shared_ptr<rob599_msgs::srv::FibService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_msgs__srv__FibService_Request
    std::shared_ptr<rob599_msgs::srv::FibService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FibService_Request_ & other) const
  {
    if (this->number != other.number) {
      return false;
    }
    return true;
  }
  bool operator!=(const FibService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FibService_Request_

// alias to use template instance with default allocator
using FibService_Request =
  rob599_msgs::srv::FibService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rob599_msgs


#ifndef _WIN32
# define DEPRECATED__rob599_msgs__srv__FibService_Response __attribute__((deprecated))
#else
# define DEPRECATED__rob599_msgs__srv__FibService_Response __declspec(deprecated)
#endif

namespace rob599_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FibService_Response_
{
  using Type = FibService_Response_<ContainerAllocator>;

  explicit FibService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fibonacci = 0ll;
    }
  }

  explicit FibService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fibonacci = 0ll;
    }
  }

  // field types and members
  using _fibonacci_type =
    int64_t;
  _fibonacci_type fibonacci;

  // setters for named parameter idiom
  Type & set__fibonacci(
    const int64_t & _arg)
  {
    this->fibonacci = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_msgs::srv::FibService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_msgs::srv::FibService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_msgs::srv::FibService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_msgs::srv::FibService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_msgs::srv::FibService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_msgs::srv::FibService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_msgs::srv::FibService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_msgs::srv::FibService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_msgs::srv::FibService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_msgs::srv::FibService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_msgs__srv__FibService_Response
    std::shared_ptr<rob599_msgs::srv::FibService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_msgs__srv__FibService_Response
    std::shared_ptr<rob599_msgs::srv::FibService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FibService_Response_ & other) const
  {
    if (this->fibonacci != other.fibonacci) {
      return false;
    }
    return true;
  }
  bool operator!=(const FibService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FibService_Response_

// alias to use template instance with default allocator
using FibService_Response =
  rob599_msgs::srv::FibService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rob599_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rob599_msgs__srv__FibService_Event __attribute__((deprecated))
#else
# define DEPRECATED__rob599_msgs__srv__FibService_Event __declspec(deprecated)
#endif

namespace rob599_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FibService_Event_
{
  using Type = FibService_Event_<ContainerAllocator>;

  explicit FibService_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit FibService_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<rob599_msgs::srv::FibService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rob599_msgs::srv::FibService_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<rob599_msgs::srv::FibService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rob599_msgs::srv::FibService_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<rob599_msgs::srv::FibService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rob599_msgs::srv::FibService_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<rob599_msgs::srv::FibService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rob599_msgs::srv::FibService_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_msgs::srv::FibService_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_msgs::srv::FibService_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_msgs::srv::FibService_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_msgs::srv::FibService_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_msgs::srv::FibService_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_msgs::srv::FibService_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_msgs::srv::FibService_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_msgs::srv::FibService_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_msgs::srv::FibService_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_msgs::srv::FibService_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_msgs__srv__FibService_Event
    std::shared_ptr<rob599_msgs::srv::FibService_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_msgs__srv__FibService_Event
    std::shared_ptr<rob599_msgs::srv::FibService_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FibService_Event_ & other) const
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
  bool operator!=(const FibService_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FibService_Event_

// alias to use template instance with default allocator
using FibService_Event =
  rob599_msgs::srv::FibService_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rob599_msgs

namespace rob599_msgs
{

namespace srv
{

struct FibService
{
  using Request = rob599_msgs::srv::FibService_Request;
  using Response = rob599_msgs::srv::FibService_Response;
  using Event = rob599_msgs::srv::FibService_Event;
};

}  // namespace srv

}  // namespace rob599_msgs

#endif  // ROB599_MSGS__SRV__DETAIL__FIB_SERVICE__STRUCT_HPP_
