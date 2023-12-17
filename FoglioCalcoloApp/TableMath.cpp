#include <TableMath.h>

float TableMath::getMaxValue(const std::map<int,float>& TableVal) const
{
    float max = std::numeric_limits<float>::lowest(); 
    
    for (const auto& pair : TableVal)
    {
        if (pair.second > max)
        {
            max = pair.second; 
        }
    }
    // case blank input
    if (max == std::numeric_limits<float>::lowest())
        return std::numeric_limits<double>::quiet_NaN();
        
    return max;
}

float TableMath::getMinValue(const std::map<int,float>& TableVal) const 
{
    float min = std::numeric_limits<float>::max();
    for (const auto& pair : TableVal)
    {
        if (pair.second < min)
        {
            min = pair.second; 
        }
        else if (min == std::numeric_limits<float>::max())
        {
            min = std::numeric_limits<float>::quiet_NaN();
        }
    }
    // case blank input
    if (min == std::numeric_limits<float>::max())
        return std::numeric_limits<double>::quiet_NaN();
    
    return min;
}

float TableMath::getMediaValue(const std::map<int,float>& TableVal) const 
{
    return getSommaValue(TableVal)/TableVal.size();
}

float TableMath::getSommaValue(const std::map<int,float>& TableVal) const 
{
    float Sum = 0;
    for (const auto& pair : TableVal)
    {
        Sum += pair.second;
    }

    return Sum;
}
