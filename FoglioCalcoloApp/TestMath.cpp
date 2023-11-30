#ifndef TEST_MATH_H
#define TEST_MATH_H

#include <QtTest/QtTest>
#include <QDebug>
#include "TableMath.h"

class TestMath : public QObject 
{
    Q_OBJECT
public:
    ~TestMath() {}

private slots:
    void initTestCase()
    {
        qDebug() << "Start Testing";
    }

    void checkMaxValue()
    {
        TableMath h;
        std::map<int, float> testmap = {{1, 13.0f}, {2, 12.4f}, {0, 23.6f}};
        h.setTableMap(testmap);
        QCOMPARE(h.getMaxValue(), 23.6f);
    }

    void checkMinValue()
    {
        TableMath h;
        std::map<int, float> testmap = {{1, 13.0f}, {2, 12.4f}, {0, 23.6f}};
        h.setTableMap(testmap);
        QCOMPARE(h.getMinValue(), 12.4f);
    }

    void checkMediaValue()
    {
        TableMath h;
        std::map<int, float> testmap = {{1, 13.0f}, {2, 12.4f}, {0, 23.6f}};
        h.setTableMap(testmap);
        QCOMPARE(h.getMediaValue(), (13.0f + 12.4f + 23.6f) / 3.0f);
    }

    void checkSommaValue()
    {
        TableMath h;
        std::map<int, float> testmap = {{1, 13.0f}, {2, 12.4f}, {0, 23.6f}};
        h.setTableMap(testmap);
        QCOMPARE(h.getSommaValue(), 13.0f + 12.4f + 23.6f);
    }

    void cleanupTestCase()
    {
        qDebug() << "Finish Testing";
    }
};

QTEST_MAIN(TestMath)
#include "TestMath.moc"

#endif // TEST_MATH_H
