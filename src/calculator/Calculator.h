#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>

class Calculator
{
public:
    virtual std::string evaluate(const std::string& expression) = 0;
};

#endif // CALCULATOR_H
