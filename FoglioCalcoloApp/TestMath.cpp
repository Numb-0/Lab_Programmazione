#ifndef TEST_MATH_H
#define TEST_MATH_H

#include <QtTest/QtTest>
#include <QDebug>
#include <TableMath.h>

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
        std::map<int, float> testmap = {{1, 13.0f}, {2, 12.4f}, {0, 23.6f}};
        /* QCOMPARE( 23.6f); */
    }

    void checkMinValue()
    {
        std::map<int, float> testmap = {{1, 13.0f}, {2, 12.4f}, {0, 23.6f}};
    }

    void checkMediaValue()
    {
        
        std::map<int, float> testmap = {{1, 13.0f}, {2, 12.4f}, {0, 23.6f}};
        
    }

    void checkSommaValue()
    {
        
        std::map<int, float> testmap = {{1, 13.0f}, {2, 12.4f}, {0, 23.6f}};
    }

    void cleanupTestCase()
    {
        qDebug() << "Finish Testing";
    }
};

QTEST_MAIN(TestMath)
#include "TestMath.moc"

#endif // TEST_MATH_H
