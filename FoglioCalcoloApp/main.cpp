#include <QApplication>
#include "Window.h"
#include <CountObserver.h>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Window MainWin;
    CountObserver* FirstObs = new CountObserver(MainWin.getTable());
    MainWin.addObserver(FirstObs);
    MainWin.show();

    return app.exec();
}