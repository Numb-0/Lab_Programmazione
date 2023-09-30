#include "TableMath.h"
#include <iostream>

void TableMath::placeValues(float value, int index)
{
    if (TableValues.find(index) == TableValues.end())
    {
        // case data index still not used
        TableValues.insert({index,value});
    }
    else if (Tab->item(index,0)->text().isEmpty())
    {
        // case data erased from table
        TableValues.erase(index);
    } 
    else
    {
        // case data got edited 
        TableValues.at(index) = value;  
    }
}

float TableMath::getMaxValue()
{
    float max = std::numeric_limits<float>::lowest(); 
    
    for (const auto& pair : TableValues)
    {
        if (pair.second > max)
        {
            max = pair.second; 
        }
    }
    
    return max;
}

float TableMath::getMinValue()
{
    float min = std::numeric_limits<float>::max();
    
    for (const auto& pair : TableValues)
    {
        if (pair.second < min)
        {
            min = pair.second; 
        }
    }
    
    return min;
}

float TableMath::getMediaValue()
{
    return getSommaValue()/TableValues.size();
}

float TableMath::getSommaValue()
{
    float Sum = 0;
    for (const auto& pair : TableValues)
    {
        Sum += pair.second;
    }
    return Sum;
}

void TableMath::setupTableArg(bool setup_done)
{
    if (setup_done == false)
    {   
        Tab->blockSignals(true);
        Tab->setItem(0, 1, Somma);
        Tab->setItem(0, 2, Media);
        Tab->setItem(0, 3, Min);
        Tab->setItem(0, 4, Max);
        Tab->blockSignals(false);
    }

}

void TableMath::setTableArg()
{
    Tab->blockSignals(true);
    Max->setText(QString::number(getMaxValue()));
    Min->setText(QString::number(getMinValue()));
    Media->setText(QString::number(getMediaValue()));
    Somma->setText(QString::number(getSommaValue()));
    Tab->blockSignals(false);
}