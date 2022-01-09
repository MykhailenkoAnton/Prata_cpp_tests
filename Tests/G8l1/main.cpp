#include <iostream>
int count = 0;
void show(const char * sr, int n = 0);
int main()
{
    char s[25] = "Hellow, word";
    show(s);
    show(s);
    show(s);
    show(s);
    // show(s);
    std::cout << "\n\n\n\n\n";
    show(s, 4);
    return 0;
}
void show(const char * sr, int n)
{
    if (n != 0)
    {
        for (int i = 0; i < count; i++)
        {
            std::cout << sr << std::endl;
        }
    }
    else
    {
        std::cout << sr << std::endl;
    }
    count++;
}