# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.27.8/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.27.8/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/cecilia/Desktop/AP4CppYate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/cecilia/Desktop/AP4CppYate

# Include any dependencies generated for this target.
include CMakeFiles/hello.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hello.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello.dir/flags.make

CMakeFiles/hello.dir/appThermostat_main.cpp.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/appThermostat_main.cpp.o: appThermostat_main.cpp
CMakeFiles/hello.dir/appThermostat_main.cpp.o: CMakeFiles/hello.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/cecilia/Desktop/AP4CppYate/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello.dir/appThermostat_main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello.dir/appThermostat_main.cpp.o -MF CMakeFiles/hello.dir/appThermostat_main.cpp.o.d -o CMakeFiles/hello.dir/appThermostat_main.cpp.o -c /Users/cecilia/Desktop/AP4CppYate/appThermostat_main.cpp

CMakeFiles/hello.dir/appThermostat_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/hello.dir/appThermostat_main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cecilia/Desktop/AP4CppYate/appThermostat_main.cpp > CMakeFiles/hello.dir/appThermostat_main.cpp.i

CMakeFiles/hello.dir/appThermostat_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/hello.dir/appThermostat_main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cecilia/Desktop/AP4CppYate/appThermostat_main.cpp -o CMakeFiles/hello.dir/appThermostat_main.cpp.s

CMakeFiles/hello.dir/appThermostat.cpp.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/appThermostat.cpp.o: appThermostat.cpp
CMakeFiles/hello.dir/appThermostat.cpp.o: CMakeFiles/hello.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/cecilia/Desktop/AP4CppYate/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hello.dir/appThermostat.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello.dir/appThermostat.cpp.o -MF CMakeFiles/hello.dir/appThermostat.cpp.o.d -o CMakeFiles/hello.dir/appThermostat.cpp.o -c /Users/cecilia/Desktop/AP4CppYate/appThermostat.cpp

CMakeFiles/hello.dir/appThermostat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/hello.dir/appThermostat.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cecilia/Desktop/AP4CppYate/appThermostat.cpp > CMakeFiles/hello.dir/appThermostat.cpp.i

CMakeFiles/hello.dir/appThermostat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/hello.dir/appThermostat.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cecilia/Desktop/AP4CppYate/appThermostat.cpp -o CMakeFiles/hello.dir/appThermostat.cpp.s

CMakeFiles/hello.dir/Chaudiere.cpp.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/Chaudiere.cpp.o: Chaudiere.cpp
CMakeFiles/hello.dir/Chaudiere.cpp.o: CMakeFiles/hello.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/cecilia/Desktop/AP4CppYate/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hello.dir/Chaudiere.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello.dir/Chaudiere.cpp.o -MF CMakeFiles/hello.dir/Chaudiere.cpp.o.d -o CMakeFiles/hello.dir/Chaudiere.cpp.o -c /Users/cecilia/Desktop/AP4CppYate/Chaudiere.cpp

CMakeFiles/hello.dir/Chaudiere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/hello.dir/Chaudiere.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cecilia/Desktop/AP4CppYate/Chaudiere.cpp > CMakeFiles/hello.dir/Chaudiere.cpp.i

CMakeFiles/hello.dir/Chaudiere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/hello.dir/Chaudiere.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cecilia/Desktop/AP4CppYate/Chaudiere.cpp -o CMakeFiles/hello.dir/Chaudiere.cpp.s

CMakeFiles/hello.dir/DummyCapteurTemp.cpp.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/DummyCapteurTemp.cpp.o: DummyCapteurTemp.cpp
CMakeFiles/hello.dir/DummyCapteurTemp.cpp.o: CMakeFiles/hello.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/cecilia/Desktop/AP4CppYate/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/hello.dir/DummyCapteurTemp.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello.dir/DummyCapteurTemp.cpp.o -MF CMakeFiles/hello.dir/DummyCapteurTemp.cpp.o.d -o CMakeFiles/hello.dir/DummyCapteurTemp.cpp.o -c /Users/cecilia/Desktop/AP4CppYate/DummyCapteurTemp.cpp

CMakeFiles/hello.dir/DummyCapteurTemp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/hello.dir/DummyCapteurTemp.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cecilia/Desktop/AP4CppYate/DummyCapteurTemp.cpp > CMakeFiles/hello.dir/DummyCapteurTemp.cpp.i

CMakeFiles/hello.dir/DummyCapteurTemp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/hello.dir/DummyCapteurTemp.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cecilia/Desktop/AP4CppYate/DummyCapteurTemp.cpp -o CMakeFiles/hello.dir/DummyCapteurTemp.cpp.s

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/appThermostat_main.cpp.o" \
"CMakeFiles/hello.dir/appThermostat.cpp.o" \
"CMakeFiles/hello.dir/Chaudiere.cpp.o" \
"CMakeFiles/hello.dir/DummyCapteurTemp.cpp.o"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

hello: CMakeFiles/hello.dir/appThermostat_main.cpp.o
hello: CMakeFiles/hello.dir/appThermostat.cpp.o
hello: CMakeFiles/hello.dir/Chaudiere.cpp.o
hello: CMakeFiles/hello.dir/DummyCapteurTemp.cpp.o
hello: CMakeFiles/hello.dir/build.make
hello: CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/cecilia/Desktop/AP4CppYate/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable hello"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello.dir/build: hello
.PHONY : CMakeFiles/hello.dir/build

CMakeFiles/hello.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello.dir/clean

CMakeFiles/hello.dir/depend:
	cd /Users/cecilia/Desktop/AP4CppYate && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/cecilia/Desktop/AP4CppYate /Users/cecilia/Desktop/AP4CppYate /Users/cecilia/Desktop/AP4CppYate /Users/cecilia/Desktop/AP4CppYate /Users/cecilia/Desktop/AP4CppYate/CMakeFiles/hello.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/hello.dir/depend

