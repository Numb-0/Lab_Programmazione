#include <WindowSubject.h>

void WindowSubject::notify()
{
    for (auto o : observers)
    {
        o->update(change_counter);
    }
}

void WindowSubject::addObserver(Observer* o)
{
    observers.push_back(o);
}

void WindowSubject::removeObserver(Observer* o)
{
    auto it = std::find(observers.begin(), observers.end(), o);
    if (it != observers.end())
    {
        observers.erase(it);
    }
}