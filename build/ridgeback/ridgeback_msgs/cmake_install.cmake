# Install script for directory: /home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/paul/ros_workspaces/ridgeback_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ridgeback_msgs/msg" TYPE FILE FILES
    "/home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_msgs/msg/Fans.msg"
    "/home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_msgs/msg/Lights.msg"
    "/home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_msgs/msg/RGB.msg"
    "/home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_msgs/msg/Status.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ridgeback_msgs/cmake" TYPE FILE FILES "/home/paul/ros_workspaces/ridgeback_ws/build/ridgeback/ridgeback_msgs/catkin_generated/installspace/ridgeback_msgs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/paul/ros_workspaces/ridgeback_ws/devel/include/ridgeback_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/paul/ros_workspaces/ridgeback_ws/devel/share/roseus/ros/ridgeback_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/paul/ros_workspaces/ridgeback_ws/devel/share/common-lisp/ros/ridgeback_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/paul/ros_workspaces/ridgeback_ws/devel/share/gennodejs/ros/ridgeback_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/paul/ros_workspaces/ridgeback_ws/devel/lib/python2.7/dist-packages/ridgeback_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/paul/ros_workspaces/ridgeback_ws/devel/lib/python2.7/dist-packages/ridgeback_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/paul/ros_workspaces/ridgeback_ws/build/ridgeback/ridgeback_msgs/catkin_generated/installspace/ridgeback_msgs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ridgeback_msgs/cmake" TYPE FILE FILES "/home/paul/ros_workspaces/ridgeback_ws/build/ridgeback/ridgeback_msgs/catkin_generated/installspace/ridgeback_msgs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ridgeback_msgs/cmake" TYPE FILE FILES
    "/home/paul/ros_workspaces/ridgeback_ws/build/ridgeback/ridgeback_msgs/catkin_generated/installspace/ridgeback_msgsConfig.cmake"
    "/home/paul/ros_workspaces/ridgeback_ws/build/ridgeback/ridgeback_msgs/catkin_generated/installspace/ridgeback_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ridgeback_msgs" TYPE FILE FILES "/home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_msgs/package.xml")
endif()

