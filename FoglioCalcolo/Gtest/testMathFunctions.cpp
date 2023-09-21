#include <gtest/gtest.h>
#include "../mathHeader.h"

// creating test subjects to call functions

TEST(test_max_function, normalInputs)
{
    std::vector<float> v = {555.66, 421.4, 432, 1000, 41};
    EXPECT_EQ(getVectorMax(v), 1000);
}

TEST(test_min_function, normalInputs)
{
    std::vector<float> v = {555.66, 421.4, 432, 1000, 41};
    EXPECT_EQ(getVectorMin(v), 41);
}

TEST(test_min_function, negativeInput)
{
    std::vector<float> v = {555.66, 421.4, 0, 1000, 41, -10};
    EXPECT_EQ(getVectorMin(v), -10);
}

TEST(test_mean_function, normalInputs)
{
    std::vector<float> v = {555.66, 421.4, 432, 1000, 41};
    float mean = (555.66 + 421.4 + 432 + 1000 + 41)/5;
    EXPECT_NEAR(getVectorMean(v), mean, 0.001);
}

TEST(test_Somma_function, normalInputs)
{
    std::vector<float> v = {555.66, 421.4, 432, 1000, 41};
    float Somma = 555.66 + 421.4 + 432 + 1000 + 41;
    EXPECT_EQ(getVectorSomma(v), Somma);
}

TEST(test_Somma_function, negativelInputs)
{
    std::vector<float> v = {555.66, 421.4, -450, 1000, 41};
    float Somma = 555.66 + 421.4 + -450 + 1000 + 41;
    EXPECT_NEAR(getVectorSomma(v), Somma, 0.001);
}