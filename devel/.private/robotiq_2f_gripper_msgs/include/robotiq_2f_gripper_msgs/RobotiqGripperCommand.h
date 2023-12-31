// Generated by gencpp from file robotiq_2f_gripper_msgs/RobotiqGripperCommand.msg
// DO NOT EDIT!


#ifndef ROBOTIQ_2F_GRIPPER_MSGS_MESSAGE_ROBOTIQGRIPPERCOMMAND_H
#define ROBOTIQ_2F_GRIPPER_MSGS_MESSAGE_ROBOTIQGRIPPERCOMMAND_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotiq_2f_gripper_msgs
{
template <class ContainerAllocator>
struct RobotiqGripperCommand_
{
  typedef RobotiqGripperCommand_<ContainerAllocator> Type;

  RobotiqGripperCommand_()
    : emergency_release(false)
    , emergency_release_dir(0)
    , stop(false)
    , position(0.0)
    , speed(0.0)
    , force(0.0)  {
    }
  RobotiqGripperCommand_(const ContainerAllocator& _alloc)
    : emergency_release(false)
    , emergency_release_dir(0)
    , stop(false)
    , position(0.0)
    , speed(0.0)
    , force(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _emergency_release_type;
  _emergency_release_type emergency_release;

   typedef uint32_t _emergency_release_dir_type;
  _emergency_release_dir_type emergency_release_dir;

   typedef uint8_t _stop_type;
  _stop_type stop;

   typedef float _position_type;
  _position_type position;

   typedef float _speed_type;
  _speed_type speed;

   typedef float _force_type;
  _force_type force;





  typedef boost::shared_ptr< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> const> ConstPtr;

}; // struct RobotiqGripperCommand_

typedef ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<std::allocator<void> > RobotiqGripperCommand;

typedef boost::shared_ptr< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand > RobotiqGripperCommandPtr;
typedef boost::shared_ptr< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand const> RobotiqGripperCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator1> & lhs, const ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator2> & rhs)
{
  return lhs.emergency_release == rhs.emergency_release &&
    lhs.emergency_release_dir == rhs.emergency_release_dir &&
    lhs.stop == rhs.stop &&
    lhs.position == rhs.position &&
    lhs.speed == rhs.speed &&
    lhs.force == rhs.force;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator1> & lhs, const ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotiq_2f_gripper_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "017fc0d464f4a4d072ae2519e0fc1789";
  }

  static const char* value(const ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x017fc0d464f4a4d0ULL;
  static const uint64_t static_value2 = 0x72ae2519e0fc1789ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotiq_2f_gripper_msgs/RobotiqGripperCommand";
  }

  static const char* value(const ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool emergency_release\n"
"uint32 emergency_release_dir\n"
"bool stop\n"
"float32 position #[m] Distance in bewteen fingers \n"
"float32 speed    #[m/s] Speed (Min: 0.013m/s - Max: 0.1m/s)\n"
"float32 force    #[%] Percentage of gripper force to apply (Min: 0.0% - Max: 100.0%)\n"
"\n"
"\n"
;
  }

  static const char* value(const ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.emergency_release);
      stream.next(m.emergency_release_dir);
      stream.next(m.stop);
      stream.next(m.position);
      stream.next(m.speed);
      stream.next(m.force);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotiqGripperCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotiq_2f_gripper_msgs::RobotiqGripperCommand_<ContainerAllocator>& v)
  {
    s << indent << "emergency_release: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.emergency_release);
    s << indent << "emergency_release_dir: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.emergency_release_dir);
    s << indent << "stop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stop);
    s << indent << "position: ";
    Printer<float>::stream(s, indent + "  ", v.position);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
    s << indent << "force: ";
    Printer<float>::stream(s, indent + "  ", v.force);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTIQ_2F_GRIPPER_MSGS_MESSAGE_ROBOTIQGRIPPERCOMMAND_H
