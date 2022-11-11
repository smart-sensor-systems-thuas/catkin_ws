#!/bin/bash

source ./devel/setup.bash 

gnome-terminal \
--tab -e "bash -c 'source ./devel/setup.bash; sleep 1; roslaunch hikrobot_camera hikrobot_camera.launch; bash'" \
--tab -e "bash -c 'roslaunch velodyne_pointcloud VLP16_points.launch; bash'" \
--tab -e "bash -c 'sleep 2; roslaunch velo2cam_calibration mono_pattern.launch camera_name:=/hikrobot_camera image_topic:=image_raw frame_name:=hikrobot_camera; bash'" \
--tab -e "bash -c 'sleep 2; roslaunch velo2cam_calibration lidar_pattern.launch cloud_topic:=/velodyne_points; bash'" \
--tab -e "bash -c 'sleep 3; roslaunch velo2cam_calibration registration.launch sensor1_type:=lidar sensor2_type:=mono; bash'" \
--tab -e "bash -c 'sleep 4; rosrun tf static_transform_publisher 0 0 0 0 0 0 1 map velodyne 10; bash'" \
--tab -e "bash -c 'sleep 4; rviz; bash'"


