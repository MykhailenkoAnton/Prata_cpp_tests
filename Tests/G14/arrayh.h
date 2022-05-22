#ifndef ARRAYH_H_
#define ARRAYH_H_
#include <iostream>
#include <cstdlib>

template <class MyType, int n>

class ArrayTP
{
private:
    MyType ar[n];
public:
    ArrayTP() {};
    explicit ArrayTP(const MyType & v);
    virtual MyType & operator[](int i);
    virtual MyType operator[](int i) const;
};
template <class MyType, int n>
ArrayTP<MyType, n>::ArrayTP(const MyType & v)
{
    for (int i = 0; i < n; i++)
    {
        ar[i] = v;
    }
    
}
template <class MyType, int n>
MyType & ArrayTP<MyType, n>::operator[](int i)
{
    if (i < 0 || i >= n)
    {
        std::cerr << "Error in array limits: " << i // выход за пределы допустимого
                << " is out of range\n";              // диапазона индекса в массиве
        exit(EXIT_FAILURE);
    }
    return ar[i];
}
template <class MyType, int n>
MyType ArrayTP<MyType, n>::operator[](int i) const
{
    if (i < 0 || i >= n)
    {
        std::cerr << "Error in array limits: " << i // выход за пределы допустимого
                << " is out of range\n";              // диапазона индекса в массиве
        exit(EXIT_FAILURE);
    }
    return ar[i];
}
#endif