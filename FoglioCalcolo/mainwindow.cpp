#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Val1, SIGNAL(textChanged(QString)), this, SLOT(setChanges()));
    connect(ui->Val2, SIGNAL(textChanged(QString)), this, SLOT(setChanges()));
    connect(ui->Val3, SIGNAL(textChanged(QString)), this, SLOT(setChanges()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::convertData()
{
    numbers.push_back(ui->Val1->text().toFloat());
    numbers.push_back(ui->Val2->text().toFloat());
    numbers.push_back(ui->Val3->text().toFloat());
}

void MainWindow::refreshLabels()
{
    ui->MaxOut->setText(QString::number(*max_element(numbers.begin(), numbers.end())));
    ui->MinOut->setText(QString::number(*min_element(numbers.begin(), numbers.end())));
    ui->MeanOut->setText(QString::number(std::reduce(numbers.begin(), numbers.end())/numbers.size()));
    ui->SommaOut->setText(QString::number(std::reduce(numbers.begin(), numbers.end())));
}

void MainWindow::clearNumbers()
{
    numbers.clear();
}

// Observer Code
void MainWindow::addObserver(Observer* obs)
{
    observers.push_back(obs);
}

void MainWindow::removeObserver(Observer* obs)
{
    observers.erase(std::remove(observers.begin(), observers.end(), obs), observers.end());
}

void MainWindow::notifyAll()
{
    for (auto o : observers)
    {
        o->update(*this);
    }
}

void MainWindow::setChanges()
{
    notifyAll();
}