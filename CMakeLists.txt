# Minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Project name and language
project(LIBRARY-MANAGEMENT-SYSTEM LANGUAGES CXX)

# Set the output directory for the binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include directories
include_directories(inc)

# Source files
file(GLOB SOURCES "src/*.cpp")

# Create the executable
add_executable(MyExecutable ${SOURCES})
