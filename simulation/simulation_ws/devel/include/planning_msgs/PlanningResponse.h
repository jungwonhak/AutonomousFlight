// Generated by gencpp from file planning_msgs/PlanningResponse.msg
// DO NOT EDIT!


#ifndef PLANNING_MSGS_MESSAGE_PLANNINGRESPONSE_H
#define PLANNING_MSGS_MESSAGE_PLANNINGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace planning_msgs
{
template <class ContainerAllocator>
struct PlanningResponse_
{
  typedef PlanningResponse_<ContainerAllocator> Type;

  PlanningResponse_()
    : path()
    , time()
    , number_primitives(0)
    , waypoint_type(0)  {
    }
  PlanningResponse_(const ContainerAllocator& _alloc)
    : path(_alloc)
    , time(_alloc)
    , number_primitives(0)
    , waypoint_type(0)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _path_type;
  _path_type path;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _time_type;
  _time_type time;

   typedef int32_t _number_primitives_type;
  _number_primitives_type number_primitives;

   typedef int32_t _waypoint_type_type;
  _waypoint_type_type waypoint_type;




  typedef boost::shared_ptr< ::planning_msgs::PlanningResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planning_msgs::PlanningResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PlanningResponse_

typedef ::planning_msgs::PlanningResponse_<std::allocator<void> > PlanningResponse;

typedef boost::shared_ptr< ::planning_msgs::PlanningResponse > PlanningResponsePtr;
typedef boost::shared_ptr< ::planning_msgs::PlanningResponse const> PlanningResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planning_msgs::PlanningResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planning_msgs::PlanningResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace planning_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'planning_msgs': ['/home/spacecat/AutonomousFlight/simulation/simulation_ws/src/mav_comm/planning_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/indigo/share/octomap_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::planning_msgs::PlanningResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planning_msgs::PlanningResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planning_msgs::PlanningResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planning_msgs::PlanningResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planning_msgs::PlanningResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planning_msgs::PlanningResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planning_msgs::PlanningResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cb7dd897470b7e4529896a33d9fa75c9";
  }

  static const char* value(const ::planning_msgs::PlanningResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcb7dd897470b7e45ULL;
  static const uint64_t static_value2 = 0x29896a33d9fa75c9ULL;
};

template<class ContainerAllocator>
struct DataType< ::planning_msgs::PlanningResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planning_msgs/PlanningResponse";
  }

  static const char* value(const ::planning_msgs::PlanningResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planning_msgs::PlanningResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] path # m x n matrix\n\
float64[] time # n vector with times\n\
int32 number_primitives  # = n\n\
int32 waypoint_type #polynom, pose etc.\n\
";
  }

  static const char* value(const ::planning_msgs::PlanningResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planning_msgs::PlanningResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.path);
      stream.next(m.time);
      stream.next(m.number_primitives);
      stream.next(m.waypoint_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanningResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planning_msgs::PlanningResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planning_msgs::PlanningResponse_<ContainerAllocator>& v)
  {
    s << indent << "path[]" << std::endl;
    for (size_t i = 0; i < v.path.size(); ++i)
    {
      s << indent << "  path[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.path[i]);
    }
    s << indent << "time[]" << std::endl;
    for (size_t i = 0; i < v.time.size(); ++i)
    {
      s << indent << "  time[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.time[i]);
    }
    s << indent << "number_primitives: ";
    Printer<int32_t>::stream(s, indent + "  ", v.number_primitives);
    s << indent << "waypoint_type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.waypoint_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNING_MSGS_MESSAGE_PLANNINGRESPONSE_H