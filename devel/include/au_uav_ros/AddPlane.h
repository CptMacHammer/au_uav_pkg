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
 * Auto-generated by gensrv_cpp from file /home/viki/catkin_ws/src/au_uav_ros/srv/AddPlane.srv
 *
 */


#ifndef AU_UAV_ROS_MESSAGE_ADDPLANE_H
#define AU_UAV_ROS_MESSAGE_ADDPLANE_H

#include <ros/service_traits.h>


#include <au_uav_ros/AddPlaneRequest.h>
#include <au_uav_ros/AddPlaneResponse.h>


namespace au_uav_ros
{

struct AddPlane
{

typedef AddPlaneRequest Request;
typedef AddPlaneResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddPlane
} // namespace au_uav_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::au_uav_ros::AddPlane > {
  static const char* value()
  {
    return "d29010f1b8b826b7ef75c278b8f3b563";
  }

  static const char* value(const ::au_uav_ros::AddPlane&) { return value(); }
};

template<>
struct DataType< ::au_uav_ros::AddPlane > {
  static const char* value()
  {
    return "au_uav_ros/AddPlane";
  }

  static const char* value(const ::au_uav_ros::AddPlane&) { return value(); }
};


// service_traits::MD5Sum< ::au_uav_ros::AddPlaneRequest> should match 
// service_traits::MD5Sum< ::au_uav_ros::AddPlane > 
template<>
struct MD5Sum< ::au_uav_ros::AddPlaneRequest>
{
  static const char* value()
  {
    return MD5Sum< ::au_uav_ros::AddPlane >::value();
  }
  static const char* value(const ::au_uav_ros::AddPlaneRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::au_uav_ros::AddPlaneRequest> should match 
// service_traits::DataType< ::au_uav_ros::AddPlane > 
template<>
struct DataType< ::au_uav_ros::AddPlaneRequest>
{
  static const char* value()
  {
    return DataType< ::au_uav_ros::AddPlane >::value();
  }
  static const char* value(const ::au_uav_ros::AddPlaneRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::au_uav_ros::AddPlaneResponse> should match 
// service_traits::MD5Sum< ::au_uav_ros::AddPlane > 
template<>
struct MD5Sum< ::au_uav_ros::AddPlaneResponse>
{
  static const char* value()
  {
    return MD5Sum< ::au_uav_ros::AddPlane >::value();
  }
  static const char* value(const ::au_uav_ros::AddPlaneResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::au_uav_ros::AddPlaneResponse> should match 
// service_traits::DataType< ::au_uav_ros::AddPlane > 
template<>
struct DataType< ::au_uav_ros::AddPlaneResponse>
{
  static const char* value()
  {
    return DataType< ::au_uav_ros::AddPlane >::value();
  }
  static const char* value(const ::au_uav_ros::AddPlaneResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // AU_UAV_ROS_MESSAGE_ADDPLANE_H
