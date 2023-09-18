#include "Observer.h"
#include "mainwindow.h"

void InputObserver::update(MainWindow& h)
{
    h.convertData();
    h.refreshLabels();
    h.clearNumbers();
}