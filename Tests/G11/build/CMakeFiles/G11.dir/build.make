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
CMAKE_SOURCE_DIR = /home/anton/Documents/Prata_cpp_tests/Tests/G11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anton/Documents/Prata_cpp_tests/Tests/G11/build

# Include any dependencies generated for this target.
include CMakeFiles/G11.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/G11.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/G11.dir/flags.make

CMakeFiles/G11.dir/vector.cpp.o: CMakeFiles/G11.dir/flags.make
CMakeFiles/G11.dir/vector.cpp.o: ../vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton/Documents/Prata_cpp_tests/Tests/G11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/G11.dir/vector.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G11.dir/vector.cpp.o -c /home/anton/Documents/Prata_cpp_tests/Tests/G11/vector.cpp

CMakeFiles/G11.dir/vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G11.dir/vector.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton/Documents/Prata_cpp_tests/Tests/G11/vector.cpp > CMakeFiles/G11.dir/vector.cpp.i

CMakeFiles/G11.dir/vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G11.dir/vector.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton/Documents/Prata_cpp_tests/Tests/G11/vector.cpp -o CMakeFiles/G11.dir/vector.cpp.s

CMakeFiles/G11.dir/usevector.cpp.o: CMakeFiles/G11.dir/flags.make
CMakeFiles/G11.dir/usevector.cpp.o: ../usevector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton/Documents/Prata_cpp_tests/Tests/G11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/G11.dir/usevector.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G11.dir/usevector.cpp.o -c /home/anton/Documents/Prata_cpp_tests/Tests/G11/usevector.cpp

CMakeFiles/G11.dir/usevector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G11.dir/usevector.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton/Documents/Prata_cpp_tests/Tests/G11/usevector.cpp > CMakeFiles/G11.dir/usevector.cpp.i

CMakeFiles/G11.dir/usevector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G11.dir/usevector.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton/Documents/Prata_cpp_tests/Tests/G11/usevector.cpp -o CMakeFiles/G11.dir/usevector.cpp.s

# Object files for target G11
G11_OBJECTS = \
"CMakeFiles/G11.dir/vector.cpp.o" \
"CMakeFiles/G11.dir/usevector.cpp.o"

# External object files for target G11
G11_EXTERNAL_OBJECTS =

G11: CMakeFiles/G11.dir/vector.cpp.o
G11: CMakeFiles/G11.dir/usevector.cpp.o
G11: CMakeFiles/G11.dir/build.make
G11: CMakeFiles/G11.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anton/Documents/Prata_cpp_tests/Tests/G11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable G11"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/G11.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/G11.dir/build: G11

.PHONY : CMakeFiles/G11.dir/build

CMakeFiles/G11.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/G11.dir/cmake_clean.cmake
.PHONY : CMakeFiles/G11.dir/clean

CMakeFiles/G11.dir/depend:
	cd /home/anton/Documents/Prata_cpp_tests/Tests/G11/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anton/Documents/Prata_cpp_tests/Tests/G11 /home/anton/Documents/Prata_cpp_tests/Tests/G11 /home/anton/Documents/Prata_cpp_tests/Tests/G11/build /home/anton/Documents/Prata_cpp_tests/Tests/G11/build /home/anton/Documents/Prata_cpp_tests/Tests/G11/build/CMakeFiles/G11.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/G11.dir/depend

