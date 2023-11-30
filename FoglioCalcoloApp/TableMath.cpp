#include "TableMath.h"
#include <iostream>

void TableMath::placeValues(float value, int index)
{
    if (TableValues.find(index) == TableValues.end() && !Tab->item(index,0)->text().isEmpty())
    {
        // case data index still not used
        TableValues.insert({index,value});
    }
    else if (Tab->item(index,0)->text().isEmpty())
    {
        // case data erased from table
        // std::cout << "empty";
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
    // case blank input
    if (max == std::numeric_limits<float>::lowest())
        return std::numeric_limits<double>::quiet_NaN();
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

void TableMath::setupTableArg()
{
    Tab->blockSignals(true);

    Tab->setItem(0, 1, Somma);
    Somma->setFlags(Somma->flags() &  ~Qt::ItemIsEditable);

    Tab->setItem(0, 2, Media);
    Media->setFlags(Media->flags() &  ~Qt::ItemIsEditable);
    
    Tab->setItem(0, 3, Min);
    Min->setFlags(Min->flags() &  ~Qt::ItemIsEditable);
    
    Tab->setItem(0, 4, Max);
    Max->setFlags(Max->flags() &  ~Qt::ItemIsEditable);

    Tab->setItem(0, 5, Counter);
    Counter->setFlags(Counter->flags() &  ~Qt::ItemIsEditable);

    // setting other cells as not editable
    for (int i = 1; i < Tab->rowCount(); i++){
        for (int j = 1; j < Tab->columnCount(); j++){
            QTableWidgetItem* item = new QTableWidgetItem(Qt::DisplayRole);
            Tab->setItem(i, j, item);
            Tab->item(i,j)->setFlags(item->flags() &  ~Qt::ItemIsEditable);
        }
    }

    Tab->blockSignals(false);
}

void TableMath::setTableArg()
{
    Tab->blockSignals(true);
    if(!TableValues.empty())
    {
        Max->setText(QString::number(getMaxValue()));
        Min->setText(QString::number(getMinValue()));
        Media->setText(QString::number(getMediaValue()));
        Somma->setText(QString::number(getSommaValue()));
        Counter->setText(QString::number(changes_counter));
    }
    else
    {
        // removed all the items in the table
        // reset Items text
        Max->setText(QString());
        Min->setText(QString());
        Media->setText(QString());
        Somma->setText(QString());
        Counter->setText(QString::number(changes_counter));
    }

    Tab->blockSignals(false);
}
