cmake_minimum_required(VERSION 3.10)

# Project Name
project(CalculatorWithQt)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt libraries
find_package(Qt5 REQUIRED COMPONENTS Widgets)

# Include Directories
include_directories(include)

# Source Files
set(SOURCES
    src/addition.cpp
    src/subtraction.cpp
    src/multiplication.cpp
    src/division.cpp
    src/main.cpp
)

# Add Executable
add_executable(calculator_qt ${SOURCES})

# Link Qt Libraries
target_link_libraries(calculator_qt Qt5::Widgets)
