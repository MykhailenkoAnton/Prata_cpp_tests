#include <iostream>
void mice(void);
void run(void);
int main()
{
    mice();
    run();
    return 0;
}
void mice(void)
{
    std::cout << "Three blind mice\n";
    std::cout << "Three blind mice\n";
}
void run(void)
{
    std::cout << "See how they run\n";
    std::cout << "See how they run\n";
}