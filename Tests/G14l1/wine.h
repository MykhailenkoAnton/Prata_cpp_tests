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
};

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine
{
private:
    std::string wine_name;
    PairArray year_and_amount;
    int years;
public:
    Wine();
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    void GetBottles();
    std::string & Label();
    int Sum();
    void Show() const;
};



#endif