#include <TableMath.h>

float TableMathMax::compute() const
{
    if (Map->empty())
        return std::numeric_limits<double>::quiet_NaN();

    float max = std::numeric_limits<float>::lowest();
    
    for (const auto& [key, value] : *Map)
    {
        if (value > max)
        {
            max = value;
        }
    }

    return max;
}

float TableMathMin::compute() const
{
    if (Map->empty())
        return std::numeric_limits<double>::quiet_NaN();

    float min = std::numeric_limits<float>::max();

    for (const auto& [key, value] : *Map)
    {
        if (value < min)
        {
            min = value;
        }
    }

    return min;
}

float TableMathMedia::compute() const
{
    if (Map->empty())
        return std::numeric_limits<double>::quiet_NaN();
    TableMathSomma sommaCalc(Map);

    return sommaCalc.compute() / Map->size();
}

float TableMathSomma::compute() const
{
    float sum = 0;

    for (const auto& [key, value] : *Map)
    {
        sum += value;
    }

    return sum;
}

