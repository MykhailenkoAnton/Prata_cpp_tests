#ifndef WINE_H_
#define WINE_H_

#include <string>
#include <valarray>

template<typename Type1, typename Type2>
class Pair
{
private:
    Type1 a;
    Type2 b;
public:
    Type1 & first() { return a;}
    Type2 & second() { return b; }
    Type1 first() const { return a;}
    Type2 second() const { return b; }
    Pair(const Type1 & aval, const Type2 & bval) : a(aval), b(bval) {}
    Pair() {}
    Pair<Type1, Type2> & operator=(Pair<Type1, Type2> & P); 
};
template<typename Type1, typename Type2>
Pair<Type1, Type2> & Pair<Type1, Type2>::operator=(Pair<Type1, Type2> & P)
{
    a = P.a;
    b = P.b;
    return *this;
}

template<typename Type1, typename Type2>
class Wine : private std::string, private Pair<Type1, Type2>
{
private:
    typedef std::valarray<int> ArrInt;
    typedef Pair<Type1, Type2> PairArr;
    int years;
public:
    Wine() : years(0), std::string(""), PairArr() {}
    Wine(const char * l, int y, const int yr[], const int bot[])
    : years(y), std::string(l), PairArr(ArrInt(y), ArrInt(y)) {
        for (int i = 0; i < y; i++)
        {
            PairArr::first()[i] = yr[i];
            PairArr::second()[i] = bot[i];
        }
    }
    Wine(const char * l, int y)
    : years(y), std::string(l), PairArr(ArrInt(y), ArrInt(y)) {}

    
    // void GetBottles();
    // std::string & Label();
    // int Sum();
    // void Show() const;
};



#endif