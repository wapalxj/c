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
include CMakeFiles/AAAA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AAAA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AAAA.dir/flags.make

CMakeFiles/AAAA.dir/cpp/c1_/overload/Student.cpp.obj: CMakeFiles/AAAA.dir/flags.make
CMakeFiles/AAAA.dir/cpp/c1_/overload/Student.cpp.obj: ../cpp/c1_/overload/Student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workplace\code\GIT\C\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AAAA.dir/cpp/c1_/overload/Student.cpp.obj"
	M:\201X\Allpackages\Software\IntelliJ\CLion\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\AAAA.dir\cpp\c1_\overload\Student.cpp.obj -c D:\workplace\code\GIT\C\C\cpp\c1_\overload\Student.cpp

CMakeFiles/AAAA.dir/cpp/c1_/overload/Student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AAAA.dir/cpp/c1_/overload/Student.cpp.i"
	M:\201X\Allpackages\Software\IntelliJ\CLion\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\workplace\code\GIT\C\C\cpp\c1_\overload\Student.cpp > CMakeFiles\AAAA.dir\cpp\c1_\overload\Student.cpp.i

CMakeFiles/AAAA.dir/cpp/c1_/overload/Student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AAAA.dir/cpp/c1_/overload/Student.cpp.s"
	M:\201X\Allpackages\Software\IntelliJ\CLion\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\workplace\code\GIT\C\C\cpp\c1_\overload\Student.cpp -o CMakeFiles\AAAA.dir\cpp\c1_\overload\Student.cpp.s

# Object files for target AAAA
AAAA_OBJECTS = \
"CMakeFiles/AAAA.dir/cpp/c1_/overload/Student.cpp.obj"

# External object files for target AAAA
AAAA_EXTERNAL_OBJECTS =

AAAA.exe: CMakeFiles/AAAA.dir/cpp/c1_/overload/Student.cpp.obj
AAAA.exe: CMakeFiles/AAAA.dir/build.make
AAAA.exe: CMakeFiles/AAAA.dir/linklibs.rsp
AAAA.exe: CMakeFiles/AAAA.dir/objects1.rsp
AAAA.exe: CMakeFiles/AAAA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\workplace\code\GIT\C\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AAAA.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\AAAA.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AAAA.dir/build: AAAA.exe

.PHONY : CMakeFiles/AAAA.dir/build

CMakeFiles/AAAA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AAAA.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AAAA.dir/clean

CMakeFiles/AAAA.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\workplace\code\GIT\C\C D:\workplace\code\GIT\C\C D:\workplace\code\GIT\C\C\cmake-build-debug D:\workplace\code\GIT\C\C\cmake-build-debug D:\workplace\code\GIT\C\C\cmake-build-debug\CMakeFiles\AAAA.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AAAA.dir/depend

