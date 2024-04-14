#include <gtest/gtest.h>

#include "utils.hpp"

TEST(utils, foo)
{
    utils::foo();
}

TEST(utils, bar)
{
    EXPECT_EQ(utils::bar(1,2,3), 6);
}
