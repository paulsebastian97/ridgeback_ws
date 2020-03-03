# Install script for directory: /home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_description

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/paul/ros_workspaces/ridgeback_ws/build/ridgeback/ridgeback_description/catkin_generated/installspace/ridgeback_description.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ridgeback_description/cmake" TYPE FILE FILES
    "/home/paul/ros_workspaces/ridgeback_ws/build/ridgeback/ridgeback_description/catkin_generated/installspace/ridgeback_descriptionConfig.cmake"
    "/home/paul/ros_workspaces/ridgeback_ws/build/ridgeback/ridgeback_description/catkin_generated/installspace/ridgeback_descriptionConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ridgeback_description" TYPE FILE FILES "/home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_description/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ridgeback_description" TYPE DIRECTORY FILES
    "/home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_description/meshes"
    "/home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_description/launch"
    "/home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_description/urdf"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ridgeback_description" TYPE PROGRAM FILES "/home/paul/ros_workspaces/ridgeback_ws/src/ridgeback/ridgeback_description/scripts/env_run")
endif()

