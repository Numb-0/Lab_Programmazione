#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include "Subject.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow , public Subject
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void addObserver(Observer* obs) override;
    void removeObserver(Observer* obs) override;
    void notifyAll() override;
    void convertData();
    void refreshLabels();
    void clearNumbers();
private slots:
    void setChanges();

private:
    Ui::MainWindow *ui;
    std::vector<Observer*> observers;
    std::vector<float> numbers;
};
#endif // MAINWINDOW_H