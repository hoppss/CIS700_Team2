# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/genesis/code/ROS/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/genesis/code/ROS/catkin_ws/build

# Include any dependencies generated for this target.
include vision/face_recognition/CMakeFiles/facerec.dir/depend.make

# Include the progress variables for this target.
include vision/face_recognition/CMakeFiles/facerec.dir/progress.make

# Include the compile flags for this target's objects.
include vision/face_recognition/CMakeFiles/facerec.dir/flags.make

vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.o: vision/face_recognition/CMakeFiles/facerec.dir/flags.make
vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.o: /home/genesis/code/ROS/catkin_ws/src/vision/face_recognition/src/face/facerec.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/genesis/code/ROS/catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.o"
	cd /home/genesis/code/ROS/catkin_ws/build/vision/face_recognition && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/facerec.dir/src/face/facerec.cpp.o -c /home/genesis/code/ROS/catkin_ws/src/vision/face_recognition/src/face/facerec.cpp

vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/facerec.dir/src/face/facerec.cpp.i"
	cd /home/genesis/code/ROS/catkin_ws/build/vision/face_recognition && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/genesis/code/ROS/catkin_ws/src/vision/face_recognition/src/face/facerec.cpp > CMakeFiles/facerec.dir/src/face/facerec.cpp.i

vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/facerec.dir/src/face/facerec.cpp.s"
	cd /home/genesis/code/ROS/catkin_ws/build/vision/face_recognition && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/genesis/code/ROS/catkin_ws/src/vision/face_recognition/src/face/facerec.cpp -o CMakeFiles/facerec.dir/src/face/facerec.cpp.s

vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.o.requires:
.PHONY : vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.o.requires

vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.o.provides: vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.o.requires
	$(MAKE) -f vision/face_recognition/CMakeFiles/facerec.dir/build.make vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.o.provides.build
.PHONY : vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.o.provides

vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.o.provides.build: vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.o

# Object files for target facerec
facerec_OBJECTS = \
"CMakeFiles/facerec.dir/src/face/facerec.cpp.o"

# External object files for target facerec
facerec_EXTERNAL_OBJECTS =

/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.o
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: vision/face_recognition/CMakeFiles/facerec.dir/build.make
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /opt/ros/indigo/lib/libroscpp.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /opt/ros/indigo/lib/librosconsole.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /opt/ros/indigo/lib/librosconsole_log4cxx.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /opt/ros/indigo/lib/librosconsole_backend_interface.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/liblog4cxx.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /opt/ros/indigo/lib/libxmlrpcpp.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /opt/ros/indigo/lib/libroscpp_serialization.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /opt/ros/indigo/lib/librostime.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /opt/ros/indigo/lib/libcpp_common.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
/home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec: vision/face_recognition/CMakeFiles/facerec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec"
	cd /home/genesis/code/ROS/catkin_ws/build/vision/face_recognition && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/facerec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
vision/face_recognition/CMakeFiles/facerec.dir/build: /home/genesis/code/ROS/catkin_ws/devel/lib/face_recognition/facerec
.PHONY : vision/face_recognition/CMakeFiles/facerec.dir/build

vision/face_recognition/CMakeFiles/facerec.dir/requires: vision/face_recognition/CMakeFiles/facerec.dir/src/face/facerec.cpp.o.requires
.PHONY : vision/face_recognition/CMakeFiles/facerec.dir/requires

vision/face_recognition/CMakeFiles/facerec.dir/clean:
	cd /home/genesis/code/ROS/catkin_ws/build/vision/face_recognition && $(CMAKE_COMMAND) -P CMakeFiles/facerec.dir/cmake_clean.cmake
.PHONY : vision/face_recognition/CMakeFiles/facerec.dir/clean

vision/face_recognition/CMakeFiles/facerec.dir/depend:
	cd /home/genesis/code/ROS/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/genesis/code/ROS/catkin_ws/src /home/genesis/code/ROS/catkin_ws/src/vision/face_recognition /home/genesis/code/ROS/catkin_ws/build /home/genesis/code/ROS/catkin_ws/build/vision/face_recognition /home/genesis/code/ROS/catkin_ws/build/vision/face_recognition/CMakeFiles/facerec.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : vision/face_recognition/CMakeFiles/facerec.dir/depend

