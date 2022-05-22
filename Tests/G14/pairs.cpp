#include <iostream>
#include <string>
template<class MY1, class MY2>
class Pair
{
private:
    MY1 a;
    MY2 b;
public:
    MY1 & first();
    MY2 & second();
    MY1 first() const {return a; };
    MY2 second() const {return b; };
    Pair(const MY1 & av, const MY2 & bv) : a(av), b(bv) {}
    Pair() {}
};

template<class MY1, class MY2>
MY1 & Pair<MY1,MY2>::first()
{
    return a;
}
template<class MY1, class MY2>
MY2 & Pair<MY1,MY2>::second()
{
    return b;
}

int main() 
{
    Pair<std::string, int> rating[4] = 
    {
        Pair<std::string, int>("The Purpled Duck", 5),
        Pair<std::string, int>("Jaquie's Frisco Al Fresco", 4),
        Pair<std::string, int>("Cafe Souffle", 5),
        Pair<std::string, int>("Bertie's Eats", 3)
    };
    int joints = sizeof(rating) / sizeof(Pair<std::string, int>);
    std::cout << "Rating:\t Eatery\n"; // вывод рейтингов закусочных
    for (int i = 0; i < joints; i++)
    {
        std::cout << rating[i].second() << ":\t";
        std::cout << rating[i].first() << std::endl;
    }
    std::cout << "Oops! Revised rating:\n"; // вывод пересмотренного рейтинга
    rating[3].first() = "Bertie's Fab Eats";
    rating[3].second() = 6;
    std::cout << rating[3].second() << ":\t";
    std::cout << rating[3].first() << std::endl;
    return 0;
}