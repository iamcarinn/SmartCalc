# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/calculator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/calculator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/calculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calculator.dir/flags.make

CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o: calculator_autogen/mocs_compilation.cpp
CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o -MF CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o -c /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug/calculator_autogen/mocs_compilation.cpp

CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug/calculator_autogen/mocs_compilation.cpp > CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.i

CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug/calculator_autogen/mocs_compilation.cpp -o CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.s

CMakeFiles/calculator.dir/main.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/main.cpp.o: /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/main.cpp
CMakeFiles/calculator.dir/main.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/calculator.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/main.cpp.o -MF CMakeFiles/calculator.dir/main.cpp.o.d -o CMakeFiles/calculator.dir/main.cpp.o -c /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/main.cpp

CMakeFiles/calculator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/main.cpp > CMakeFiles/calculator.dir/main.cpp.i

CMakeFiles/calculator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/main.cpp -o CMakeFiles/calculator.dir/main.cpp.s

CMakeFiles/calculator.dir/mainwindow.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/mainwindow.cpp.o: /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/mainwindow.cpp
CMakeFiles/calculator.dir/mainwindow.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/calculator.dir/mainwindow.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/mainwindow.cpp.o -MF CMakeFiles/calculator.dir/mainwindow.cpp.o.d -o CMakeFiles/calculator.dir/mainwindow.cpp.o -c /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/mainwindow.cpp

CMakeFiles/calculator.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/mainwindow.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/mainwindow.cpp > CMakeFiles/calculator.dir/mainwindow.cpp.i

CMakeFiles/calculator.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/mainwindow.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/mainwindow.cpp -o CMakeFiles/calculator.dir/mainwindow.cpp.s

CMakeFiles/calculator.dir/qcustomplot.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/qcustomplot.cpp.o: /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/qcustomplot.cpp
CMakeFiles/calculator.dir/qcustomplot.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/calculator.dir/qcustomplot.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/qcustomplot.cpp.o -MF CMakeFiles/calculator.dir/qcustomplot.cpp.o.d -o CMakeFiles/calculator.dir/qcustomplot.cpp.o -c /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/qcustomplot.cpp

CMakeFiles/calculator.dir/qcustomplot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/qcustomplot.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/qcustomplot.cpp > CMakeFiles/calculator.dir/qcustomplot.cpp.i

CMakeFiles/calculator.dir/qcustomplot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/qcustomplot.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/qcustomplot.cpp -o CMakeFiles/calculator.dir/qcustomplot.cpp.s

CMakeFiles/calculator.dir/s21_calc.c.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/s21_calc.c.o: /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/s21_calc.c
CMakeFiles/calculator.dir/s21_calc.c.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/calculator.dir/s21_calc.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/calculator.dir/s21_calc.c.o -MF CMakeFiles/calculator.dir/s21_calc.c.o.d -o CMakeFiles/calculator.dir/s21_calc.c.o -c /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/s21_calc.c

CMakeFiles/calculator.dir/s21_calc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/calculator.dir/s21_calc.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/s21_calc.c > CMakeFiles/calculator.dir/s21_calc.c.i

CMakeFiles/calculator.dir/s21_calc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/calculator.dir/s21_calc.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator/s21_calc.c -o CMakeFiles/calculator.dir/s21_calc.c.s

# Object files for target calculator
calculator_OBJECTS = \
"CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/calculator.dir/main.cpp.o" \
"CMakeFiles/calculator.dir/mainwindow.cpp.o" \
"CMakeFiles/calculator.dir/qcustomplot.cpp.o" \
"CMakeFiles/calculator.dir/s21_calc.c.o"

# External object files for target calculator
calculator_EXTERNAL_OBJECTS =

calculator.app/Contents/MacOS/calculator: CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o
calculator.app/Contents/MacOS/calculator: CMakeFiles/calculator.dir/main.cpp.o
calculator.app/Contents/MacOS/calculator: CMakeFiles/calculator.dir/mainwindow.cpp.o
calculator.app/Contents/MacOS/calculator: CMakeFiles/calculator.dir/qcustomplot.cpp.o
calculator.app/Contents/MacOS/calculator: CMakeFiles/calculator.dir/s21_calc.c.o
calculator.app/Contents/MacOS/calculator: CMakeFiles/calculator.dir/build.make
calculator.app/Contents/MacOS/calculator: /usr/local/lib/QtPrintSupport.framework/Versions/A/QtPrintSupport
calculator.app/Contents/MacOS/calculator: /usr/local/lib/QtWidgets.framework/Versions/A/QtWidgets
calculator.app/Contents/MacOS/calculator: /usr/local/lib/QtGui.framework/Versions/A/QtGui
calculator.app/Contents/MacOS/calculator: /usr/local/lib/QtCore.framework/Versions/A/QtCore
calculator.app/Contents/MacOS/calculator: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/usr/lib/libcups.tbd
calculator.app/Contents/MacOS/calculator: CMakeFiles/calculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable calculator.app/Contents/MacOS/calculator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calculator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calculator.dir/build: calculator.app/Contents/MacOS/calculator
.PHONY : CMakeFiles/calculator.dir/build

CMakeFiles/calculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calculator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calculator.dir/clean

CMakeFiles/calculator.dir/depend:
	cd /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/calculator /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug /Users/nutmegha/myprojects/C7_SmartCalc_v1.0-1/src/build-calculator-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles/calculator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calculator.dir/depend

