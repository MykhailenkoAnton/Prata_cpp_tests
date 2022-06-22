#include <iostream>
#include <string>

template<typename Type1, typename Type2>
class Pair
{
private:
    Type1 a;
    Type2 b;
public:
    Type1 & first();
    Type2 & second();
    Type1 first() const { return a;}
    Type2 second() const { return b;}
    Pair(const Type1 & aval, const Type2 & bval) : a(aval), b(bval) {}
    Pair() {}
};

template<typename Type1, typename Type2>
Type1 & Pair<Type1,Type2>::first()
{
    return a;
}

template<typename Type1, typename Type2>
Type2 & Pair<Type1,Type2>::second()
{
    return b;
}

int main()
{
    Pair<std::string, int> rating[4] = {
        Pair<std::string, int>("The Purpled Duck", 5),
        Pair<std::string, int>("Jaquie's Frisco Al Fresco", 4),
        Pair<std::string, int>("Cafe Souffle", 5),
        Pair<std::string, int>("Bertie's Eats", 3)
    };
    int joints = sizeof(rating) / sizeof(Pair<std::string, int>);
    std::cout << "Rating:\t Eatery\n"; // вывод рейтингов закусочных
    for (int i = 0; i < joints; i++)
    {
        std::cout << rating[i].second() << " : \t "
                    << rating[i].first() << std::endl;
    }
    std::cout << "Oops! Revised rating:\n"; // вывод пересмотренного рейтинга
    rating[3].first() = "Bertie's Fab Eats";
    rating[3].second() = 6;
    std::cout << rating[3].second() << " : \t "
                    << rating[3].first() << std::endl;
    return 0;
}