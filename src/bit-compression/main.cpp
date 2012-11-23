#include "Array.inl"

#include <sys/time.h>
#include <iostream>
#include <stdio.h>
using namespace std;

#define SIZE 10

void randomize(Array<int>& data)
{
    struct timeval tv;
    int number = 0;
    for (int i = 0; i < data.length(); ++i) {
        gettimeofday(&tv, 0);
        number = tv.tv_usec % 1000000;
        data[i] = i;//number;
    }
}

inline void display(const Array<int>& data)
{
    char* ptr = reinterpret_cast<char*>(data.m_array);
    for (int i = 0; i < data.length()*sizeof(int); ++i) 
        printf("%d", ptr[i]);
    cout << endl;
}

int main()
{
    Array<int> data(SIZE);

    randomize(data);

    display(data);

    data.compress();

    display(data);

    data.decompress();

    int i = 1;
    char* c = reinterpret_cast<char*>(&i);
    printf("%x %x %x %x", c[0], c[1], c[2], c[3]);
    cout << endl;


    
    return 0;
}
