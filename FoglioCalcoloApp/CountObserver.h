#ifndef C_OBSERVER_H
#define C_OBSERVER_H

#include <Observer.h>
#include <iostream>
#include <TableMath.h>

class CountObserver : public Observer
{
public:  
    CountObserver(TableMath* currentTable) : currentTable(currentTable){};
    virtual ~CountObserver() {}
    void update(float data) override;
private:
    TableMath* currentTable;
};

void CountObserver::update(float data)
{
    currentTable->changes_counter = data;
}

#endif // C_OBSERVER_H