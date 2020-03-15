#include "gtest/gtest.h"
#include "lib_1/func1.hpp"

TEST(lib1_test, simple)
{
  EXPECT_EQ(print(),"Hello World!");
}
