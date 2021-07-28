// Generated by gencpp from file spot_msgs/SystemFault.msg
// DO NOT EDIT!


#ifndef SPOT_MSGS_MESSAGE_SYSTEMFAULT_H
#define SPOT_MSGS_MESSAGE_SYSTEMFAULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace spot_msgs
{
template <class ContainerAllocator>
struct SystemFault_
{
  typedef SystemFault_<ContainerAllocator> Type;

  SystemFault_()
    : header()
    , name()
    , duration()
    , code(0)
    , uid(0)
    , error_message()
    , attributes()
    , severity(0)  {
    }
  SystemFault_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , name(_alloc)
    , duration()
    , code(0)
    , uid(0)
    , error_message(_alloc)
    , attributes(_alloc)
    , severity(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef ros::Duration _duration_type;
  _duration_type duration;

   typedef int32_t _code_type;
  _code_type code;

   typedef uint64_t _uid_type;
  _uid_type uid;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_message_type;
  _error_message_type error_message;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _attributes_type;
  _attributes_type attributes;

   typedef uint8_t _severity_type;
  _severity_type severity;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SEVERITY_UNKNOWN)
  #undef SEVERITY_UNKNOWN
#endif
#if defined(_WIN32) && defined(SEVERITY_INFO)
  #undef SEVERITY_INFO
#endif
#if defined(_WIN32) && defined(SEVERITY_WARN)
  #undef SEVERITY_WARN
#endif
#if defined(_WIN32) && defined(SEVERITY_CRITICAL)
  #undef SEVERITY_CRITICAL
#endif

  enum {
    SEVERITY_UNKNOWN = 0u,
    SEVERITY_INFO = 1u,
    SEVERITY_WARN = 2u,
    SEVERITY_CRITICAL = 3u,
  };


  typedef boost::shared_ptr< ::spot_msgs::SystemFault_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spot_msgs::SystemFault_<ContainerAllocator> const> ConstPtr;

}; // struct SystemFault_

typedef ::spot_msgs::SystemFault_<std::allocator<void> > SystemFault;

typedef boost::shared_ptr< ::spot_msgs::SystemFault > SystemFaultPtr;
typedef boost::shared_ptr< ::spot_msgs::SystemFault const> SystemFaultConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spot_msgs::SystemFault_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spot_msgs::SystemFault_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spot_msgs::SystemFault_<ContainerAllocator1> & lhs, const ::spot_msgs::SystemFault_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.name == rhs.name &&
    lhs.duration == rhs.duration &&
    lhs.code == rhs.code &&
    lhs.uid == rhs.uid &&
    lhs.error_message == rhs.error_message &&
    lhs.attributes == rhs.attributes &&
    lhs.severity == rhs.severity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spot_msgs::SystemFault_<ContainerAllocator1> & lhs, const ::spot_msgs::SystemFault_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::SystemFault_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::SystemFault_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::SystemFault_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::SystemFault_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::SystemFault_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::SystemFault_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spot_msgs::SystemFault_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d4409a7e7087c0e4485ccf8e05022a5d";
  }

  static const char* value(const ::spot_msgs::SystemFault_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd4409a7e7087c0e4ULL;
  static const uint64_t static_value2 = 0x485ccf8e05022a5dULL;
};

template<class ContainerAllocator>
struct DataType< ::spot_msgs::SystemFault_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spot_msgs/SystemFault";
  }

  static const char* value(const ::spot_msgs::SystemFault_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spot_msgs::SystemFault_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Severity\n"
"uint8 SEVERITY_UNKNOWN = 0\n"
"uint8 SEVERITY_INFO = 1\n"
"uint8 SEVERITY_WARN = 2\n"
"uint8 SEVERITY_CRITICAL = 3\n"
"\n"
"Header header\n"
"string name\n"
"duration duration\n"
"int32 code\n"
"uint64 uid\n"
"string error_message\n"
"string[] attributes\n"
"uint8 severity\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::spot_msgs::SystemFault_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spot_msgs::SystemFault_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.name);
      stream.next(m.duration);
      stream.next(m.code);
      stream.next(m.uid);
      stream.next(m.error_message);
      stream.next(m.attributes);
      stream.next(m.severity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SystemFault_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spot_msgs::SystemFault_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spot_msgs::SystemFault_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.duration);
    s << indent << "code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.code);
    s << indent << "uid: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.uid);
    s << indent << "error_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.error_message);
    s << indent << "attributes[]" << std::endl;
    for (size_t i = 0; i < v.attributes.size(); ++i)
    {
      s << indent << "  attributes[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.attributes[i]);
    }
    s << indent << "severity: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.severity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPOT_MSGS_MESSAGE_SYSTEMFAULT_H