#include <gtest/gtest.h>
#include "../mathHeader.h"

// creating test subjects to call functions

TEST(test_max_function, normalInputs)
{
    std::vector<float> v = {555.66, 421.4, 432, 1000, 41};
    EXPECT_EQ(getVectorMax(v), 1000);
}