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
CMAKE_SOURCE_DIR = "E:\LR's\LR_1\LR_8"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\LR's\LR_1\LR_8\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/LR_8.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/LR_8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LR_8.dir/flags.make

CMakeFiles/LR_8.dir/main.cpp.obj: CMakeFiles/LR_8.dir/flags.make
CMakeFiles/LR_8.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\LR's\LR_1\LR_8\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LR_8.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LR_8.dir\main.cpp.obj -c "E:\LR's\LR_1\LR_8\main.cpp"

CMakeFiles/LR_8.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LR_8.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\LR's\LR_1\LR_8\main.cpp" > CMakeFiles\LR_8.dir\main.cpp.i

CMakeFiles/LR_8.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LR_8.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\LR's\LR_1\LR_8\main.cpp" -o CMakeFiles\LR_8.dir\main.cpp.s

# Object files for target LR_8
LR_8_OBJECTS = \
"CMakeFiles/LR_8.dir/main.cpp.obj"

# External object files for target LR_8
LR_8_EXTERNAL_OBJECTS =

LR_8.exe: CMakeFiles/LR_8.dir/main.cpp.obj
LR_8.exe: CMakeFiles/LR_8.dir/build.make
LR_8.exe: CMakeFiles/LR_8.dir/linklibs.rsp
LR_8.exe: CMakeFiles/LR_8.dir/objects1.rsp
LR_8.exe: CMakeFiles/LR_8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\LR's\LR_1\LR_8\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LR_8.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LR_8.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LR_8.dir/build: LR_8.exe
.PHONY : CMakeFiles/LR_8.dir/build

CMakeFiles/LR_8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LR_8.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LR_8.dir/clean

CMakeFiles/LR_8.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\LR's\LR_1\LR_8" "E:\LR's\LR_1\LR_8" "E:\LR's\LR_1\LR_8\cmake-build-debug" "E:\LR's\LR_1\LR_8\cmake-build-debug" "E:\LR's\LR_1\LR_8\cmake-build-debug\CMakeFiles\LR_8.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/LR_8.dir/depend

