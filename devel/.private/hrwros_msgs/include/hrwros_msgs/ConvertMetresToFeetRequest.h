// Generated by gencpp from file hrwros_msgs/ConvertMetresToFeetRequest.msg
// DO NOT EDIT!


#ifndef HRWROS_MSGS_MESSAGE_CONVERTMETRESTOFEETREQUEST_H
#define HRWROS_MSGS_MESSAGE_CONVERTMETRESTOFEETREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hrwros_msgs
{
template <class ContainerAllocator>
struct ConvertMetresToFeetRequest_
{
  typedef ConvertMetresToFeetRequest_<ContainerAllocator> Type;

  ConvertMetresToFeetRequest_()
    : distance_metres(0.0)  {
    }
  ConvertMetresToFeetRequest_(const ContainerAllocator& _alloc)
    : distance_metres(0.0)  {
  (void)_alloc;
    }



   typedef double _distance_metres_type;
  _distance_metres_type distance_metres;





  typedef boost::shared_ptr< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ConvertMetresToFeetRequest_

typedef ::hrwros_msgs::ConvertMetresToFeetRequest_<std::allocator<void> > ConvertMetresToFeetRequest;

typedef boost::shared_ptr< ::hrwros_msgs::ConvertMetresToFeetRequest > ConvertMetresToFeetRequestPtr;
typedef boost::shared_ptr< ::hrwros_msgs::ConvertMetresToFeetRequest const> ConvertMetresToFeetRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator1> & lhs, const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator2> & rhs)
{
  return lhs.distance_metres == rhs.distance_metres;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator1> & lhs, const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hrwros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9cae22e6f10f281a58edfb02da2709c6";
  }

  static const char* value(const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9cae22e6f10f281aULL;
  static const uint64_t static_value2 = 0x58edfb02da2709c6ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_msgs/ConvertMetresToFeetRequest";
  }

  static const char* value(const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 distance_metres		# Request message: Distance in (m) to be converted to feet.\n"
;
  }

  static const char* value(const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance_metres);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConvertMetresToFeetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator>& v)
  {
    s << indent << "distance_metres: ";
    Printer<double>::stream(s, indent + "  ", v.distance_metres);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_MSGS_MESSAGE_CONVERTMETRESTOFEETREQUEST_H
