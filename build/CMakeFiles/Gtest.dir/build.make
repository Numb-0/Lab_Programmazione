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

# Include any dependencies generated for this target.
include CMakeFiles/Gtest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Gtest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Gtest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Gtest.dir/flags.make

CMakeFiles/Gtest.dir/Gtest_autogen/mocs_compilation.cpp.obj: CMakeFiles/Gtest.dir/flags.make
CMakeFiles/Gtest.dir/Gtest_autogen/mocs_compilation.cpp.obj: CMakeFiles/Gtest.dir/includes_CXX.rsp
CMakeFiles/Gtest.dir/Gtest_autogen/mocs_compilation.cpp.obj: Gtest_autogen/mocs_compilation.cpp
CMakeFiles/Gtest.dir/Gtest_autogen/mocs_compilation.cpp.obj: CMakeFiles/Gtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\cosim\Desktop\Lab_Programmazione\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Gtest.dir/Gtest_autogen/mocs_compilation.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Gtest.dir/Gtest_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\Gtest.dir\Gtest_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\Gtest.dir\Gtest_autogen\mocs_compilation.cpp.obj -c C:\Users\cosim\Desktop\Lab_Programmazione\build\Gtest_autogen\mocs_compilation.cpp

CMakeFiles/Gtest.dir/Gtest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Gtest.dir/Gtest_autogen/mocs_compilation.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\cosim\Desktop\Lab_Programmazione\build\Gtest_autogen\mocs_compilation.cpp > CMakeFiles\Gtest.dir\Gtest_autogen\mocs_compilation.cpp.i

CMakeFiles/Gtest.dir/Gtest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Gtest.dir/Gtest_autogen/mocs_compilation.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\cosim\Desktop\Lab_Programmazione\build\Gtest_autogen\mocs_compilation.cpp -o CMakeFiles\Gtest.dir\Gtest_autogen\mocs_compilation.cpp.s

CMakeFiles/Gtest.dir/Gtest/testMathFunctions.cpp.obj: CMakeFiles/Gtest.dir/flags.make
CMakeFiles/Gtest.dir/Gtest/testMathFunctions.cpp.obj: CMakeFiles/Gtest.dir/includes_CXX.rsp
CMakeFiles/Gtest.dir/Gtest/testMathFunctions.cpp.obj: C:/Users/cosim/Desktop/Lab_Programmazione/FoglioCalcolo/Gtest/testMathFunctions.cpp
CMakeFiles/Gtest.dir/Gtest/testMathFunctions.cpp.obj: CMakeFiles/Gtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\cosim\Desktop\Lab_Programmazione\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Gtest.dir/Gtest/testMathFunctions.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Gtest.dir/Gtest/testMathFunctions.cpp.obj -MF CMakeFiles\Gtest.dir\Gtest\testMathFunctions.cpp.obj.d -o CMakeFiles\Gtest.dir\Gtest\testMathFunctions.cpp.obj -c C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcolo\Gtest\testMathFunctions.cpp

CMakeFiles/Gtest.dir/Gtest/testMathFunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Gtest.dir/Gtest/testMathFunctions.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcolo\Gtest\testMathFunctions.cpp > CMakeFiles\Gtest.dir\Gtest\testMathFunctions.cpp.i

CMakeFiles/Gtest.dir/Gtest/testMathFunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Gtest.dir/Gtest/testMathFunctions.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcolo\Gtest\testMathFunctions.cpp -o CMakeFiles\Gtest.dir\Gtest\testMathFunctions.cpp.s

# Object files for target Gtest
Gtest_OBJECTS = \
"CMakeFiles/Gtest.dir/Gtest_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/Gtest.dir/Gtest/testMathFunctions.cpp.obj"

# External object files for target Gtest
Gtest_EXTERNAL_OBJECTS =

Gtest.exe: CMakeFiles/Gtest.dir/Gtest_autogen/mocs_compilation.cpp.obj
Gtest.exe: CMakeFiles/Gtest.dir/Gtest/testMathFunctions.cpp.obj
Gtest.exe: CMakeFiles/Gtest.dir/build.make
Gtest.exe: lib/libgtest_main.a
Gtest.exe: C:/msys64/mingw64/lib/libQt5Widgets.dll.a
Gtest.exe: lib/libgtest.a
Gtest.exe: C:/msys64/mingw64/lib/libQt5Gui.dll.a
Gtest.exe: C:/msys64/mingw64/lib/libQt5Core.dll.a
Gtest.exe: CMakeFiles/Gtest.dir/linkLibs.rsp
Gtest.exe: CMakeFiles/Gtest.dir/objects1.rsp
Gtest.exe: CMakeFiles/Gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\cosim\Desktop\Lab_Programmazione\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Gtest.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Gtest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Gtest.dir/build: Gtest.exe
.PHONY : CMakeFiles/Gtest.dir/build

CMakeFiles/Gtest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Gtest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Gtest.dir/clean

CMakeFiles/Gtest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcolo C:\Users\cosim\Desktop\Lab_Programmazione\FoglioCalcolo C:\Users\cosim\Desktop\Lab_Programmazione\build C:\Users\cosim\Desktop\Lab_Programmazione\build C:\Users\cosim\Desktop\Lab_Programmazione\build\CMakeFiles\Gtest.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Gtest.dir/depend

