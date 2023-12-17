#ifndef TABLE_CONTROLLER_H
#define TABLE_CONTROLLER_H

#include <QtWidgets/QTableWidget>
#include <map>
#include <vector>
#include <algorithm>
#include <Observer.h>
#include <TableMath.h>

class TableController : public Observer
{
public:
    TableController(QTableWidget* T = nullptr) : Tab(T),
        Max(new QTableWidgetItem(Qt::DisplayRole)),
        Min(new QTableWidgetItem(Qt::DisplayRole)),
        Media(new QTableWidgetItem(Qt::DisplayRole)),
        Somma(new QTableWidgetItem(Qt::DisplayRole)),
        Counter(new QTableWidgetItem(Qt::DisplayRole)){}
        
    ~TableController()
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


    // Observer support data & functions
    void update(float data) override;
    int changes_counter = 0;

private:

    
    QTableWidget* Tab;
    
    std::map<int,float> TableValues;
        
    // Using the TableMath class     
    TableMath TMath;

    // Table Items
    QTableWidgetItem* Max;
    QTableWidgetItem* Min;
    QTableWidgetItem* Media;
    QTableWidgetItem* Somma;
    QTableWidgetItem* Counter;
};


#endif // TABLE_CONTROLLER_H
