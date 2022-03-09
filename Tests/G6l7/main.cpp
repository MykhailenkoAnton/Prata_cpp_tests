#include <iostream>
#include <cctype>
#include <string>
#include <curses.h>
bool is_vow(char ch);
int main()
{
    std::string word;
    std::cout << "Enter please text: "; // как сделать с чаром
    char ch;
    int count_vow = 0;
    int count_conso = 0;
    int other = 0;
    int i = 0;
    int c_code;
    // std::cin.get(ch);
    // std::cin >> word;
    while (true)
    {

        c_code = getch();
        std::cout << c_code;
        if (ch == ' ')
        {
            std::cout << word;
            if (word == "q")
            {
                break;
            }
            if (isalpha(word[i]))
            {
                if(is_vow(word[i]))
                {
                    count_vow++;
                }
                else
                {
                    count_conso++;
                }
            }
            else 
            {
                if (!isalpha(word[i]))
                other++;
            }
            word.clear();
        }
        word += ch;
    }


    std::cout << std::endl;
    std::cout << "words vow = " << count_vow << std::endl;
    std::cout << "words conso = " << count_conso << std::endl;
    std::cout << "other = " << other << std::endl;
    return 0;
}

bool is_vow(char ch)
{
    bool vow = false;
    if (ch == 'a' || ch == 'A')
    {
        vow = true;
    }
    else if (ch == 'e' || ch == 'E')
    {
        vow = true;
    }
    else if (ch == 'i' || ch == 'I')
    {
        vow = true;
    }
    else if (ch == 'o' || ch == 'O')
    {
        vow = true;
    }
    else if (ch == 'j' || ch == 'J')
    {
        vow = true;
    }
    else if (ch == 'u' || ch == 'U')
    {
        vow = true;
    }
    else if (ch == 'y' || ch == 'Y')
    {
        vow = true;
    }
    
    return vow;
}