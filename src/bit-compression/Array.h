#ifndef ARRAY_H
#define ARRAY_H

template<typename T>
class Array
{
public:
    Array(int size);

    int length() const { return m_size; }

    T& operator[](int index);

    T& operator[](int index) const;

    void compress();

    void decompress();

    int m_size;
    T* m_array;
};

#endif // ARRAY_H
