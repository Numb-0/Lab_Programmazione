#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    InputObserver obs1;
    w.addObserver(&obs1);
    // loop
    w.show();
    return a.exec();
}
