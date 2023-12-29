#include "TableController.h"
#include <iostream>

void TableController::placeValues(float value, int index)
{
    if (TableValues.find(index) == TableValues.end() && !Tab->item(index,0)->text().isEmpty())
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

void TableController::setupTableArg()
{
    Tab->blockSignals(true);

    // giving position and flags to the created items 
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

void TableController::setTableArg()
{
    Tab->blockSignals(true);
    if(!TableValues.empty())
    {
        std::vector<TableMath*> mathInstances = {mathMax, mathMin, mathMedia, mathSomma};
        std::vector<QTableWidgetItem*> labels = {Max, Min, Media, Somma};

        for (size_t i = 0; i < mathInstances.size(); ++i)
        {
            labels[i]->setText(QString::number(mathInstances[i]->compute()));
        }

        Counter->setText(QString::number(changes_counter));
    }
    else
    {
        // removing all the items in the table
        // clear Items text
        Max->setText(QString());
        Min->setText(QString());
        Media->setText(QString());
        Somma->setText(QString());
        Counter->setText(QString::number(changes_counter));
    }

    Tab->blockSignals(false);
}


void TableController::update(float data)
{
    changes_counter = data;
}