#include <QtWidgets/QTableWidget>
#include <Map>
#include <algorithm>
#include <numeric>

class TableMath
{
public:
    void setTableArg();
    TableMath(QTableWidget* T) : Tab(T) {}
    ~TableMath(){}
    void placeValues(float value, int index);
    void setupTableArg(bool setup_done);
    float getMaxValue();
    float getMinValue();
    float getMediaValue();
    float getSommaValue();
private:
    QTableWidget* Tab;
    std::map<int,float> TableValues;
    QTableWidgetItem* Max = new QTableWidgetItem(Qt::DisplayRole);
    QTableWidgetItem* Min = new QTableWidgetItem(Qt::DisplayRole);
    QTableWidgetItem* Media = new QTableWidgetItem(Qt::DisplayRole);
    QTableWidgetItem* Somma = new QTableWidgetItem(Qt::DisplayRole);
};