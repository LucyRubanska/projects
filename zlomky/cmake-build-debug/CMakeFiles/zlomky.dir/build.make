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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\avar\CLionProjects\zlomky

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\avar\CLionProjects\zlomky\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/zlomky.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/zlomky.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zlomky.dir/flags.make

CMakeFiles/zlomky.dir/main.cpp.obj: CMakeFiles/zlomky.dir/flags.make
CMakeFiles/zlomky.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\avar\CLionProjects\zlomky\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/zlomky.dir/main.cpp.obj"
	C:\PROGRA~1\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\zlomky.dir\main.cpp.obj -c C:\Users\avar\CLionProjects\zlomky\main.cpp

CMakeFiles/zlomky.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zlomky.dir/main.cpp.i"
	C:\PROGRA~1\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\avar\CLionProjects\zlomky\main.cpp > CMakeFiles\zlomky.dir\main.cpp.i

CMakeFiles/zlomky.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zlomky.dir/main.cpp.s"
	C:\PROGRA~1\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\avar\CLionProjects\zlomky\main.cpp -o CMakeFiles\zlomky.dir\main.cpp.s

# Object files for target zlomky
zlomky_OBJECTS = \
"CMakeFiles/zlomky.dir/main.cpp.obj"

# External object files for target zlomky
zlomky_EXTERNAL_OBJECTS =

zlomky.exe: CMakeFiles/zlomky.dir/main.cpp.obj
zlomky.exe: CMakeFiles/zlomky.dir/build.make
zlomky.exe: CMakeFiles/zlomky.dir/linklibs.rsp
zlomky.exe: CMakeFiles/zlomky.dir/objects1.rsp
zlomky.exe: CMakeFiles/zlomky.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\avar\CLionProjects\zlomky\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable zlomky.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\zlomky.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zlomky.dir/build: zlomky.exe

.PHONY : CMakeFiles/zlomky.dir/build

CMakeFiles/zlomky.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\zlomky.dir\cmake_clean.cmake
.PHONY : CMakeFiles/zlomky.dir/clean

CMakeFiles/zlomky.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\avar\CLionProjects\zlomky C:\Users\avar\CLionProjects\zlomky C:\Users\avar\CLionProjects\zlomky\cmake-build-debug C:\Users\avar\CLionProjects\zlomky\cmake-build-debug C:\Users\avar\CLionProjects\zlomky\cmake-build-debug\CMakeFiles\zlomky.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/zlomky.dir/depend

