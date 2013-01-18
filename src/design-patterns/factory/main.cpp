#include "factory.h"
#include "shape.h"

#include <iostream>
using namespace std;

int main()
{
    Shape* rectangle = Factory::create("Rectangle");
    if (rectangle) 
        rectangle->display();

    return 0;
}
