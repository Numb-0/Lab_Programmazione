#ifndef C_OBSERVER_H
#define C_OBSERVER_H

#include <Observer.h>
#include <WindowSubject.h>

class CountChangesObserver : public Observer
{
public:
    CountChangesObserver(){};
    ~CountChangesObserver(){};
    void update(float data) override;
private:
};

#endif // C_OBSERVER_H