#include "Window.h"

Window::Window(QWidget* parent) : QMainWindow(parent), ui(new ViewWindow())
{
    ui->setupUi(this);
    // here we choose which Table our TabelController class must access
    TableControl = new TableController(ui->Table);
    TableControl->setupTableArg();
}

Window::~Window() 
{
    delete TableControl;
    delete ui;
}

void Window::refreshTable(QTableWidgetItem* item)
{
    bool isNumber;
    float num = item->text().toFloat(&isNumber);
    if (isNumber)
    {
        counter ++;
        notify(counter);
    }
    // update table only if number or empty
    if((isNumber || item->text().isEmpty())){
        TableControl->placeValues(num,item->row());
        TableControl->setTableArg();
    }
}

// Observer methods implementations
void Window::notify(float data)
{
    for (auto o : observers)
    {
        o->update(data);
    }
}

void Window::addObserver(Observer* o)
{
    observers.push_back(o);
}

void Window::removeObserver(Observer* o)
{
    auto it = std::find(observers.begin(), observers.end(), o);
    if (it != observers.end())
    {
        observers.erase(it);
    }
}