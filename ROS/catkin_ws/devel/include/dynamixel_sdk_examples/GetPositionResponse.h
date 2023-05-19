// Generated by gencpp from file dynamixel_sdk_examples/GetPositionResponse.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_SDK_EXAMPLES_MESSAGE_GETPOSITIONRESPONSE_H
#define DYNAMIXEL_SDK_EXAMPLES_MESSAGE_GETPOSITIONRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dynamixel_sdk_examples
{
template <class ContainerAllocator>
struct GetPositionResponse_
{
  typedef GetPositionResponse_<ContainerAllocator> Type;

  GetPositionResponse_()
    : position(0)  {
    }
  GetPositionResponse_(const ContainerAllocator& _alloc)
    : position(0)  {
  (void)_alloc;
    }



   typedef int32_t _position_type;
  _position_type position;





  typedef boost::shared_ptr< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetPositionResponse_

typedef ::dynamixel_sdk_examples::GetPositionResponse_<std::allocator<void> > GetPositionResponse;

typedef boost::shared_ptr< ::dynamixel_sdk_examples::GetPositionResponse > GetPositionResponsePtr;
typedef boost::shared_ptr< ::dynamixel_sdk_examples::GetPositionResponse const> GetPositionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator1> & lhs, const ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.position == rhs.position;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator1> & lhs, const ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dynamixel_sdk_examples

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ada70156e12e6e31948c64c60d8bb212";
  }

  static const char* value(const ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xada70156e12e6e31ULL;
  static const uint64_t static_value2 = 0x948c64c60d8bb212ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamixel_sdk_examples/GetPositionResponse";
  }

  static const char* value(const ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 position\n"
"\n"
;
  }

  static const char* value(const ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPositionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamixel_sdk_examples::GetPositionResponse_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    Printer<int32_t>::stream(s, indent + "  ", v.position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIXEL_SDK_EXAMPLES_MESSAGE_GETPOSITIONRESPONSE_H
