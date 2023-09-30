#include "Window.h"
#include <iostream>

Window::Window(QWidget* parent) : QMainWindow(parent), ui(new ViewWindow())
{
    ui->setupUi(this);
    update();
    TMath = new TableMath(ui->Table);
}

Window::~Window() 
{
    delete ui;
}

void Window::update()
{
    
}

void Window::doMathOnTable(QTableWidgetItem* item)
{
    TMath->placeValues(item->text().toFloat(),item->row());
    TMath->setTableArg();
    TMath->setupTableArg(setup_done);
    setup_done = true;
}