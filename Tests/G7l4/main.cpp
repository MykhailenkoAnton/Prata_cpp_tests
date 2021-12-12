#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int meganomer(int n);
long double allcha(long double x, int n);
int main()
{
    double total, choices;
    int mega;
    long double rez_one;
    std::cout << "Enter the total number of choices on the game card and\n"
                "the number of picks allowed:\n";
    while ((std::cin >> total >> choices) && choices <= total)
    {
        std::cout << "U have 1 change of ";
        rez_one = probability(total, choices);
        std::cout << rez_one;
        std::cout << " of winning\n";
        // std::cout << "Next two numbers or q to quit: ";
        std::cout << "Enter please meganomer: ";
        std::cin >> mega;
        std::cout << "U have all chance with meganomer ";
        std::cout << allcha(rez_one, mega);

    }
    std::cout << "bye!\n";
    return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
    long double rezult = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        rezult = rezult * n / p;
    }
    return rezult;
}
int meganomer(int n)
{
    int m = n / 1;
    return m;
}
long double allcha(long double x, int n)
{
    long double a = x * n;
    return a;

}