# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = C:\msys64\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\msys64\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalc\build

# Utility rule file for MathTest_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/MathTest_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MathTest_autogen.dir/progress.make

CMakeFiles/MathTest_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalc\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target MathTest"
	C:\msys64\mingw64\bin\cmake.exe -E cmake_autogen C:/Users/cosim/Desktop/Lab_Programmazione/FoglioCalc/build/CMakeFiles/MathTest_autogen.dir/AutogenInfo.json Debug

MathTest_autogen: CMakeFiles/MathTest_autogen
MathTest_autogen: CMakeFiles/MathTest_autogen.dir/build.make
.PHONY : MathTest_autogen

# Rule to build all files generated by this target.
CMakeFiles/MathTest_autogen.dir/build: MathTest_autogen
.PHONY : CMakeFiles/MathTest_autogen.dir/build

CMakeFiles/MathTest_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MathTest_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MathTest_autogen.dir/clean

CMakeFiles/MathTest_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalc C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalc C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalc\build C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalc\build C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalc\build\CMakeFiles\MathTest_autogen.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/MathTest_autogen.dir/depend

