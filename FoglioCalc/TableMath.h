#ifndef TABLE_MATH_H
#define TABLE_MATH_H

#include <QtWidgets/QTableWidget>
#include <Map>
#include <vector>
#include <algorithm>
#include <numeric>
#include "Subject.h"

class TableMath : public Subject
{
public:
    TableMath(QTableWidget* T = nullptr) : Tab(T),
        Max(new QTableWidgetItem(Qt::DisplayRole)),
        Min(new QTableWidgetItem(Qt::DisplayRole)),
        Media(new QTableWidgetItem(Qt::DisplayRole)),
        Somma(new QTableWidgetItem(Qt::DisplayRole)){}
    ~TableMath()
    {
        delete Max;
        delete Min;
        delete Media;
        delete Somma;
    }

    void placeValues(float value, int index);
    void setupTableArg(bool setup_done);
    void setTableArg();
    std::map<int,float>& getTableMap(){return TableValues;}
    void setTableMap(const std::map<int,float>& map){TableValues = map;}

    // Math functions
    float getMaxValue();
    float getMinValue();
    float getMediaValue();
    float getSommaValue();

    // Subject functions
    void notify() override;
    void addObserver(Observer* o) override;
    void removeObserver(Observer* o) override;
private:
    std::vector<Observer*> observers;

    QTableWidget* Tab;
    std::map<int,float> TableValues;

    // Table Items
    QTableWidgetItem* Max;
    QTableWidgetItem* Min;
    QTableWidgetItem* Media;
    QTableWidgetItem* Somma;
};


#endif // TABLE_MATH_H