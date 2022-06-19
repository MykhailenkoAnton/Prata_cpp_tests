#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stack1.h"
const int NUM = 10;

int main()
{
    srand(time(0));
    std::cout << "Please enter stack size: ";
    int stacksize;
    std::cin >> stacksize;

    // Создание пустого стека размером stacksize
    Stack <const char *> st(stacksize);

    // Входной ящик
    const char * in[NUM] = {
        " 1: Hank Gilgamesh", " 2: Kiki Ishtar",
        " 3: Betty Rocker", " 4: Ian Flagranti",
        " 5: Wolfgang Kibble", " 6: Portia Koop",
        " 7: Joy Almondo", " 8: Xaverie Paprika",
        " 9: Juan Moore", "10: Misha Mache"
    };

    // Выходной ящик
    const char * out[NUM];
    int processed = 0;
    int nextin = 0;

    while (processed < NUM)
    {
        if (st.is_empty())
        {
            st.push(in[nextin++]);
        }
        else if (st.is_full())
        {
            st.pop(out[processed++]);
        }
        else if (rand() % 2 && nextin < NUM)
        {
            st.push(in[nextin++]);
        }
        else
        {
            st.pop(out[processed++]);
        }
    }
    
    for (int i = 0; i < NUM; i++)
    {
        std::cout << out[i] << std::endl;
    }
    std::cout << "Bye\n";
    return 0;
}