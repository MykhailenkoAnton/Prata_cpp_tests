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
CMAKE_SOURCE_DIR = /home/anton/Documents/Prata_cpp_tests/Tests/G10l1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anton/Documents/Prata_cpp_tests/Tests/G10l1/build

# Include any dependencies generated for this target.
include CMakeFiles/bankA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bankA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bankA.dir/flags.make

CMakeFiles/bankA.dir/req.cpp.o: CMakeFiles/bankA.dir/flags.make
CMakeFiles/bankA.dir/req.cpp.o: ../req.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton/Documents/Prata_cpp_tests/Tests/G10l1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bankA.dir/req.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bankA.dir/req.cpp.o -c /home/anton/Documents/Prata_cpp_tests/Tests/G10l1/req.cpp

CMakeFiles/bankA.dir/req.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bankA.dir/req.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton/Documents/Prata_cpp_tests/Tests/G10l1/req.cpp > CMakeFiles/bankA.dir/req.cpp.i

CMakeFiles/bankA.dir/req.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bankA.dir/req.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton/Documents/Prata_cpp_tests/Tests/G10l1/req.cpp -o CMakeFiles/bankA.dir/req.cpp.s

CMakeFiles/bankA.dir/requisites.cpp.o: CMakeFiles/bankA.dir/flags.make
CMakeFiles/bankA.dir/requisites.cpp.o: ../requisites.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anton/Documents/Prata_cpp_tests/Tests/G10l1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/bankA.dir/requisites.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bankA.dir/requisites.cpp.o -c /home/anton/Documents/Prata_cpp_tests/Tests/G10l1/requisites.cpp

CMakeFiles/bankA.dir/requisites.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bankA.dir/requisites.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anton/Documents/Prata_cpp_tests/Tests/G10l1/requisites.cpp > CMakeFiles/bankA.dir/requisites.cpp.i

CMakeFiles/bankA.dir/requisites.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bankA.dir/requisites.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anton/Documents/Prata_cpp_tests/Tests/G10l1/requisites.cpp -o CMakeFiles/bankA.dir/requisites.cpp.s

# Object files for target bankA
bankA_OBJECTS = \
"CMakeFiles/bankA.dir/req.cpp.o" \
"CMakeFiles/bankA.dir/requisites.cpp.o"

# External object files for target bankA
bankA_EXTERNAL_OBJECTS =

bankA: CMakeFiles/bankA.dir/req.cpp.o
bankA: CMakeFiles/bankA.dir/requisites.cpp.o
bankA: CMakeFiles/bankA.dir/build.make
bankA: CMakeFiles/bankA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anton/Documents/Prata_cpp_tests/Tests/G10l1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable bankA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bankA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bankA.dir/build: bankA

.PHONY : CMakeFiles/bankA.dir/build

CMakeFiles/bankA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bankA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bankA.dir/clean

CMakeFiles/bankA.dir/depend:
	cd /home/anton/Documents/Prata_cpp_tests/Tests/G10l1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anton/Documents/Prata_cpp_tests/Tests/G10l1 /home/anton/Documents/Prata_cpp_tests/Tests/G10l1 /home/anton/Documents/Prata_cpp_tests/Tests/G10l1/build /home/anton/Documents/Prata_cpp_tests/Tests/G10l1/build /home/anton/Documents/Prata_cpp_tests/Tests/G10l1/build/CMakeFiles/bankA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bankA.dir/depend

