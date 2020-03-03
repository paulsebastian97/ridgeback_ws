# ridgeback-ws
A ROS Workspace to test the motion produced by different planners when applied on mecanum robot/holonomic robot using a ridgeback robot.

## Purpose of this workspace

To test the motion created by using different planners. And to understand which planner can be used and the advantages and 
disadvantages of using a certain planner for holonomic robot. As per testing teb planner is suitable for mecanum robot/holonomic robot.



## How to run this workspace to test the purpose of this workspace

-Source the workspace in .bashrc

`source /path_to_your_workspace/ridgeback_ws/devel/setup.bash`

-Launch gazebo

`$ roslaunch ridgeback_gazebo ridgeback_world.launch`

-Launch amcl

`$ roslaunch ridgeback_navigation amcl_demo.launch [map_file:=/path/to/my/map.yaml]`

-Launch rviz

`$ roslaunch ridgeback_viz view_robot.launch config:=localization`
 
 -Give goal points and check the motion of the robot.




# How to change planners for the ridgeback robot


-Uncomment the rosparam and param tag of the planner you want to choose in /home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_navigation/launch/include/move_base_1.launch
```
<rosparam file="$(find ridgeback_navigation)/params/eband_local_planner_omni_params.yaml" command="load" />

<param name="eband_local_planner" value="eband_local_planner/EBandPlannerROS"/>
```







# Eband planner

-Eband planner is not suitable for holonomic robot because it doesn't move sidewards as it is, meaning it doesn't drift sidewards without changing direction.

-The problem with eband planner is that it doesn't detect obstacle that are immediately introduced in gazebo.




# Teb planner

-Teb planner is suitable for holonomic robot with slight changes/optimization in the teb parameters. In order to change the teb parameters we can change the parameters in -->/home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_navigation/params/teb_local_planner_omni_params.yaml. The details of the parameters of the teb planner has been has been written as comments next to each parameter in the teb_local_planner_omni_params.yaml file.

-It moves sidewards like the way a holonomic robot should do. 

-Set these parameters to these values:
	-allow_init_with_backwards_motion: false 
	-max_vel_x_backwards: 0.0



# dwa planner

-dwa planner is not suitable for holonomic robot as it doesn't drift sidewards like it should in a holonomic robot.


# base planner

-base planner is not suitable for holonomic robot as it doesn't drift sidewards like it should in a holonomic robot.


