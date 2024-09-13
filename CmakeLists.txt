cmake_minimum_required(VERSION 3.10)
set(GOOGLETEST_VERSION 1.15.2)
project(test1)

enable_testing() #to  discover tests in test explorer 
# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Add GoogleTest
add_subdirectory(googletest)

include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>


# Add the main executable
add_executable(main_test main_test.cpp)


target_link_libraries(main_test PRIVATE gtest) # link google test to this executable

include(GoogleTest)
gtest_discover_tests(main_test) # discovers tests by asking the compiled test executable to enumerate its tests