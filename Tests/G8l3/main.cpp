#include <iostream>
#include <string>
#include <cctype>
std::string str(std::string & st);
int main()
{
    std::string text;
    std::cout << "Please enter a string or q to quit: ";
    while (!(getline(std::cin, text)) || text != "q")
    {
       std::cout << str(text);
    }
    
    return 0;
}
std::string str(std::string & st)
{
    int i = 0;
    char ch;
    std::string UP;
    while (st[i] != '\0')
    {
        if (isdigit(st[i]))
        {
            i++;
           continue;
        }
        else
        {
            ch = toupper(st[i]);
            UP += ch;
            i++;
        }
    }
    return UP;
}