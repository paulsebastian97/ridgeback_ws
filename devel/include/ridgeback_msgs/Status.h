// Generated by gencpp from file ridgeback_msgs/Status.msg
// DO NOT EDIT!


#ifndef RIDGEBACK_MSGS_MESSAGE_STATUS_H
#define RIDGEBACK_MSGS_MESSAGE_STATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ridgeback_msgs
{
template <class ContainerAllocator>
struct Status_
{
  typedef Status_<ContainerAllocator> Type;

  Status_()
    : header()
    , hardware_id()
    , mcu_uptime()
    , connection_uptime()
    , pcb_temperature(0.0)
    , mcu_temperature(0.0)
    , stop_power_status(false)
    , stop_engaged(false)
    , drivers_active(false)
    , external_stop_present(false)
    , charger_connected(false)
    , charging_complete(false)
    , measured_battery(0.0)
    , measured_12v(0.0)
    , measured_5v(0.0)
    , measured_inverter(0.0)
    , measured_front_axle(0.0)
    , measured_rear_axle(0.0)
    , measured_light(0.0)
    , total_current(0.0)
    , total_current_peak(0.0)
    , total_power_consumed(0.0)  {
    }
  Status_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , hardware_id(_alloc)
    , mcu_uptime()
    , connection_uptime()
    , pcb_temperature(0.0)
    , mcu_temperature(0.0)
    , stop_power_status(false)
    , stop_engaged(false)
    , drivers_active(false)
    , external_stop_present(false)
    , charger_connected(false)
    , charging_complete(false)
    , measured_battery(0.0)
    , measured_12v(0.0)
    , measured_5v(0.0)
    , measured_inverter(0.0)
    , measured_front_axle(0.0)
    , measured_rear_axle(0.0)
    , measured_light(0.0)
    , total_current(0.0)
    , total_current_peak(0.0)
    , total_power_consumed(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _hardware_id_type;
  _hardware_id_type hardware_id;

   typedef ros::Duration _mcu_uptime_type;
  _mcu_uptime_type mcu_uptime;

   typedef ros::Duration _connection_uptime_type;
  _connection_uptime_type connection_uptime;

   typedef float _pcb_temperature_type;
  _pcb_temperature_type pcb_temperature;

   typedef float _mcu_temperature_type;
  _mcu_temperature_type mcu_temperature;

   typedef uint8_t _stop_power_status_type;
  _stop_power_status_type stop_power_status;

   typedef uint8_t _stop_engaged_type;
  _stop_engaged_type stop_engaged;

   typedef uint8_t _drivers_active_type;
  _drivers_active_type drivers_active;

   typedef uint8_t _external_stop_present_type;
  _external_stop_present_type external_stop_present;

   typedef uint8_t _charger_connected_type;
  _charger_connected_type charger_connected;

   typedef uint8_t _charging_complete_type;
  _charging_complete_type charging_complete;

   typedef float _measured_battery_type;
  _measured_battery_type measured_battery;

   typedef float _measured_12v_type;
  _measured_12v_type measured_12v;

   typedef float _measured_5v_type;
  _measured_5v_type measured_5v;

   typedef float _measured_inverter_type;
  _measured_inverter_type measured_inverter;

   typedef float _measured_front_axle_type;
  _measured_front_axle_type measured_front_axle;

   typedef float _measured_rear_axle_type;
  _measured_rear_axle_type measured_rear_axle;

   typedef float _measured_light_type;
  _measured_light_type measured_light;

   typedef float _total_current_type;
  _total_current_type total_current;

   typedef float _total_current_peak_type;
  _total_current_peak_type total_current_peak;

   typedef double _total_power_consumed_type;
  _total_power_consumed_type total_power_consumed;





  typedef boost::shared_ptr< ::ridgeback_msgs::Status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ridgeback_msgs::Status_<ContainerAllocator> const> ConstPtr;

}; // struct Status_

typedef ::ridgeback_msgs::Status_<std::allocator<void> > Status;

typedef boost::shared_ptr< ::ridgeback_msgs::Status > StatusPtr;
typedef boost::shared_ptr< ::ridgeback_msgs::Status const> StatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ridgeback_msgs::Status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ridgeback_msgs::Status_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ridgeback_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'ridgeback_msgs': ['/home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ridgeback_msgs::Status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ridgeback_msgs::Status_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ridgeback_msgs::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ridgeback_msgs::Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ridgeback_msgs::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ridgeback_msgs::Status_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ridgeback_msgs::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5b3d8e0f8c2c371cf7df823649f67044";
  }

  static const char* value(const ::ridgeback_msgs::Status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5b3d8e0f8c2c371cULL;
  static const uint64_t static_value2 = 0xf7df823649f67044ULL;
};

template<class ContainerAllocator>
struct DataType< ::ridgeback_msgs::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ridgeback_msgs/Status";
  }

  static const char* value(const ::ridgeback_msgs::Status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ridgeback_msgs::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message represents Ridgeback's lower-frequency status updates from the MCU\n\
# Default publish frequency is 1Hz.\n\
\n\
Header header\n\
\n\
# Commit of firmware source.\n\
string hardware_id\n\
\n\
# Times since MCU power-on and MCU rosserial connection, respectively.\n\
duration mcu_uptime\n\
duration connection_uptime\n\
\n\
# Temperature of MCU's PCB in Celsius.\n\
float32 pcb_temperature\n\
float32 mcu_temperature\n\
\n\
# Monitoring the run/stop loop. Changes in these values trigger an immediate\n\
# publish, outside the ordinarily-scheduled 1Hz updates.\n\
bool stop_power_status  # True indicates the stop loop is operational (ie. it is powered).\n\
bool stop_engaged  # True when a stop has been pressed on the robot.\n\
bool drivers_active  # False when a stop is asserted to the motor drivers.\n\
bool external_stop_present  # True indicates a external stop has been plugged in.\n\
\n\
# Indicates if AC power is connected.\n\
bool charger_connected\n\
bool charging_complete\n\
\n\
# Voltage rails, in volts\n\
# Averaged over the message period\n\
float32 measured_battery\n\
float32 measured_12v\n\
float32 measured_5v\n\
float32 measured_inverter\n\
float32 measured_front_axle\n\
float32 measured_rear_axle\n\
float32 measured_light\n\
\n\
# Current senses available on platform, in amps.\n\
# Averaged over the message period\n\
float32 total_current\n\
\n\
# Highest total system current peak as measured in a 1ms window.\n\
float32 total_current_peak\n\
\n\
# Integration of all power consumption since MCU power-on, in watt-hours.\n\
float64 total_power_consumed\n\
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
";
  }

  static const char* value(const ::ridgeback_msgs::Status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ridgeback_msgs::Status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.hardware_id);
      stream.next(m.mcu_uptime);
      stream.next(m.connection_uptime);
      stream.next(m.pcb_temperature);
      stream.next(m.mcu_temperature);
      stream.next(m.stop_power_status);
      stream.next(m.stop_engaged);
      stream.next(m.drivers_active);
      stream.next(m.external_stop_present);
      stream.next(m.charger_connected);
      stream.next(m.charging_complete);
      stream.next(m.measured_battery);
      stream.next(m.measured_12v);
      stream.next(m.measured_5v);
      stream.next(m.measured_inverter);
      stream.next(m.measured_front_axle);
      stream.next(m.measured_rear_axle);
      stream.next(m.measured_light);
      stream.next(m.total_current);
      stream.next(m.total_current_peak);
      stream.next(m.total_power_consumed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ridgeback_msgs::Status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ridgeback_msgs::Status_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "hardware_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.hardware_id);
    s << indent << "mcu_uptime: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.mcu_uptime);
    s << indent << "connection_uptime: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.connection_uptime);
    s << indent << "pcb_temperature: ";
    Printer<float>::stream(s, indent + "  ", v.pcb_temperature);
    s << indent << "mcu_temperature: ";
    Printer<float>::stream(s, indent + "  ", v.mcu_temperature);
    s << indent << "stop_power_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stop_power_status);
    s << indent << "stop_engaged: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stop_engaged);
    s << indent << "drivers_active: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.drivers_active);
    s << indent << "external_stop_present: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.external_stop_present);
    s << indent << "charger_connected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charger_connected);
    s << indent << "charging_complete: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charging_complete);
    s << indent << "measured_battery: ";
    Printer<float>::stream(s, indent + "  ", v.measured_battery);
    s << indent << "measured_12v: ";
    Printer<float>::stream(s, indent + "  ", v.measured_12v);
    s << indent << "measured_5v: ";
    Printer<float>::stream(s, indent + "  ", v.measured_5v);
    s << indent << "measured_inverter: ";
    Printer<float>::stream(s, indent + "  ", v.measured_inverter);
    s << indent << "measured_front_axle: ";
    Printer<float>::stream(s, indent + "  ", v.measured_front_axle);
    s << indent << "measured_rear_axle: ";
    Printer<float>::stream(s, indent + "  ", v.measured_rear_axle);
    s << indent << "measured_light: ";
    Printer<float>::stream(s, indent + "  ", v.measured_light);
    s << indent << "total_current: ";
    Printer<float>::stream(s, indent + "  ", v.total_current);
    s << indent << "total_current_peak: ";
    Printer<float>::stream(s, indent + "  ", v.total_current_peak);
    s << indent << "total_power_consumed: ";
    Printer<double>::stream(s, indent + "  ", v.total_power_consumed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RIDGEBACK_MSGS_MESSAGE_STATUS_H
