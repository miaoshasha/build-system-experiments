#include "gtest/gtest.h"
#include "lib_1/func1.hpp"

TEST(lib1_test, simple)
{
  int a = 1;
  EXPECT_EQ(a, 1);
  EXPECT_TRUE(true);
}
