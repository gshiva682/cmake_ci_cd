cmake_minimum_required(VERSION 3.10)
project(test1)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Add GoogleTest
add_subdirectory(googletest)

# Add subdirectory for tests
add_subdirectory(test)

# Add the main executable
add_executable(main main.cpp math_functions.cpp)
