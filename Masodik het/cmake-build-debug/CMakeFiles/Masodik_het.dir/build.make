# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Peter\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6911.21\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Peter\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6911.21\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Programozas\Orai munka\learning-cpp\Masodik het"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Programozas\Orai munka\learning-cpp\Masodik het\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Masodik_het.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Masodik_het.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Masodik_het.dir/flags.make

CMakeFiles/Masodik_het.dir/main.cpp.obj: CMakeFiles/Masodik_het.dir/flags.make
CMakeFiles/Masodik_het.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Programozas\Orai munka\learning-cpp\Masodik het\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Masodik_het.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Masodik_het.dir\main.cpp.obj -c "D:\Programozas\Orai munka\learning-cpp\Masodik het\main.cpp"

CMakeFiles/Masodik_het.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Masodik_het.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Programozas\Orai munka\learning-cpp\Masodik het\main.cpp" > CMakeFiles\Masodik_het.dir\main.cpp.i

CMakeFiles/Masodik_het.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Masodik_het.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Programozas\Orai munka\learning-cpp\Masodik het\main.cpp" -o CMakeFiles\Masodik_het.dir\main.cpp.s

# Object files for target Masodik_het
Masodik_het_OBJECTS = \
"CMakeFiles/Masodik_het.dir/main.cpp.obj"

# External object files for target Masodik_het
Masodik_het_EXTERNAL_OBJECTS =

Masodik_het.exe: CMakeFiles/Masodik_het.dir/main.cpp.obj
Masodik_het.exe: CMakeFiles/Masodik_het.dir/build.make
Masodik_het.exe: CMakeFiles/Masodik_het.dir/linklibs.rsp
Masodik_het.exe: CMakeFiles/Masodik_het.dir/objects1.rsp
Masodik_het.exe: CMakeFiles/Masodik_het.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Programozas\Orai munka\learning-cpp\Masodik het\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Masodik_het.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Masodik_het.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Masodik_het.dir/build: Masodik_het.exe

.PHONY : CMakeFiles/Masodik_het.dir/build

CMakeFiles/Masodik_het.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Masodik_het.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Masodik_het.dir/clean

CMakeFiles/Masodik_het.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Programozas\Orai munka\learning-cpp\Masodik het" "D:\Programozas\Orai munka\learning-cpp\Masodik het" "D:\Programozas\Orai munka\learning-cpp\Masodik het\cmake-build-debug" "D:\Programozas\Orai munka\learning-cpp\Masodik het\cmake-build-debug" "D:\Programozas\Orai munka\learning-cpp\Masodik het\cmake-build-debug\CMakeFiles\Masodik_het.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Masodik_het.dir/depend

