# CMakeList.txt for compiling all .cpp files from the current directory
# and link them to the executable into the build directory
# All intermediate files are generated into the build directory
#
# (c) 2023 by Dom Ginhac (dginhac@u-bourgogne.fr)
#
# The CMakeLists.txt file must be in the root directory of the project where the source files are located
# Usage (in a terminal in the root directory of the project):
# cmake -S . -B build	# generate the build files in the build directory
# cmake --build build	# compile the project
# ./bin/app			# run the executable


# set the minimum required version of cmake
cmake_minimum_required(VERSION 3.15)

# set the project name and version
project(app
        VERSION 0.0.1
	    DESCRIPTION "A first example project with CMAKE and C++"
	    LANGUAGES CXX)

# set the C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
# require the C++ standard
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the name of the executable
set(TARGET app)

# Define the list of source files to compile
# Replace the following list (file1.cpp, ...) by your cpp files to compile
set(SOURCE_FILES 
	file1.cpp 
	file2.cpp 
	file3.cpp)

# create the executable from the source files
add_executable(${TARGET} ${SOURCE_FILES})

# Set the output directories for the build and binary files
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
