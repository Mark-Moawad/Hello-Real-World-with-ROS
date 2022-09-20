// Generated by gencpp from file hrwros_gazebo/LogicalCameraImage.msg
// DO NOT EDIT!


#ifndef HRWROS_GAZEBO_MESSAGE_LOGICALCAMERAIMAGE_H
#define HRWROS_GAZEBO_MESSAGE_LOGICALCAMERAIMAGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <hrwros_gazebo/Model.h>
#include <geometry_msgs/Pose.h>

namespace hrwros_gazebo
{
template <class ContainerAllocator>
struct LogicalCameraImage_
{
  typedef LogicalCameraImage_<ContainerAllocator> Type;

  LogicalCameraImage_()
    : models()
    , pose()  {
    }
  LogicalCameraImage_(const ContainerAllocator& _alloc)
    : models(_alloc)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::hrwros_gazebo::Model_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::hrwros_gazebo::Model_<ContainerAllocator> >::other >  _models_type;
  _models_type models;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> const> ConstPtr;

}; // struct LogicalCameraImage_

typedef ::hrwros_gazebo::LogicalCameraImage_<std::allocator<void> > LogicalCameraImage;

typedef boost::shared_ptr< ::hrwros_gazebo::LogicalCameraImage > LogicalCameraImagePtr;
typedef boost::shared_ptr< ::hrwros_gazebo::LogicalCameraImage const> LogicalCameraImageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator1> & lhs, const ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator2> & rhs)
{
  return lhs.models == rhs.models &&
    lhs.pose == rhs.pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator1> & lhs, const ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hrwros_gazebo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8d82d9667c3484c611dd31e2f750668a";
  }

  static const char* value(const ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8d82d9667c3484c6ULL;
  static const uint64_t static_value2 = 0x11dd31e2f750668aULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_gazebo/LogicalCameraImage";
  }

  static const char* value(const ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Logical camera image message\n"
"Model[] models                  # models detected (poses in the frame of the camera)\n"
"geometry_msgs/Pose pose         # camera pose\n"
"\n"
"================================================================================\n"
"MSG: hrwros_gazebo/Model\n"
"string type                     # model type\n"
"geometry_msgs/Pose pose         # model pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.models);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LogicalCameraImage_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_gazebo::LogicalCameraImage_<ContainerAllocator>& v)
  {
    s << indent << "models[]" << std::endl;
    for (size_t i = 0; i < v.models.size(); ++i)
    {
      s << indent << "  models[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::hrwros_gazebo::Model_<ContainerAllocator> >::stream(s, indent + "    ", v.models[i]);
    }
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_GAZEBO_MESSAGE_LOGICALCAMERAIMAGE_H
