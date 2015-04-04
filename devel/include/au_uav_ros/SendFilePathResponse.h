/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/viki/catkin_ws/src/au_uav_ros/srv/SendFilePath.srv
 *
 */


#ifndef AU_UAV_ROS_MESSAGE_SENDFILEPATHRESPONSE_H
#define AU_UAV_ROS_MESSAGE_SENDFILEPATHRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace au_uav_ros
{
template <class ContainerAllocator>
struct SendFilePathResponse_
{
  typedef SendFilePathResponse_<ContainerAllocator> Type;

  SendFilePathResponse_()
    : error()  {
    }
  SendFilePathResponse_(const ContainerAllocator& _alloc)
    : error(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_type;
  _error_type error;




  typedef boost::shared_ptr< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct SendFilePathResponse_

typedef ::au_uav_ros::SendFilePathResponse_<std::allocator<void> > SendFilePathResponse;

typedef boost::shared_ptr< ::au_uav_ros::SendFilePathResponse > SendFilePathResponsePtr;
typedef boost::shared_ptr< ::au_uav_ros::SendFilePathResponse const> SendFilePathResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace au_uav_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'au_uav_ros': ['/home/viki/catkin_ws/src/au_uav_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eca8b96616c32aacf1be8bbf14c70eba";
  }

  static const char* value(const ::au_uav_ros::SendFilePathResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeca8b96616c32aacULL;
  static const uint64_t static_value2 = 0xf1be8bbf14c70ebaULL;
};

template<class ContainerAllocator>
struct DataType< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "au_uav_ros/SendFilePathResponse";
  }

  static const char* value(const ::au_uav_ros::SendFilePathResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string error\n\
\n\
";
  }

  static const char* value(const ::au_uav_ros::SendFilePathResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SendFilePathResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::au_uav_ros::SendFilePathResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::au_uav_ros::SendFilePathResponse_<ContainerAllocator>& v)
  {
    s << indent << "error: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AU_UAV_ROS_MESSAGE_SENDFILEPATHRESPONSE_H
