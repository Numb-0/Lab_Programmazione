#include <QApplication>
#include "Window.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Window MainWin;
    MainWin.addObserver(MainWin.getTable());
    MainWin.show();

    return app.exec();
}