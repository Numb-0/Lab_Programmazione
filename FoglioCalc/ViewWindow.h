#ifndef VIEWWINDOW_H
#define VIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QHBoxLayout>

QT_BEGIN_NAMESPACE

class ViewWindow 
{
public:
    QWidget* ViewWidget;
    QTableWidget* Table;

    void setupUi(QMainWindow* View) 
    {
        View->resize(1000, 300);

        ViewWidget = new QWidget(View);
        ViewWidget->setObjectName(QStringLiteral("ViewWindow"));
        View->setCentralWidget(ViewWidget);
        QVBoxLayout* VerticalLayout = new QVBoxLayout(ViewWidget);

        Table = new QTableWidget(4, 5, ViewWidget);
        Table->setObjectName(QStringLiteral("Table"));
        QStringList tableLabels = {"Numeri", "Somma", "Media", "Min", "Max"};
        Table->setHorizontalHeaderLabels(tableLabels);
        Table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        Table->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        QHBoxLayout* HorizontalLayout = new QHBoxLayout();
        HorizontalLayout->addWidget(Table);
        VerticalLayout->addLayout(HorizontalLayout);

        retranslateUi(View);
        QObject::connect(Table, SIGNAL(itemChanged(QTableWidgetItem*)), View, SLOT(refreshTable(QTableWidgetItem*)));

        QMetaObject::connectSlotsByName(View);
    } 

    void retranslateUi(QMainWindow *View) 
    {
        View->setWindowTitle(QApplication::translate("ViewWindow", "CalcTable", nullptr));
    } 

};

QT_END_NAMESPACE


#endif // VIEWWINDOW_H
