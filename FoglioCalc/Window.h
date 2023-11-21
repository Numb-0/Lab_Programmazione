#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include "ViewWindow.h"
#include "TableMath.h"
#include <CountChangesObserver.h>

class Window : public QMainWindow
{
    Q_OBJECT
public:
    Window(QWidget *parent = 0);
    ~Window();
    TableMath* getTable(){return TMath;}

private slots:
    void refreshTable(QTableWidgetItem* item);

private:
    ViewWindow* ui;
    TableMath* TMath;
    bool setup_done = false;
};
#endif // WINDOW_H
