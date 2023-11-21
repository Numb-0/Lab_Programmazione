#ifndef W_SUBJECT_H
#define W_SUBJECT_H

#include <Subject.h>
#include <vector>
#include <algorithm>

class WindowSubject : public Subject {
public:
    virtual ~WindowSubject() {};
    virtual void notify() override;
    virtual void addObserver(Observer* o) override;
    virtual void removeObserver(Observer* o) override;

    const int& get_counter() const {return change_counter;}
    void set_counter(int c) 
    {
        change_counter = c;
        notify();
    }

private:
    std::vector<Observer*> observers;
    int change_counter = 0;
};

#endif // W_SUBJECT_H