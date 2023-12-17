#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <Subject.h>
#include <iostream>
#include <vector>
#include "ViewWindow.h"
#include "TableController.h"

class Window : public QMainWindow , public Subject
{
    Q_OBJECT
public:
    // it seems i cannot implemnt constructor e distructor here
    Window(QWidget *parent = 0);
    ~Window();

    TableController* getTable(){return TableControl;}
    
    // Subject functions
    void notify(float data) override;
    void addObserver(Observer* o) override;
    void removeObserver(Observer* o) override;

private slots:
    void refreshTable(QTableWidgetItem* item);

private:
    ViewWindow* ui;
    TableController* TableControl;

    // Observer support
    int counter = 0;
    std::vector<Observer*> observers;
};

#endif // WINDOW_H
