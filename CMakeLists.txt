cmake_minimum_required(VERSION 3.10)

# Project Name
project(CalculatorProject)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include Directory
include_directories(include)

# Source Files
set(SOURCES
    src/addition.cpp
    src/subtraction.cpp
    src/multiplication.cpp
    src/division.cpp
    src/main.cpp
)

# Executable
add_executable(calculator ${SOURCES})
