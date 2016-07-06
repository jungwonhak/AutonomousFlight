// Generated by gencpp from file mavros_msgs/CommandBoolRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_COMMANDBOOLREQUEST_H
#define MAVROS_MSGS_MESSAGE_COMMANDBOOLREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct CommandBoolRequest_
{
  typedef CommandBoolRequest_<ContainerAllocator> Type;

  CommandBoolRequest_()
    : value(false)  {
    }
  CommandBoolRequest_(const ContainerAllocator& _alloc)
    : value(false)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;




  typedef boost::shared_ptr< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CommandBoolRequest_

typedef ::mavros_msgs::CommandBoolRequest_<std::allocator<void> > CommandBoolRequest;

typedef boost::shared_ptr< ::mavros_msgs::CommandBoolRequest > CommandBoolRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::CommandBoolRequest const> CommandBoolRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'mavros_msgs': ['/home/spacecat/AutonomousFlight/AutonomousFlight/catkin_ws/src/mavros/mavros_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e431d687bf4b2c65fbd94b12ae0cb5d9";
  }

  static const char* value(const ::mavros_msgs::CommandBoolRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe431d687bf4b2c65ULL;
  static const uint64_t static_value2 = 0xfbd94b12ae0cb5d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/CommandBoolRequest";
  }

  static const char* value(const ::mavros_msgs::CommandBoolRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
bool value\n\
";
  }

  static const char* value(const ::mavros_msgs::CommandBoolRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct CommandBoolRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::CommandBoolRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::CommandBoolRequest_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_COMMANDBOOLREQUEST_H
