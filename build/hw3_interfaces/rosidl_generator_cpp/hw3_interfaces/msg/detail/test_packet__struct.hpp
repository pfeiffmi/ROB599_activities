// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hw3_interfaces:msg/TestPacket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hw3_interfaces/msg/test_packet.hpp"


#ifndef HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__STRUCT_HPP_
#define HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hw3_interfaces__msg__TestPacket __attribute__((deprecated))
#else
# define DEPRECATED__hw3_interfaces__msg__TestPacket __declspec(deprecated)
#endif

namespace hw3_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestPacket_
{
  using Type = TestPacket_<ContainerAllocator>;

  explicit TestPacket_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->send_time = 0ull;
    }
  }

  explicit TestPacket_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->send_time = 0ull;
    }
  }

  // field types and members
  using _send_time_type =
    uint64_t;
  _send_time_type send_time;
  using _payload_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _payload_type payload;

  // setters for named parameter idiom
  Type & set__send_time(
    const uint64_t & _arg)
  {
    this->send_time = _arg;
    return *this;
  }
  Type & set__payload(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->payload = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hw3_interfaces::msg::TestPacket_<ContainerAllocator> *;
  using ConstRawPtr =
    const hw3_interfaces::msg::TestPacket_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hw3_interfaces::msg::TestPacket_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hw3_interfaces::msg::TestPacket_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hw3_interfaces::msg::TestPacket_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hw3_interfaces::msg::TestPacket_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hw3_interfaces::msg::TestPacket_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hw3_interfaces::msg::TestPacket_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hw3_interfaces::msg::TestPacket_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hw3_interfaces::msg::TestPacket_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hw3_interfaces__msg__TestPacket
    std::shared_ptr<hw3_interfaces::msg::TestPacket_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hw3_interfaces__msg__TestPacket
    std::shared_ptr<hw3_interfaces::msg::TestPacket_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestPacket_ & other) const
  {
    if (this->send_time != other.send_time) {
      return false;
    }
    if (this->payload != other.payload) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestPacket_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestPacket_

// alias to use template instance with default allocator
using TestPacket =
  hw3_interfaces::msg::TestPacket_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hw3_interfaces

#endif  // HW3_INTERFACES__MSG__DETAIL__TEST_PACKET__STRUCT_HPP_
