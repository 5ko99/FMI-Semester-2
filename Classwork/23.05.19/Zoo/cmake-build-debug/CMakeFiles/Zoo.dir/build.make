# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /var/lib/snapd/snap/clion/70/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /var/lib/snapd/snap/clion/70/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Zoo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Zoo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Zoo.dir/flags.make

CMakeFiles/Zoo.dir/main.cpp.o: CMakeFiles/Zoo.dir/flags.make
CMakeFiles/Zoo.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Zoo.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zoo.dir/main.cpp.o -c /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/main.cpp

CMakeFiles/Zoo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zoo.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/main.cpp > CMakeFiles/Zoo.dir/main.cpp.i

CMakeFiles/Zoo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zoo.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/main.cpp -o CMakeFiles/Zoo.dir/main.cpp.s

CMakeFiles/Zoo.dir/Animal.cpp.o: CMakeFiles/Zoo.dir/flags.make
CMakeFiles/Zoo.dir/Animal.cpp.o: ../Animal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Zoo.dir/Animal.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zoo.dir/Animal.cpp.o -c /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/Animal.cpp

CMakeFiles/Zoo.dir/Animal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zoo.dir/Animal.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/Animal.cpp > CMakeFiles/Zoo.dir/Animal.cpp.i

CMakeFiles/Zoo.dir/Animal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zoo.dir/Animal.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/Animal.cpp -o CMakeFiles/Zoo.dir/Animal.cpp.s

CMakeFiles/Zoo.dir/Dog.cpp.o: CMakeFiles/Zoo.dir/flags.make
CMakeFiles/Zoo.dir/Dog.cpp.o: ../Dog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Zoo.dir/Dog.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zoo.dir/Dog.cpp.o -c /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/Dog.cpp

CMakeFiles/Zoo.dir/Dog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zoo.dir/Dog.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/Dog.cpp > CMakeFiles/Zoo.dir/Dog.cpp.i

CMakeFiles/Zoo.dir/Dog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zoo.dir/Dog.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/Dog.cpp -o CMakeFiles/Zoo.dir/Dog.cpp.s

# Object files for target Zoo
Zoo_OBJECTS = \
"CMakeFiles/Zoo.dir/main.cpp.o" \
"CMakeFiles/Zoo.dir/Animal.cpp.o" \
"CMakeFiles/Zoo.dir/Dog.cpp.o"

# External object files for target Zoo
Zoo_EXTERNAL_OBJECTS =

Zoo: CMakeFiles/Zoo.dir/main.cpp.o
Zoo: CMakeFiles/Zoo.dir/Animal.cpp.o
Zoo: CMakeFiles/Zoo.dir/Dog.cpp.o
Zoo: CMakeFiles/Zoo.dir/build.make
Zoo: CMakeFiles/Zoo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Zoo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Zoo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Zoo.dir/build: Zoo

.PHONY : CMakeFiles/Zoo.dir/build

CMakeFiles/Zoo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Zoo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Zoo.dir/clean

CMakeFiles/Zoo.dir/depend:
	cd /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/cmake-build-debug /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/cmake-build-debug /home/petko/Workspace/FMI-Semester-2/Classwork/23.05.19/Zoo/cmake-build-debug/CMakeFiles/Zoo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Zoo.dir/depend

