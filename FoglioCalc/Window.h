#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <iostream>
#include "ViewWindow.h"
#include "Observer.h"
#include "TableMath.h"

class Window : public QMainWindow , public Observer {
    Q_OBJECT
public:
    Window(QWidget *parent = 0);
    ~Window();
    virtual void update() override;
    TableMath* getTable(){return TMath;}
private slots:
    void doMathOnTable(QTableWidgetItem* item);
private:
    ViewWindow* ui;
    TableMath* TMath;
    bool setup_done = false;
};
#endif // WINDOW_H
