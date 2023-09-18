#ifndef OBSERVER_H
#define OBSERVER_H

class MainWindow;

class Observer
{
public:
    Observer(){};
    virtual ~Observer(){};
    virtual void update(MainWindow& h) = 0;
};

class InputObserver : public Observer
{
public:
    InputObserver(){};
    ~InputObserver(){};
    void update(MainWindow& h) override;
};

#endif // OBSERVER_H
