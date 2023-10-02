#include "TableMath.h"

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
        Somma->setFlags(Somma->flags() &  ~Qt::ItemIsEditable);

        Tab->setItem(0, 2, Media);
        Media->setFlags(Media->flags() &  ~Qt::ItemIsEditable);
        
        Tab->setItem(0, 3, Min);
        Min->setFlags(Min->flags() &  ~Qt::ItemIsEditable);
        
        Tab->setItem(0, 4, Max);
        Max->setFlags(Max->flags() &  ~Qt::ItemIsEditable);
        
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

void TableMath::notify()
{
    for (auto o : observers)
    {
        o->update();
    }
}

void TableMath::addObserver(Observer* o)
{
    observers.push_back(o);
}

void TableMath::removeObserver(Observer* o)
{
    auto it = std::find(observers.begin(), observers.end(), o);
    if (it != observers.end())
    {
        observers.erase(it);
    }
}
