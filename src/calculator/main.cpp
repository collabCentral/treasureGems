#include "ExpressionParser.h"

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string expression;
    cout << "Enter expression ";
    getline(cin, expression);

    char delimeters[] = {'+', '-', '*', '/', KeyNull};

    ExpressionParser parser(delimeters, sizeof(delimeters)/sizeof(char));

    parser.parse(expression);
    return 0;
}