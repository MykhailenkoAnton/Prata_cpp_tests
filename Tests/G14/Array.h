#pragma one

#include <iostream>
#include <cstdlib>

template<typename Type, int n>

class MyArr
{
private:
    Type ar[n];
public:
    MyArr() {}
    explicit MyArr(const Type & v);
    virtual Type & operator[](int i);
    virtual Type operator[](int i) const;
};

template<typename Type, int n>
MyArr<Type,n>::MyArr(const Type & v)
{
    for (int i = 0; i < n; i++)
    {
        ar[i] = v;
    }
    
}

template<typename Type, int n>
Type & MyArr<Type,n>::operator[](int i)
{
    if (i < 0 || i >= n)
    {
        std::cerr << "Error in array limits: " << i // в.ыход за пределы допустимого
                    <<  " is out of range\n"; // диапазона индекса в массиве
        exit(EXIT_FAILURE);
    }
    return ar[i];
}

template<typename Type, int n>
Type MyArr<Type,n>::operator[](int i) const
{
    if (i < 0 || i >= n)
    {
        std::cerr << "Error in array limits: " << i // в.ыход за пределы допустимого
                    <<  " is out of range\n"; // диапазона индекса в массиве
        exit(EXIT_FAILURE);
    }
    return ar[i];
}