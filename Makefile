# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/xu/Documents/Doctorat/git_workplace/triple_store_optjoin_merge_reasoner_bitmap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/xu/Documents/Doctorat/git_workplace/triple_store_optjoin_merge_reasoner_bitmap

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/xu/Documents/Doctorat/git_workplace/triple_store_optjoin_merge_reasoner_bitmap/CMakeFiles /Users/xu/Documents/Doctorat/git_workplace/triple_store_optjoin_merge_reasoner_bitmap/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/xu/Documents/Doctorat/git_workplace/triple_store_optjoin_merge_reasoner_bitmap/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named succinct_edge

# Build rule for target.
succinct_edge: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 succinct_edge
.PHONY : succinct_edge

# fast build rule for target.
succinct_edge/fast:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/build
.PHONY : succinct_edge/fast

BitMap.o: BitMap.cpp.o

.PHONY : BitMap.o

# target to build an object file
BitMap.cpp.o:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/BitMap.cpp.o
.PHONY : BitMap.cpp.o

BitMap.i: BitMap.cpp.i

.PHONY : BitMap.i

# target to preprocess a source file
BitMap.cpp.i:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/BitMap.cpp.i
.PHONY : BitMap.cpp.i

BitMap.s: BitMap.cpp.s

.PHONY : BitMap.s

# target to generate assembly for a file
BitMap.cpp.s:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/BitMap.cpp.s
.PHONY : BitMap.cpp.s

Dictionary.o: Dictionary.cpp.o

.PHONY : Dictionary.o

# target to build an object file
Dictionary.cpp.o:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/Dictionary.cpp.o
.PHONY : Dictionary.cpp.o

Dictionary.i: Dictionary.cpp.i

.PHONY : Dictionary.i

# target to preprocess a source file
Dictionary.cpp.i:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/Dictionary.cpp.i
.PHONY : Dictionary.cpp.i

Dictionary.s: Dictionary.cpp.s

.PHONY : Dictionary.s

# target to generate assembly for a file
Dictionary.cpp.s:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/Dictionary.cpp.s
.PHONY : Dictionary.cpp.s

JoinLine.o: JoinLine.cpp.o

.PHONY : JoinLine.o

# target to build an object file
JoinLine.cpp.o:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/JoinLine.cpp.o
.PHONY : JoinLine.cpp.o

JoinLine.i: JoinLine.cpp.i

.PHONY : JoinLine.i

# target to preprocess a source file
JoinLine.cpp.i:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/JoinLine.cpp.i
.PHONY : JoinLine.cpp.i

JoinLine.s: JoinLine.cpp.s

.PHONY : JoinLine.s

# target to generate assembly for a file
JoinLine.cpp.s:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/JoinLine.cpp.s
.PHONY : JoinLine.cpp.s

JoinTable.o: JoinTable.cpp.o

.PHONY : JoinTable.o

# target to build an object file
JoinTable.cpp.o:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/JoinTable.cpp.o
.PHONY : JoinTable.cpp.o

JoinTable.i: JoinTable.cpp.i

.PHONY : JoinTable.i

# target to preprocess a source file
JoinTable.cpp.i:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/JoinTable.cpp.i
.PHONY : JoinTable.cpp.i

JoinTable.s: JoinTable.cpp.s

.PHONY : JoinTable.s

# target to generate assembly for a file
JoinTable.cpp.s:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/JoinTable.cpp.s
.PHONY : JoinTable.cpp.s

JoinVariables.o: JoinVariables.cpp.o

.PHONY : JoinVariables.o

# target to build an object file
JoinVariables.cpp.o:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/JoinVariables.cpp.o
.PHONY : JoinVariables.cpp.o

JoinVariables.i: JoinVariables.cpp.i

.PHONY : JoinVariables.i

# target to preprocess a source file
JoinVariables.cpp.i:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/JoinVariables.cpp.i
.PHONY : JoinVariables.cpp.i

JoinVariables.s: JoinVariables.cpp.s

.PHONY : JoinVariables.s

# target to generate assembly for a file
JoinVariables.cpp.s:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/JoinVariables.cpp.s
.PHONY : JoinVariables.cpp.s

LiteMatDictionary.o: LiteMatDictionary.cpp.o

.PHONY : LiteMatDictionary.o

# target to build an object file
LiteMatDictionary.cpp.o:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/LiteMatDictionary.cpp.o
.PHONY : LiteMatDictionary.cpp.o

LiteMatDictionary.i: LiteMatDictionary.cpp.i

.PHONY : LiteMatDictionary.i

# target to preprocess a source file
LiteMatDictionary.cpp.i:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/LiteMatDictionary.cpp.i
.PHONY : LiteMatDictionary.cpp.i

LiteMatDictionary.s: LiteMatDictionary.cpp.s

.PHONY : LiteMatDictionary.s

# target to generate assembly for a file
LiteMatDictionary.cpp.s:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/LiteMatDictionary.cpp.s
.PHONY : LiteMatDictionary.cpp.s

QueryEngine.o: QueryEngine.cpp.o

.PHONY : QueryEngine.o

# target to build an object file
QueryEngine.cpp.o:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/QueryEngine.cpp.o
.PHONY : QueryEngine.cpp.o

QueryEngine.i: QueryEngine.cpp.i

.PHONY : QueryEngine.i

# target to preprocess a source file
QueryEngine.cpp.i:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/QueryEngine.cpp.i
.PHONY : QueryEngine.cpp.i

QueryEngine.s: QueryEngine.cpp.s

.PHONY : QueryEngine.s

# target to generate assembly for a file
QueryEngine.cpp.s:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/QueryEngine.cpp.s
.PHONY : QueryEngine.cpp.s

RDFStorage.o: RDFStorage.cpp.o

.PHONY : RDFStorage.o

# target to build an object file
RDFStorage.cpp.o:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/RDFStorage.cpp.o
.PHONY : RDFStorage.cpp.o

RDFStorage.i: RDFStorage.cpp.i

.PHONY : RDFStorage.i

# target to preprocess a source file
RDFStorage.cpp.i:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/RDFStorage.cpp.i
.PHONY : RDFStorage.cpp.i

RDFStorage.s: RDFStorage.cpp.s

.PHONY : RDFStorage.s

# target to generate assembly for a file
RDFStorage.cpp.s:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/RDFStorage.cpp.s
.PHONY : RDFStorage.cpp.s

RDFTypeStore.o: RDFTypeStore.cpp.o

.PHONY : RDFTypeStore.o

# target to build an object file
RDFTypeStore.cpp.o:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/RDFTypeStore.cpp.o
.PHONY : RDFTypeStore.cpp.o

RDFTypeStore.i: RDFTypeStore.cpp.i

.PHONY : RDFTypeStore.i

# target to preprocess a source file
RDFTypeStore.cpp.i:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/RDFTypeStore.cpp.i
.PHONY : RDFTypeStore.cpp.i

RDFTypeStore.s: RDFTypeStore.cpp.s

.PHONY : RDFTypeStore.s

# target to generate assembly for a file
RDFTypeStore.cpp.s:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/RDFTypeStore.cpp.s
.PHONY : RDFTypeStore.cpp.s

RankBaseElement.o: RankBaseElement.cpp.o

.PHONY : RankBaseElement.o

# target to build an object file
RankBaseElement.cpp.o:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/RankBaseElement.cpp.o
.PHONY : RankBaseElement.cpp.o

RankBaseElement.i: RankBaseElement.cpp.i

.PHONY : RankBaseElement.i

# target to preprocess a source file
RankBaseElement.cpp.i:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/RankBaseElement.cpp.i
.PHONY : RankBaseElement.cpp.i

RankBaseElement.s: RankBaseElement.cpp.s

.PHONY : RankBaseElement.s

# target to generate assembly for a file
RankBaseElement.cpp.s:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/RankBaseElement.cpp.s
.PHONY : RankBaseElement.cpp.s

TriplePattern.o: TriplePattern.cpp.o

.PHONY : TriplePattern.o

# target to build an object file
TriplePattern.cpp.o:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/TriplePattern.cpp.o
.PHONY : TriplePattern.cpp.o

TriplePattern.i: TriplePattern.cpp.i

.PHONY : TriplePattern.i

# target to preprocess a source file
TriplePattern.cpp.i:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/TriplePattern.cpp.i
.PHONY : TriplePattern.cpp.i

TriplePattern.s: TriplePattern.cpp.s

.PHONY : TriplePattern.s

# target to generate assembly for a file
TriplePattern.cpp.s:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/TriplePattern.cpp.s
.PHONY : TriplePattern.cpp.s

TripleStore.o: TripleStore.cpp.o

.PHONY : TripleStore.o

# target to build an object file
TripleStore.cpp.o:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/TripleStore.cpp.o
.PHONY : TripleStore.cpp.o

TripleStore.i: TripleStore.cpp.i

.PHONY : TripleStore.i

# target to preprocess a source file
TripleStore.cpp.i:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/TripleStore.cpp.i
.PHONY : TripleStore.cpp.i

TripleStore.s: TripleStore.cpp.s

.PHONY : TripleStore.s

# target to generate assembly for a file
TripleStore.cpp.s:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/TripleStore.cpp.s
.PHONY : TripleStore.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/succinct_edge.dir/build.make CMakeFiles/succinct_edge.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... succinct_edge"
	@echo "... BitMap.o"
	@echo "... BitMap.i"
	@echo "... BitMap.s"
	@echo "... Dictionary.o"
	@echo "... Dictionary.i"
	@echo "... Dictionary.s"
	@echo "... JoinLine.o"
	@echo "... JoinLine.i"
	@echo "... JoinLine.s"
	@echo "... JoinTable.o"
	@echo "... JoinTable.i"
	@echo "... JoinTable.s"
	@echo "... JoinVariables.o"
	@echo "... JoinVariables.i"
	@echo "... JoinVariables.s"
	@echo "... LiteMatDictionary.o"
	@echo "... LiteMatDictionary.i"
	@echo "... LiteMatDictionary.s"
	@echo "... QueryEngine.o"
	@echo "... QueryEngine.i"
	@echo "... QueryEngine.s"
	@echo "... RDFStorage.o"
	@echo "... RDFStorage.i"
	@echo "... RDFStorage.s"
	@echo "... RDFTypeStore.o"
	@echo "... RDFTypeStore.i"
	@echo "... RDFTypeStore.s"
	@echo "... RankBaseElement.o"
	@echo "... RankBaseElement.i"
	@echo "... RankBaseElement.s"
	@echo "... TriplePattern.o"
	@echo "... TriplePattern.i"
	@echo "... TriplePattern.s"
	@echo "... TripleStore.o"
	@echo "... TripleStore.i"
	@echo "... TripleStore.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

