#ifndef SUBJECT_H
#define SUBJECT_H

#include <Observer.h>

class Subject {
public:
    virtual ~Subject() {};
    virtual void notify(float data) = 0;
    virtual void addObserver(Observer* o) = 0;
    virtual void removeObserver(Observer* o) = 0;
};

#endif // SUBJECT_H
