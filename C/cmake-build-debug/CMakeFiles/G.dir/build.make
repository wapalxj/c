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
include CMakeFiles/G.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/G.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/G.dir/flags.make

CMakeFiles/G.dir/c6_/main.c.obj: CMakeFiles/G.dir/flags.make
CMakeFiles/G.dir/c6_/main.c.obj: ../c6_/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workplace\code\GIT\C\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/G.dir/c6_/main.c.obj"
	M:\201X\Allpackages\Software\IntelliJ\CLion\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\G.dir\c6_\main.c.obj   -c D:\workplace\code\GIT\C\C\c6_\main.c

CMakeFiles/G.dir/c6_/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/G.dir/c6_/main.c.i"
	M:\201X\Allpackages\Software\IntelliJ\CLion\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workplace\code\GIT\C\C\c6_\main.c > CMakeFiles\G.dir\c6_\main.c.i

CMakeFiles/G.dir/c6_/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/G.dir/c6_/main.c.s"
	M:\201X\Allpackages\Software\IntelliJ\CLion\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workplace\code\GIT\C\C\c6_\main.c -o CMakeFiles\G.dir\c6_\main.c.s

# Object files for target G
G_OBJECTS = \
"CMakeFiles/G.dir/c6_/main.c.obj"

# External object files for target G
G_EXTERNAL_OBJECTS =

G.exe: CMakeFiles/G.dir/c6_/main.c.obj
G.exe: CMakeFiles/G.dir/build.make
G.exe: CMakeFiles/G.dir/linklibs.rsp
G.exe: CMakeFiles/G.dir/objects1.rsp
G.exe: CMakeFiles/G.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\workplace\code\GIT\C\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable G.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\G.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/G.dir/build: G.exe

.PHONY : CMakeFiles/G.dir/build

CMakeFiles/G.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\G.dir\cmake_clean.cmake
.PHONY : CMakeFiles/G.dir/clean

CMakeFiles/G.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\workplace\code\GIT\C\C D:\workplace\code\GIT\C\C D:\workplace\code\GIT\C\C\cmake-build-debug D:\workplace\code\GIT\C\C\cmake-build-debug D:\workplace\code\GIT\C\C\cmake-build-debug\CMakeFiles\G.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/G.dir/depend

