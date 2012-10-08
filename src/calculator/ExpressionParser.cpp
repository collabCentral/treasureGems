#include "ExpressionParser.h"

#include <iostream>
using std::cout;
using std::endl;

ExpressionParser::ExpressionParser(const char* delimeters, int delimetersLength)
    : m_delimeters(delimeters)
    , m_delimetersLength(delimetersLength)
{
}

ExpressionTree ExpressionParser::parse(const std::string& expression)
{
    ExpressionTree tree;

    int i = 0;
    int length = expression.size();

    while (expression[i] != KeyNull) {
        int j = i;
        int token = 0;
        int hasToken = false;
        while (!isDelimeter(expression[j]) && !isWhiteSpace(expression[j]) && isDigit(expression[j])) {
            hasToken = true;
            token = token * 10 + expression[j] - Key0;
            j++;
        }
        if (hasToken)
            cout << "Token " << token << endl;

        i = j + 1;
    }

    return tree;
}
