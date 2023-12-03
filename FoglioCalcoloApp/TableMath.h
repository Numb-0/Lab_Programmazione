#ifndef TABLE_MATH_H
#define TABLE_MATH_H

#include <map>
#include <algorithm>
#include <numeric>
#include <limits>

class TableMath {
public:
    TableMath(){};
    ~TableMath(){};

    // Math functions
    float getMaxValue(std::map<int,float> TableVal);
    float getMinValue(std::map<int,float> TableVal);
    float getMediaValue(std::map<int,float> TableVal);
    float getSommaValue(std::map<int,float> TableVal);

};

#endif // TABLE_MATH_H