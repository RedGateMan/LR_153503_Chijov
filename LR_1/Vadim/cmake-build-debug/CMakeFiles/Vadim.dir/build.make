# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = E:\Clion\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = E:\Clion\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\LR's\LR_1\Vadim"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\LR's\LR_1\Vadim\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Vadim.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Vadim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Vadim.dir/flags.make

CMakeFiles/Vadim.dir/main.cpp.obj: CMakeFiles/Vadim.dir/flags.make
CMakeFiles/Vadim.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\LR's\LR_1\Vadim\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Vadim.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Vadim.dir\main.cpp.obj -c "E:\LR's\LR_1\Vadim\main.cpp"

CMakeFiles/Vadim.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Vadim.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\LR's\LR_1\Vadim\main.cpp" > CMakeFiles\Vadim.dir\main.cpp.i

CMakeFiles/Vadim.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Vadim.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\LR's\LR_1\Vadim\main.cpp" -o CMakeFiles\Vadim.dir\main.cpp.s

# Object files for target Vadim
Vadim_OBJECTS = \
"CMakeFiles/Vadim.dir/main.cpp.obj"

# External object files for target Vadim
Vadim_EXTERNAL_OBJECTS =

Vadim.exe: CMakeFiles/Vadim.dir/main.cpp.obj
Vadim.exe: CMakeFiles/Vadim.dir/build.make
Vadim.exe: CMakeFiles/Vadim.dir/linklibs.rsp
Vadim.exe: CMakeFiles/Vadim.dir/objects1.rsp
Vadim.exe: CMakeFiles/Vadim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\LR's\LR_1\Vadim\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Vadim.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Vadim.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Vadim.dir/build: Vadim.exe
.PHONY : CMakeFiles/Vadim.dir/build

CMakeFiles/Vadim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Vadim.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Vadim.dir/clean

CMakeFiles/Vadim.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\LR's\LR_1\Vadim" "E:\LR's\LR_1\Vadim" "E:\LR's\LR_1\Vadim\cmake-build-debug" "E:\LR's\LR_1\Vadim\cmake-build-debug" "E:\LR's\LR_1\Vadim\cmake-build-debug\CMakeFiles\Vadim.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Vadim.dir/depend

