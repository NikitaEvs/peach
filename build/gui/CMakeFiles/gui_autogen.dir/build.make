# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/runner/work/peach/peach

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/runner/work/peach/peach/build

# Utility rule file for gui_autogen.

# Include the progress variables for this target.
include gui/CMakeFiles/gui_autogen.dir/progress.make

gui/CMakeFiles/gui_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/runner/work/peach/peach/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target gui"
	cd /home/runner/work/peach/peach/build/gui && /usr/local/bin/cmake -E cmake_autogen /home/runner/work/peach/peach/build/gui/CMakeFiles/gui_autogen.dir/AutogenInfo.json ""

gui_autogen: gui/CMakeFiles/gui_autogen
gui_autogen: gui/CMakeFiles/gui_autogen.dir/build.make

.PHONY : gui_autogen

# Rule to build all files generated by this target.
gui/CMakeFiles/gui_autogen.dir/build: gui_autogen

.PHONY : gui/CMakeFiles/gui_autogen.dir/build

gui/CMakeFiles/gui_autogen.dir/clean:
	cd /home/runner/work/peach/peach/build/gui && $(CMAKE_COMMAND) -P CMakeFiles/gui_autogen.dir/cmake_clean.cmake
.PHONY : gui/CMakeFiles/gui_autogen.dir/clean

gui/CMakeFiles/gui_autogen.dir/depend:
	cd /home/runner/work/peach/peach/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/runner/work/peach/peach /home/runner/work/peach/peach/gui /home/runner/work/peach/peach/build /home/runner/work/peach/peach/build/gui /home/runner/work/peach/peach/build/gui/CMakeFiles/gui_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gui/CMakeFiles/gui_autogen.dir/depend

