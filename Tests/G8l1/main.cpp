#include <iostream>
// void show(const char * str);
void show(const char * st, int n = 1);
int main()
{
    char s[40] = "Hello, word";
    show(s);
    return 0;
}
void show(const char * str, int n)
{
    if (n == 0)
    {
        std::cout << "bye";
    }
    else{
        for (int i = 0; i < n; i++)
        {
            std::cout << str << std::endl;
        }
    }
}
