# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anton/Documents/Prata_cpp_tests/Tests/G10l8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anton/Documents/Prata_cpp_tests/Tests/G10l8/build

# Include any dependencies generated for this target.
include CMakeFiles/G10l8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/G10l8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/G10l8.dir/flags.make

CMakeFiles/G10l8.dir/list.cpp.o: CMakeFiles/G10l8.dir/flags.make
CMakeFiles/G10l8.dir/list.cpp.o: ../list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton/Documents/Prata_cpp_tests/Tests/G10l8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/G10l8.dir/list.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G10l8.dir/list.cpp.o -c /home/anton/Documents/Prata_cpp_tests/Tests/G10l8/list.cpp

CMakeFiles/G10l8.dir/list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G10l8.dir/list.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton/Documents/Prata_cpp_tests/Tests/G10l8/list.cpp > CMakeFiles/G10l8.dir/list.cpp.i

CMakeFiles/G10l8.dir/list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G10l8.dir/list.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton/Documents/Prata_cpp_tests/Tests/G10l8/list.cpp -o CMakeFiles/G10l8.dir/list.cpp.s

CMakeFiles/G10l8.dir/runlist.cpp.o: CMakeFiles/G10l8.dir/flags.make
CMakeFiles/G10l8.dir/runlist.cpp.o: ../runlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton/Documents/Prata_cpp_tests/Tests/G10l8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/G10l8.dir/runlist.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G10l8.dir/runlist.cpp.o -c /home/anton/Documents/Prata_cpp_tests/Tests/G10l8/runlist.cpp

CMakeFiles/G10l8.dir/runlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G10l8.dir/runlist.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton/Documents/Prata_cpp_tests/Tests/G10l8/runlist.cpp > CMakeFiles/G10l8.dir/runlist.cpp.i

CMakeFiles/G10l8.dir/runlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G10l8.dir/runlist.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton/Documents/Prata_cpp_tests/Tests/G10l8/runlist.cpp -o CMakeFiles/G10l8.dir/runlist.cpp.s

# Object files for target G10l8
G10l8_OBJECTS = \
"CMakeFiles/G10l8.dir/list.cpp.o" \
"CMakeFiles/G10l8.dir/runlist.cpp.o"

# External object files for target G10l8
G10l8_EXTERNAL_OBJECTS =

G10l8: CMakeFiles/G10l8.dir/list.cpp.o
G10l8: CMakeFiles/G10l8.dir/runlist.cpp.o
G10l8: CMakeFiles/G10l8.dir/build.make
G10l8: CMakeFiles/G10l8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anton/Documents/Prata_cpp_tests/Tests/G10l8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable G10l8"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/G10l8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/G10l8.dir/build: G10l8

.PHONY : CMakeFiles/G10l8.dir/build

CMakeFiles/G10l8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/G10l8.dir/cmake_clean.cmake
.PHONY : CMakeFiles/G10l8.dir/clean

CMakeFiles/G10l8.dir/depend:
	cd /home/anton/Documents/Prata_cpp_tests/Tests/G10l8/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anton/Documents/Prata_cpp_tests/Tests/G10l8 /home/anton/Documents/Prata_cpp_tests/Tests/G10l8 /home/anton/Documents/Prata_cpp_tests/Tests/G10l8/build /home/anton/Documents/Prata_cpp_tests/Tests/G10l8/build /home/anton/Documents/Prata_cpp_tests/Tests/G10l8/build/CMakeFiles/G10l8.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/G10l8.dir/depend
