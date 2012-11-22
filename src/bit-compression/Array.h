#ifndef ARRAY_H
#define ARRAY_H

template<typename T>
class Array
{
public:
    Array(int size);

    T& operator[](int index);

    bool randomize();

private:
    int m_size;
    T* m_array;
};

#endif // ARRAY_H
