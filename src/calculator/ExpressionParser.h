#ifndef EXPRESSIONPARSER_H
#define EXPRESSIONPARSER_H

#include "ExpressionTree.h"
#include "ascii.h"

#include <string>
using std::string;

class ExpressionParser
{
public:
    ExpressionParser(const char* delimeters, int delimetersLength);

    ExpressionTree parse(const std::string& expression); 

protected:
    inline bool isWhiteSpace(char letter) 
    {
        return (letter == KeySpace || letter == KeyTab) ? true : false;
    }

    inline bool isDelimeter(char letter)
    {
        for (int i = 0; i < m_delimetersLength; ++i)
            if (letter == m_delimeters[i])
                return true;
        return false;
    }

    inline bool isDigit(char letter)
    {
        return (letter >= Key0 && letter <= Key9) ? true : false;
    }

private:
    const char* m_delimeters;
    int m_delimetersLength;
};

#endif // EXPRESSIONPARSER_H