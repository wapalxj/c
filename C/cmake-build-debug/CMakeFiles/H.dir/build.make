# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\workplace\code\GIT\C\C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\workplace\code\GIT\C\C\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/H.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/H.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/H.dir/flags.make

CMakeFiles/H.dir/cpp/c1_/first.cpp.obj: CMakeFiles/H.dir/flags.make
CMakeFiles/H.dir/cpp/c1_/first.cpp.obj: ../cpp/c1_/first.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workplace\code\GIT\C\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/H.dir/cpp/c1_/first.cpp.obj"
	M:\201X\Allpackages\Software\IntelliJ\CLion\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\H.dir\cpp\c1_\first.cpp.obj -c D:\workplace\code\GIT\C\C\cpp\c1_\first.cpp

CMakeFiles/H.dir/cpp/c1_/first.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/H.dir/cpp/c1_/first.cpp.i"
	M:\201X\Allpackages\Software\IntelliJ\CLion\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\workplace\code\GIT\C\C\cpp\c1_\first.cpp > CMakeFiles\H.dir\cpp\c1_\first.cpp.i

CMakeFiles/H.dir/cpp/c1_/first.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/H.dir/cpp/c1_/first.cpp.s"
	M:\201X\Allpackages\Software\IntelliJ\CLion\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\workplace\code\GIT\C\C\cpp\c1_\first.cpp -o CMakeFiles\H.dir\cpp\c1_\first.cpp.s

# Object files for target H
H_OBJECTS = \
"CMakeFiles/H.dir/cpp/c1_/first.cpp.obj"

# External object files for target H
H_EXTERNAL_OBJECTS =

H.exe: CMakeFiles/H.dir/cpp/c1_/first.cpp.obj
H.exe: CMakeFiles/H.dir/build.make
H.exe: CMakeFiles/H.dir/linklibs.rsp
H.exe: CMakeFiles/H.dir/objects1.rsp
H.exe: CMakeFiles/H.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\workplace\code\GIT\C\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable H.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\H.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/H.dir/build: H.exe

.PHONY : CMakeFiles/H.dir/build

CMakeFiles/H.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\H.dir\cmake_clean.cmake
.PHONY : CMakeFiles/H.dir/clean

CMakeFiles/H.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\workplace\code\GIT\C\C D:\workplace\code\GIT\C\C D:\workplace\code\GIT\C\C\cmake-build-debug D:\workplace\code\GIT\C\C\cmake-build-debug D:\workplace\code\GIT\C\C\cmake-build-debug\CMakeFiles\H.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/H.dir/depend
