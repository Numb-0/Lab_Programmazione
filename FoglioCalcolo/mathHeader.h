#ifndef MATH_HEADER_H
#define MATH_HEADER_H

#include <vector>
#include <algorithm>
#include <numeric>

// support library for vector operation

float getVectorMax(const std::vector<float>& v)
{
    return *max_element(v.begin(), v.end());
}

float getVectorMin(const std::vector<float>& v)
{
    return *min_element(v.begin(), v.end());
}

float getVectorMean(const std::vector<float>& v)
{
    return std::reduce(v.begin(), v.end())/v.size();
}

float getVectorSomma(const std::vector<float>& v)
{
    return std::reduce(v.begin(), v.end());
}
#endif // MATH_HEADER_H
