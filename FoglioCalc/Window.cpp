#include "Window.h"

Window::Window(QWidget* parent) : QMainWindow(parent), ui(new ViewWindow())
{
    ui->setupUi(this);
    TMath = new TableMath(ui->Table);
    
    // blocking all non used cells
    TMath->setupTableArg();
}

Window::~Window() 
{
    delete TMath;
    delete ui;
}

void Window::refreshTable(QTableWidgetItem* item)
{
    bool isNumber;
    float num = item->text().toFloat(&isNumber);
    if(isNumber || item->text().isEmpty()){
        TMath->placeValues(num,item->row());
        TMath->setTableArg();
    }
}
