// test/main_test.cpp
#include <gtest/gtest.h>
#include "math_functions.h"

// Test cases
TEST(MathFunctionsTest, AddTest) {
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(-1, -1), -2);
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(MathFunctionsTest, SubtractTest) {
    EXPECT_EQ(subtract(5, 3), 2);
    EXPECT_EQ(subtract(-1, -1), 0);
    EXPECT_EQ(subtract(-1, 1), -2);
}

TEST(MathFunctionsTest, MultiplyTest) {
    EXPECT_EQ(multiply(2, 3), 6);
    EXPECT_EQ(multiply(-2, 3), -6);
    EXPECT_EQ(multiply(-2, -3), 6);
}

TEST(MathFunctionsTest, DivideTest) {
    EXPECT_DOUBLE_EQ(divide(6, 3), 2.0);
    EXPECT_DOUBLE_EQ(divide(-6, 3), -2.0);
    EXPECT_DOUBLE_EQ(divide(-6, -3), 2.0);

    // Expect exception for division by zero
    EXPECT_THROW(divide(1, 0), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
