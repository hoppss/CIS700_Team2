// Generated by gencpp from file snap_vision_msgs/DetectionsStamped.msg
// DO NOT EDIT!


#ifndef SNAP_VISION_MSGS_MESSAGE_DETECTIONSSTAMPED_H
#define SNAP_VISION_MSGS_MESSAGE_DETECTIONSSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <snap_vision_msgs/Detection.h>

namespace snap_vision_msgs
{
template <class ContainerAllocator>
struct DetectionsStamped_
{
  typedef DetectionsStamped_<ContainerAllocator> Type;

  DetectionsStamped_()
    : header()
    , detections()  {
    }
  DetectionsStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , detections(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::snap_vision_msgs::Detection_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::snap_vision_msgs::Detection_<ContainerAllocator> >::other >  _detections_type;
  _detections_type detections;




  typedef boost::shared_ptr< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> const> ConstPtr;

}; // struct DetectionsStamped_

typedef ::snap_vision_msgs::DetectionsStamped_<std::allocator<void> > DetectionsStamped;

typedef boost::shared_ptr< ::snap_vision_msgs::DetectionsStamped > DetectionsStampedPtr;
typedef boost::shared_ptr< ::snap_vision_msgs::DetectionsStamped const> DetectionsStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace snap_vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'snap_vision_msgs': ['/home/genesis/code/ROS/catkin_ws/src/snap_vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a51185277c0105cae82104e7b230d2a6";
  }

  static const char* value(const ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa51185277c0105caULL;
  static const uint64_t static_value2 = 0xe82104e7b230d2a6ULL;
};

template<class ContainerAllocator>
struct DataType< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "snap_vision_msgs/DetectionsStamped";
  }

  static const char* value(const ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
Detection[] detections\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: snap_vision_msgs/Detection\n\
string label\n\
BoundingBox bbox\n\
float32 confidence\n\
\n\
================================================================================\n\
MSG: snap_vision_msgs/BoundingBox\n\
float32 x\n\
float32 y\n\
float32 width\n\
float32 height\n\
";
  }

  static const char* value(const ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.detections);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct DetectionsStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::snap_vision_msgs::DetectionsStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::snap_vision_msgs::Detection_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SNAP_VISION_MSGS_MESSAGE_DETECTIONSSTAMPED_H
