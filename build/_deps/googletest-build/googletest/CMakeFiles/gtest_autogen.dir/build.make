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
CMAKE_SOURCE_DIR = C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcolo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\cosim\Desktop\Lab_Programmazione\build

# Utility rule file for gtest_autogen.

# Include any custom commands dependencies for this target.
include _deps/googletest-build/googletest/CMakeFiles/gtest_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/googletest-build/googletest/CMakeFiles/gtest_autogen.dir/progress.make

_deps/googletest-build/googletest/CMakeFiles/gtest_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=C:\Users\cosim\Desktop\Lab_Programmazione\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target gtest"
	cd /d C:\Users\cosim\Desktop\Lab_Programmazione\build\_deps\googletest-build\googletest && C:\msys64\mingw64\bin\cmake.exe -E cmake_autogen C:/Users/cosim/Desktop/Lab_Programmazione/build/_deps/googletest-build/googletest/CMakeFiles/gtest_autogen.dir/AutogenInfo.json Debug

gtest_autogen: _deps/googletest-build/googletest/CMakeFiles/gtest_autogen
gtest_autogen: _deps/googletest-build/googletest/CMakeFiles/gtest_autogen.dir/build.make
.PHONY : gtest_autogen

# Rule to build all files generated by this target.
_deps/googletest-build/googletest/CMakeFiles/gtest_autogen.dir/build: gtest_autogen
.PHONY : _deps/googletest-build/googletest/CMakeFiles/gtest_autogen.dir/build

_deps/googletest-build/googletest/CMakeFiles/gtest_autogen.dir/clean:
	cd /d C:\Users\cosim\Desktop\Lab_Programmazione\build\_deps\googletest-build\googletest && $(CMAKE_COMMAND) -P CMakeFiles\gtest_autogen.dir\cmake_clean.cmake
.PHONY : _deps/googletest-build/googletest/CMakeFiles/gtest_autogen.dir/clean

_deps/googletest-build/googletest/CMakeFiles/gtest_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcolo C:\Users\cosim\Desktop\Lab_Programmazione\build\_deps\googletest-src\googletest C:\Users\cosim\Desktop\Lab_Programmazione\build C:\Users\cosim\Desktop\Lab_Programmazione\build\_deps\googletest-build\googletest C:\Users\cosim\Desktop\Lab_Programmazione\build\_deps\googletest-build\googletest\CMakeFiles\gtest_autogen.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/googletest-build/googletest/CMakeFiles/gtest_autogen.dir/depend

