#include <iostream>
#include <string>
struct CandyBar
{
    std::string candy_name;
    double candy_weight;
    int candy_ccal;
};
int main()
{
    CandyBar * snack = new CandyBar[3]
    {
        {"Mocha Munch", 1.1, 300},
        {"Viva Oliva", 2.2, 400},
        {"Trattoria", 3.3, 500}
    };
    std::cout << snack[0].candy_name << " " << snack[0].candy_weight << " " << snack[0].candy_ccal << std::endl;
    std::cout << snack[1].candy_name << " " << snack[1].candy_weight << " " << snack[1].candy_ccal << std::endl;
    std::cout << snack[2].candy_name << " " << snack[2].candy_weight << " " << snack[2].candy_ccal << std::endl;

    delete [] snack;
    return 0;
}
