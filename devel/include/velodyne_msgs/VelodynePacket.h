// Generated by gencpp from file velodyne_msgs/VelodynePacket.msg
// DO NOT EDIT!


#ifndef VELODYNE_MSGS_MESSAGE_VELODYNEPACKET_H
#define VELODYNE_MSGS_MESSAGE_VELODYNEPACKET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace velodyne_msgs
{
template <class ContainerAllocator>
struct VelodynePacket_
{
  typedef VelodynePacket_<ContainerAllocator> Type;

  VelodynePacket_()
    : stamp()
    , data()  {
      data.assign(0);
  }
  VelodynePacket_(const ContainerAllocator& _alloc)
    : stamp()
    , data()  {
  (void)_alloc;
      data.assign(0);
  }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef boost::array<uint8_t, 1206>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> const> ConstPtr;

}; // struct VelodynePacket_

typedef ::velodyne_msgs::VelodynePacket_<std::allocator<void> > VelodynePacket;

typedef boost::shared_ptr< ::velodyne_msgs::VelodynePacket > VelodynePacketPtr;
typedef boost::shared_ptr< ::velodyne_msgs::VelodynePacket const> VelodynePacketConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::velodyne_msgs::VelodynePacket_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::velodyne_msgs::VelodynePacket_<ContainerAllocator1> & lhs, const ::velodyne_msgs::VelodynePacket_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::velodyne_msgs::VelodynePacket_<ContainerAllocator1> & lhs, const ::velodyne_msgs::VelodynePacket_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace velodyne_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ae4f90a23256f44e82baa08dd45c3456";
  }

  static const char* value(const ::velodyne_msgs::VelodynePacket_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xae4f90a23256f44eULL;
  static const uint64_t static_value2 = 0x82baa08dd45c3456ULL;
};

template<class ContainerAllocator>
struct DataType< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "velodyne_msgs/VelodynePacket";
  }

  static const char* value(const ::velodyne_msgs::VelodynePacket_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Raw Velodyne LIDAR packet.\n"
"\n"
"time stamp              # packet timestamp\n"
"uint8[1206] data        # packet contents\n"
"\n"
;
  }

  static const char* value(const ::velodyne_msgs::VelodynePacket_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VelodynePacket_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::velodyne_msgs::VelodynePacket_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::velodyne_msgs::VelodynePacket_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VELODYNE_MSGS_MESSAGE_VELODYNEPACKET_H
