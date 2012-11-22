#include "Array.inl"

#include <iostream>
using namespace std;

#define SIZE 10000

int main()
{
    Array<int> data(SIZE);

    data.randomize();

    return 0;
}
