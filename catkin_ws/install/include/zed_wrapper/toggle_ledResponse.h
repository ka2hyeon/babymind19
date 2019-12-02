// Generated by gencpp from file zed_wrapper/toggle_ledResponse.msg
// DO NOT EDIT!


#ifndef ZED_WRAPPER_MESSAGE_TOGGLE_LEDRESPONSE_H
#define ZED_WRAPPER_MESSAGE_TOGGLE_LEDRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace zed_wrapper
{
template <class ContainerAllocator>
struct toggle_ledResponse_
{
  typedef toggle_ledResponse_<ContainerAllocator> Type;

  toggle_ledResponse_()
    : new_led_status(false)  {
    }
  toggle_ledResponse_(const ContainerAllocator& _alloc)
    : new_led_status(false)  {
  (void)_alloc;
    }



   typedef uint8_t _new_led_status_type;
  _new_led_status_type new_led_status;





  typedef boost::shared_ptr< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> const> ConstPtr;

}; // struct toggle_ledResponse_

typedef ::zed_wrapper::toggle_ledResponse_<std::allocator<void> > toggle_ledResponse;

typedef boost::shared_ptr< ::zed_wrapper::toggle_ledResponse > toggle_ledResponsePtr;
typedef boost::shared_ptr< ::zed_wrapper::toggle_ledResponse const> toggle_ledResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace zed_wrapper

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': True, 'HasHeader': False}
// {}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "866beb482157f32341c9f0eac54a1e38";
  }

  static const char* value(const ::zed_wrapper::toggle_ledResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x866beb482157f323ULL;
  static const uint64_t static_value2 = 0x41c9f0eac54a1e38ULL;
};

template<class ContainerAllocator>
struct DataType< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zed_wrapper/toggle_ledResponse";
  }

  static const char* value(const ::zed_wrapper::toggle_ledResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool new_led_status\n"
"\n"
;
  }

  static const char* value(const ::zed_wrapper::toggle_ledResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.new_led_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct toggle_ledResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zed_wrapper::toggle_ledResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zed_wrapper::toggle_ledResponse_<ContainerAllocator>& v)
  {
    s << indent << "new_led_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.new_led_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZED_WRAPPER_MESSAGE_TOGGLE_LEDRESPONSE_H
