#include <TableMath.h>

#include <TableMath.h>

float TableMath::getMaxValue(const std::map<int, float>& TableVal) const
{
    if (TableVal.empty())
        return std::numeric_limits<double>::quiet_NaN();

    float max = std::numeric_limits<float>::lowest();
    
    for (const auto& [key, value] : TableVal)
    {
        if (value > max)
        {
            max = value;
        }
    }

    return max;
}

float TableMath::getMinValue(const std::map<int, float>& TableVal) const
{
    if (TableVal.empty())
        return std::numeric_limits<double>::quiet_NaN();

    float min = std::numeric_limits<float>::max();

    for (const auto& [key, value] : TableVal)
    {
        if (value < min)
        {
            min = value;
        }
    }

    return min;
}

float TableMath::getMediaValue(const std::map<int, float>& TableVal) const
{
    if (TableVal.empty())
        return std::numeric_limits<double>::quiet_NaN();

    return getSommaValue(TableVal) / TableVal.size();
}

float TableMath::getSommaValue(const std::map<int, float>& TableVal) const
{
    float sum = 0;

    for (const auto& [key, value] : TableVal)
    {
        sum += value;
    }

    return sum;
}

