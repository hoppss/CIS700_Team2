// Generated by gencpp from file snap_vision_msgs/ModelsRequest.msg
// DO NOT EDIT!


#ifndef SNAP_VISION_MSGS_MESSAGE_MODELSREQUEST_H
#define SNAP_VISION_MSGS_MESSAGE_MODELSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace snap_vision_msgs
{
template <class ContainerAllocator>
struct ModelsRequest_
{
  typedef ModelsRequest_<ContainerAllocator> Type;

  ModelsRequest_()
    : model_names()  {
    }
  ModelsRequest_(const ContainerAllocator& _alloc)
    : model_names(_alloc)  {
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _model_names_type;
  _model_names_type model_names;


    static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ALL;
 

  typedef boost::shared_ptr< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ModelsRequest_

typedef ::snap_vision_msgs::ModelsRequest_<std::allocator<void> > ModelsRequest;

typedef boost::shared_ptr< ::snap_vision_msgs::ModelsRequest > ModelsRequestPtr;
typedef boost::shared_ptr< ::snap_vision_msgs::ModelsRequest const> ModelsRequestConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ModelsRequest_<ContainerAllocator>::ALL =
        
          "__ALL_MODELS__"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace snap_vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'snap_vision_msgs': ['/home/genesis/code/ROS/catkin_ws/src/snap_vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a257402c5529ace54928a706e5d4167c";
  }

  static const char* value(const ::snap_vision_msgs::ModelsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa257402c5529ace5ULL;
  static const uint64_t static_value2 = 0x4928a706e5d4167cULL;
};

template<class ContainerAllocator>
struct DataType< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "snap_vision_msgs/ModelsRequest";
  }

  static const char* value(const ::snap_vision_msgs::ModelsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string ALL = __ALL_MODELS__\n\
\n\
string[] model_names\n\
";
  }

  static const char* value(const ::snap_vision_msgs::ModelsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_names);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ModelsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::snap_vision_msgs::ModelsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::snap_vision_msgs::ModelsRequest_<ContainerAllocator>& v)
  {
    s << indent << "model_names[]" << std::endl;
    for (size_t i = 0; i < v.model_names.size(); ++i)
    {
      s << indent << "  model_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.model_names[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SNAP_VISION_MSGS_MESSAGE_MODELSREQUEST_H