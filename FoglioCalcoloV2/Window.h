#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <Subject.h>
#include <iostream>
#include <vector>
#include "ViewWindow.h"
#include "TableMath.h"

class Window : public QMainWindow , public Subject
{
    Q_OBJECT
public:
    Window(QWidget *parent = 0);
    ~Window();
    TableMath* getTable(){return TMath;}
    // Subject functions
    void notify(float data) override;
    void addObserver(Observer* o) override;
    void removeObserver(Observer* o) override;

private slots:
    void refreshTable(QTableWidgetItem* item);

private:
    ViewWindow* ui;
    TableMath* TMath;
    QTableWidgetItem* previous_item = nullptr;
    bool setup_done = false;

    int counter = 0;
    std::vector<Observer*> observers;
};

#endif // WINDOW_H
