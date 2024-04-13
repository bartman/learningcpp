#include <gtest/gtest.h>

#include "utils.hpp"

TEST(utils, foo)
{
    utils::foo();
}

TEST(utils, bar)
{
    EXPECT_EQ(1, 1);
}
