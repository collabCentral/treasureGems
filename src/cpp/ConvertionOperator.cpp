#include <iostream>
using namespace std;

template<typename T>
class SmartPtr
{
public:
    SmartPtr(T* ptr) : m_ptr(ptr) {}

    operator T*() { return m_ptr; }
    operator T&() { return *m_ptr; }

private:
    T* m_ptr;
};

class A
{
public:
    void display() const { cout << "Hello World\n"; }
    A() { cout <<"constructor\n"; }
    A(const A&) { cout <<"copy constructor\n"; }
    A& operator=(const A&) { cout <<"assignment\n"; return *this; }
    ~A() { cout <<"destructor\n"; }

};

void hello1(const A& obj)
{
    obj.display();
}

void hello2(const A obj)
{
    obj.display();
}

void hello3(const A* ptr)
{
    ptr->display();
}

int main()
{
    cout << "And the output is: " << endl;
    SmartPtr<A> m(new A());
    hello1(m);
    hello2(m);
    hello3(m);
    return 0;
}

