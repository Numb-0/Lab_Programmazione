#include "Observer.h"

class Subject
{
public:
    Subject(){}
    virtual ~Subject(){}
    
    virtual void addObserver(Observer* obs) = 0;
    virtual void removeObserver(Observer* obs) = 0;
    virtual void notifyAll() = 0;
};