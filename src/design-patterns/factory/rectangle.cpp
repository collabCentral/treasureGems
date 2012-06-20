#include "rectangle.h"
#include "factory.h"

#include <iostream>
using namespace std;

REGISTER_SHAPE(Rectangle);


void Rectangle::display()
{
    cout << "Rectangle::display\n";
}
