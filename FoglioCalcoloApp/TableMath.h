#ifndef TABLE_MATH_H
#define TABLE_MATH_H

#include <QtWidgets/QTableWidget>
#include <Map>
#include <vector>
#include <algorithm>
#include <numeric>

class TableMath : public Observer
{
public:
    TableMath(QTableWidget* T = nullptr) : Tab(T),
        Max(new QTableWidgetItem(Qt::DisplayRole)),
        Min(new QTableWidgetItem(Qt::DisplayRole)),
        Media(new QTableWidgetItem(Qt::DisplayRole)),
        Somma(new QTableWidgetItem(Qt::DisplayRole)),
        Counter(new QTableWidgetItem(Qt::DisplayRole)){}
        
    ~TableMath()
    {
        delete Max;
        delete Min;
        delete Media;
        delete Somma;
        delete Counter;
    }

    void placeValues(float value, int index);
    void setupTableArg();
    void setTableArg();
    std::map<int,float>& getTableMap(){return TableValues;}
    void setTableMap(const std::map<int,float>& map){TableValues = map;}
    int getTableSize(){return TableValues.size();}

    // Math functions
    float getMaxValue();
    float getMinValue();
    float getMediaValue();
    float getSommaValue();

    // CountObserver support data
    int changes_counter = 0;

private:

    QTableWidget* Tab;
    std::map<int,float> TableValues;

    // Table Items
    QTableWidgetItem* Max;
    QTableWidgetItem* Min;
    QTableWidgetItem* Media;
    QTableWidgetItem* Somma;
    QTableWidgetItem* Counter;
};


#endif // TABLE_MATH_H