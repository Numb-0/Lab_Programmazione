#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>

class Observer 
{
public:
    virtual ~Observer() {}
    virtual	void update(float data) = 0;
};

#endif // OBSERVER_H
