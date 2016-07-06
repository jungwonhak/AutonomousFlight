// Generated by gencpp from file mavros_msgs/FileEntry.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_FILEENTRY_H
#define MAVROS_MSGS_MESSAGE_FILEENTRY_H


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
struct FileEntry_
{
  typedef FileEntry_<ContainerAllocator> Type;

  FileEntry_()
    : name()
    , type(0)
    , size(0)  {
    }
  FileEntry_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , type(0)
    , size(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef uint8_t _type_type;
  _type_type type;

   typedef uint64_t _size_type;
  _size_type size;


    enum { TYPE_FILE = 0u };
     enum { TYPE_DIRECTORY = 1u };
 

  typedef boost::shared_ptr< ::mavros_msgs::FileEntry_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::FileEntry_<ContainerAllocator> const> ConstPtr;

}; // struct FileEntry_

typedef ::mavros_msgs::FileEntry_<std::allocator<void> > FileEntry;

typedef boost::shared_ptr< ::mavros_msgs::FileEntry > FileEntryPtr;
typedef boost::shared_ptr< ::mavros_msgs::FileEntry const> FileEntryConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::FileEntry_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::FileEntry_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'mavros_msgs': ['/home/spacecat/AutonomousFlight/AutonomousFlight/catkin_ws/src/mavros/mavros_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileEntry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileEntry_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileEntry_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileEntry_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileEntry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileEntry_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::FileEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5ed706bccb946c5b3a5087569cc53ac3";
  }

  static const char* value(const ::mavros_msgs::FileEntry_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5ed706bccb946c5bULL;
  static const uint64_t static_value2 = 0x3a5087569cc53ac3ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::FileEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/FileEntry";
  }

  static const char* value(const ::mavros_msgs::FileEntry_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::FileEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# File/Dir information\n\
\n\
uint8 TYPE_FILE = 0\n\
uint8 TYPE_DIRECTORY = 1\n\
\n\
string name\n\
uint8 type\n\
uint64 size\n\
\n\
# Not supported by MAVLink FTP\n\
#time atime\n\
#int32 access_flags\n\
";
  }

  static const char* value(const ::mavros_msgs::FileEntry_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::FileEntry_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.type);
      stream.next(m.size);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct FileEntry_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::FileEntry_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::FileEntry_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "size: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.size);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_FILEENTRY_H
