#ifndef TABLE_MATH_H
#define TABLE_MATH_H

#include <map>
#include <algorithm>
#include <numeric>
#include <limits>

class TableMath {
public:
    TableMath(const std::map<int,float>* TableVal) : Map(TableVal){};
    virtual ~TableMath(){};
    
    virtual float compute() const = 0;
protected:
    const std::map<int,float>* Map;
};

class TableMathMax : public TableMath {
public:
    TableMathMax(const std::map<int,float>* TableVal) : TableMath(TableVal) {};
    ~TableMathMax(){};

    float compute() const override;
};

class TableMathMin : public TableMath {
public:
    TableMathMin(const std::map<int,float>* TableVal) : TableMath(TableVal) {};
    ~TableMathMin(){};

    float compute() const override;
};

class TableMathMedia : public TableMath {
public:
    TableMathMedia(const std::map<int,float>* TableVal) : TableMath(TableVal) {};
    ~TableMathMedia(){};

    float compute() const override;
};

class TableMathSomma : public TableMath {
public:
    TableMathSomma(const std::map<int,float>* TableVal) : TableMath(TableVal) {};
    ~TableMathSomma(){};

    float compute() const override;
};

#endif // TABLE_MATH_H
