/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *MaxOut;
    QLabel *MinOut;
    QLabel *MeanOut;
    QLabel *SommaOut;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuCalcolo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 50, 113, 24));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 100, 113, 24));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 150, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 50, 49, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 80, 49, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 120, 49, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(310, 160, 61, 16));
        MaxOut = new QLabel(centralwidget);
        MaxOut->setObjectName(QString::fromUtf8("MaxOut"));
        MaxOut->setGeometry(QRect(390, 50, 81, 16));
        MinOut = new QLabel(centralwidget);
        MinOut->setObjectName(QString::fromUtf8("MinOut"));
        MinOut->setGeometry(QRect(390, 80, 81, 20));
        MeanOut = new QLabel(centralwidget);
        MeanOut->setObjectName(QString::fromUtf8("MeanOut"));
        MeanOut->setGeometry(QRect(390, 120, 81, 16));
        SommaOut = new QLabel(centralwidget);
        SommaOut->setObjectName(QString::fromUtf8("SommaOut"));
        SommaOut->setGeometry(QRect(390, 160, 81, 16));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuCalcolo = new QMenu(menubar);
        menuCalcolo->setObjectName(QString::fromUtf8("menuCalcolo"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuCalcolo->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "mean", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "somma", nullptr));
        MaxOut->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        MinOut->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        MeanOut->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        SommaOut->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menuCalcolo->setTitle(QCoreApplication::translate("MainWindow", "Calcolo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
