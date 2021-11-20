#include <iostream>
#include <string>
struct CandyBar
{
    std::string name_candy;
    double weigt_candy;
    int ccal_candy;
};
int main()
{
    CandyBar snack =
    {
        "Mocha Munch",
        2.3,
        350
    };
    std::cout << snack.name_candy << std::endl;
    std::cout << snack.weigt_candy << std::endl;
    std::cout << snack.ccal_candy << std::endl;
    return 0;
}
