cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(TrollCase VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
add_executable(TrollCase src/main.cpp src/casers.cpp)

# Add header directories
target_include_directories(TrollCase PUBLIC "${PROJECT_BINARY_DIR}")
