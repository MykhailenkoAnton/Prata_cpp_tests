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
CMAKE_SOURCE_DIR = /home/anton/Documents/Prata_cpp_tests/Tests/G10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anton/Documents/Prata_cpp_tests/Tests/G10/build

# Include any dependencies generated for this target.
include CMakeFiles/stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack.dir/flags.make

CMakeFiles/stack.dir/stack.cpp.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/stack.cpp.o: ../stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton/Documents/Prata_cpp_tests/Tests/G10/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stack.dir/stack.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stack.dir/stack.cpp.o -c /home/anton/Documents/Prata_cpp_tests/Tests/G10/stack.cpp

CMakeFiles/stack.dir/stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack.dir/stack.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton/Documents/Prata_cpp_tests/Tests/G10/stack.cpp > CMakeFiles/stack.dir/stack.cpp.i

CMakeFiles/stack.dir/stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack.dir/stack.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton/Documents/Prata_cpp_tests/Tests/G10/stack.cpp -o CMakeFiles/stack.dir/stack.cpp.s

CMakeFiles/stack.dir/stacker.cpp.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/stacker.cpp.o: ../stacker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton/Documents/Prata_cpp_tests/Tests/G10/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/stack.dir/stacker.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stack.dir/stacker.cpp.o -c /home/anton/Documents/Prata_cpp_tests/Tests/G10/stacker.cpp

CMakeFiles/stack.dir/stacker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack.dir/stacker.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton/Documents/Prata_cpp_tests/Tests/G10/stacker.cpp > CMakeFiles/stack.dir/stacker.cpp.i

CMakeFiles/stack.dir/stacker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack.dir/stacker.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton/Documents/Prata_cpp_tests/Tests/G10/stacker.cpp -o CMakeFiles/stack.dir/stacker.cpp.s

# Object files for target stack
stack_OBJECTS = \
"CMakeFiles/stack.dir/stack.cpp.o" \
"CMakeFiles/stack.dir/stacker.cpp.o"

# External object files for target stack
stack_EXTERNAL_OBJECTS =

stack: CMakeFiles/stack.dir/stack.cpp.o
stack: CMakeFiles/stack.dir/stacker.cpp.o
stack: CMakeFiles/stack.dir/build.make
stack: CMakeFiles/stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anton/Documents/Prata_cpp_tests/Tests/G10/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable stack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack.dir/build: stack

.PHONY : CMakeFiles/stack.dir/build

CMakeFiles/stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stack.dir/clean

CMakeFiles/stack.dir/depend:
	cd /home/anton/Documents/Prata_cpp_tests/Tests/G10/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anton/Documents/Prata_cpp_tests/Tests/G10 /home/anton/Documents/Prata_cpp_tests/Tests/G10 /home/anton/Documents/Prata_cpp_tests/Tests/G10/build /home/anton/Documents/Prata_cpp_tests/Tests/G10/build /home/anton/Documents/Prata_cpp_tests/Tests/G10/build/CMakeFiles/stack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stack.dir/depend

