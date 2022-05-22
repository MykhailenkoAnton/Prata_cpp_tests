#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stack1.h"
const int Num = 10;
int main()
{
    srand(time(0)); // рандомизация rand()
    std::cout << "Please enter stack size: "; // ввод размера стека
    int stacksize;
    std::cin >> stacksize;
    // Создание пустого стека размером stacksize
    Stack<const char *> st(stacksize);
    // Входной ящик
    const char * in[Num] = {
        " 1: Hank Gilgamesh", " 2: Kiki Ishtar",
        " 3: Betty Rocker", " 4: Ian Flagranti",
        " 5: Wolfgang Kibble", " 6: Portia Koop",
        " 7: Joy Almondo", " 8: Xaverie Paprika",
        " 9: Juan Moore", "10: Misha Mache"
    };
    // Выходной ящик
    const char * out[Num];
    int processed = 0;
    int nextin = 0;
    while (processed < Num)
    {
        if (st.is_empty())
        {
            st.push(in[nextin++]);
            std::cout << *in << std::endl;
        }
        else if (st.is_full())
        {
            st.pop(out[processed++]);
            std::cout << *out << std::endl;
        }
        else if (rand() % 2 && nextin < Num)
        {
            st.push(in[nextin++]);
            std::cout << *in << std::endl;
        }
        else
        {
            st.pop(out[processed++]);
            std::cout << *out << std::endl;
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < Num; i++)
    {
        std::cout << out[i] << std::endl;
    }
    std::cout << "Bye\n";
    return 0;
}