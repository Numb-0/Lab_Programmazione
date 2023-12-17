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
    float getMaxValue(const std::map<int,float>& TableVal) const;
    float getMinValue(const std::map<int,float>& TableVal) const;
    float getMediaValue(const std::map<int,float>& TableVal) const;
    float getSommaValue(const std::map<int,float>& TableVal) const;

};

#endif // TABLE_MATH_H
