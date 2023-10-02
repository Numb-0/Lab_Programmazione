#include "Window.h"

Window::Window(QWidget* parent) : QMainWindow(parent), ui(new ViewWindow())
{
    ui->setupUi(this);
    update();
    TMath = new TableMath(ui->Table);
}

Window::~Window() 
{
    delete TMath;
    delete ui;
}

void Window::update()
{
    int t = 10;
}

void Window::doMathOnTable(QTableWidgetItem* item)
{
    TMath->placeValues(item->text().toFloat(),item->row());
    TMath->setTableArg();

    // we do this only once
    TMath->setupTableArg(setup_done);
    setup_done = true;
}