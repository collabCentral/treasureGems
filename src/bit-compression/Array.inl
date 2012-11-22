#include "Array.h"

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
bool Array<T>::randomize()
{
	return true;
}

