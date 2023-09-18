#ifndef MATH_HEADER_H
#define MATH_HEADER_H

#include <vector>
#include <algorithm>
// support library for vector operation

float getVectorMax(const std::vector<float>& v)
{
    return *max_element(v.begin(), v.end());
}

#endif // MATH_HEADER_H
