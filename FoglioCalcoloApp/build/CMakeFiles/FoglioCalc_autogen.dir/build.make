# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcoloApp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcoloApp\build

# Utility rule file for FoglioCalc_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/FoglioCalc_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FoglioCalc_autogen.dir/progress.make

CMakeFiles/FoglioCalc_autogen: FoglioCalc_autogen/timestamp

FoglioCalc_autogen/timestamp: C:/msys64/mingw64/bin/moc.exe
FoglioCalc_autogen/timestamp: CMakeFiles/FoglioCalc_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcoloApp\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target FoglioCalc"
	C:\msys64\mingw64\bin\cmake.exe -E cmake_autogen C:/Users/cosim/Desktop/Lab_Programmazione/FoglioCalcoloApp/build/CMakeFiles/FoglioCalc_autogen.dir/AutogenInfo.json Debug
	C:\msys64\mingw64\bin\cmake.exe -E touch C:/Users/cosim/Desktop/Lab_Programmazione/FoglioCalcoloApp/build/FoglioCalc_autogen/timestamp

FoglioCalc_autogen: CMakeFiles/FoglioCalc_autogen
FoglioCalc_autogen: FoglioCalc_autogen/timestamp
FoglioCalc_autogen: CMakeFiles/FoglioCalc_autogen.dir/build.make
.PHONY : FoglioCalc_autogen

# Rule to build all files generated by this target.
CMakeFiles/FoglioCalc_autogen.dir/build: FoglioCalc_autogen
.PHONY : CMakeFiles/FoglioCalc_autogen.dir/build

CMakeFiles/FoglioCalc_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\FoglioCalc_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/FoglioCalc_autogen.dir/clean

CMakeFiles/FoglioCalc_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcoloApp C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcoloApp C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcoloApp\build C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcoloApp\build C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcoloApp\build\CMakeFiles\FoglioCalc_autogen.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/FoglioCalc_autogen.dir/depend

