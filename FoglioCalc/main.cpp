#include <QApplication>
#include "Window.h"
#include <CountChangesObserver.h>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Window MainWin;
    MainWin.show();

    return app.exec();
}