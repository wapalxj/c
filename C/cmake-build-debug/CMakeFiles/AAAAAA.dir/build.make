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
include CMakeFiles/AAAAAA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AAAAAA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AAAAAA.dir/flags.make

CMakeFiles/AAAAAA.dir/cpp/c2/con_copy.cpp.obj: CMakeFiles/AAAAAA.dir/flags.make
CMakeFiles/AAAAAA.dir/cpp/c2/con_copy.cpp.obj: ../cpp/c2/con_copy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workplace\code\GIT\C\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AAAAAA.dir/cpp/c2/con_copy.cpp.obj"
	M:\201X\Allpackages\Software\IntelliJ\CLion\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\AAAAAA.dir\cpp\c2\con_copy.cpp.obj -c D:\workplace\code\GIT\C\C\cpp\c2\con_copy.cpp

CMakeFiles/AAAAAA.dir/cpp/c2/con_copy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AAAAAA.dir/cpp/c2/con_copy.cpp.i"
	M:\201X\Allpackages\Software\IntelliJ\CLion\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\workplace\code\GIT\C\C\cpp\c2\con_copy.cpp > CMakeFiles\AAAAAA.dir\cpp\c2\con_copy.cpp.i

CMakeFiles/AAAAAA.dir/cpp/c2/con_copy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AAAAAA.dir/cpp/c2/con_copy.cpp.s"
	M:\201X\Allpackages\Software\IntelliJ\CLion\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\workplace\code\GIT\C\C\cpp\c2\con_copy.cpp -o CMakeFiles\AAAAAA.dir\cpp\c2\con_copy.cpp.s

# Object files for target AAAAAA
AAAAAA_OBJECTS = \
"CMakeFiles/AAAAAA.dir/cpp/c2/con_copy.cpp.obj"

# External object files for target AAAAAA
AAAAAA_EXTERNAL_OBJECTS =

AAAAAA.exe: CMakeFiles/AAAAAA.dir/cpp/c2/con_copy.cpp.obj
AAAAAA.exe: CMakeFiles/AAAAAA.dir/build.make
AAAAAA.exe: CMakeFiles/AAAAAA.dir/linklibs.rsp
AAAAAA.exe: CMakeFiles/AAAAAA.dir/objects1.rsp
AAAAAA.exe: CMakeFiles/AAAAAA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\workplace\code\GIT\C\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AAAAAA.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\AAAAAA.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AAAAAA.dir/build: AAAAAA.exe

.PHONY : CMakeFiles/AAAAAA.dir/build

CMakeFiles/AAAAAA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AAAAAA.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AAAAAA.dir/clean

CMakeFiles/AAAAAA.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\workplace\code\GIT\C\C D:\workplace\code\GIT\C\C D:\workplace\code\GIT\C\C\cmake-build-debug D:\workplace\code\GIT\C\C\cmake-build-debug D:\workplace\code\GIT\C\C\cmake-build-debug\CMakeFiles\AAAAAA.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AAAAAA.dir/depend

