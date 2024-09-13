# Link GoogleTest to the test executable
add_executable(runTests main_test.cpp)
target_link_libraries(runTests gtest gtest_main)

# Ensure the math functions are available for tests
target_link_libraries(runTests math_functions)

# Enable CMP0079 policy to allow linking across directories
cmake_policy(SET CMP0079 NEW)

# Add the test cases to the CTest framework
add_test(NAME runTests COMMAND runTests)
