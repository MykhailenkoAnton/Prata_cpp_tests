#include <iostream>
#include <string>
struct CandyBar
{
    std::string name_candy;
    double weight_candy;
    int ccal_candy;
};
int main()
{
    CandyBar snack[3] =
    {
        {"Mocha Munch", 2.3, 350},
        {"Viva Oliva", 12.3, 450},
        {"Italiano Vero", 22.3, 550}
    };

    std::cout << snack[0].name_candy << " " << snack[0].weight_candy << " " << snack[0].ccal_candy << std::endl;
    std::cout << snack[1].name_candy << " " << snack[1].weight_candy << " " << snack[1].ccal_candy << std::endl;
    std::cout << snack[2].name_candy << " " << snack[2].weight_candy << " " << snack[2].ccal_candy << std::endl;
    return 0;
}
