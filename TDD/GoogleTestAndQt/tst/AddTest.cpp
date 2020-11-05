#include "gtest/gtest.h"
#include "Calc.h"

TEST(AddTest, test1) {
    //arrange
    //act
    //assert
    EXPECT_EQ (Clac::Mul2 (0),  0);
    EXPECT_EQ (Clac::Mul2 (10), 20);
    EXPECT_EQ (Clac::Mul2 (50), 100);
}
