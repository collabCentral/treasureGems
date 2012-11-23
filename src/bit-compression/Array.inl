#include "Array.h"

#include <iostream>
using namespace std;

template<typename T>
Array<T>::Array(int size)
    : m_size(size)
    , m_array(0)
{
    m_array = new T[m_size];

    for (int i = 0; i < m_size; ++i) 
    	m_array[i] = 0;
}

template<typename T>
T& Array<T>::operator[](int index)
{
    return m_array[index];
}

template<typename T>
T& Array<T>::operator[](int index) const
{
    return m_array[index];
}

template<typename T>
void Array<T>::compress()
{
	char* ptr = reinterpret_cast<char*>(m_array);
	char* iterator = ptr;
    int step = 0;
    for (int i = 0; i < m_size*sizeof(int); ++i) {
    	*iterator = *ptr;
        iterator++;
        ptr++;
        if (i%4 == 3) {
            step++;
        	ptr += step;    	
        }
    }
}

template<typename T>
void Array<T>::decompress()
{
    char* ptr = reinterpret_cast<char*>(m_array);
    char* iterator = ptr;
    for (int i = 0; i < m_size*sizeof(int); ++i) {
        int number = (*ptr) << 16 | *(ptr+1) << 8 | *(ptr+2);
        cout << number << " ";
        ptr++;
    }
    cout << endl;
}
