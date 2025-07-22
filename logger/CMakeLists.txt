cmake_minimum_required(VERSION 3.10)
project(Log4cplusExample)

# C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Try to find log4cplus via pkg-config
find_package(PkgConfig REQUIRED)
pkg_check_modules(LOG4CPLUS REQUIRED log4cplus)

# Include and link directories
include_directories(${LOG4CPLUS_INCLUDE_DIRS})
link_directories(${LOG4CPLUS_LIBRARY_DIRS})

# Source files
add_executable(log4cplus_demo src/basic_logger.cpp)

# Link with log4cplus (and pthread if needed)
target_link_libraries(log4cplus_demo
    ${LOG4CPLUS_LIBRARIES}
    pthread
)
