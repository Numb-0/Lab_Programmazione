#include <QApplication>
#include "Window.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Window MainWin;
    // since the observer is TableController
    // and it is created on the creation of the Window
    // i need a method to retrive the created TableController
    MainWin.addObserver(MainWin.getTable());
    MainWin.show();

    return app.exec();
}