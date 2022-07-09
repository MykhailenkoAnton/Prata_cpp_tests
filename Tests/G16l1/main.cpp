#include <iostream>
#include <string>

bool isPolindrom(const std::string & s);

int main()
{
    std::cout << "Enter string: ";
    std::string word;
    std::getline(std::cin, word);

    bool result = isPolindrom(word);

    if (result)
    {
        std::cout << "Yes. It is\n";
    }
    else
    {
        std::cout << "Sorry, its not\n";
    }
    
    return 0;
}

bool isPolindrom(const std::string & s)
{
    auto start = s.begin();
    auto end = s.end() - 1;
    for (start; start < end; start++, end--)
    {
        if (*start != *end)
        {
            return false;
        }
    }
    
    return true;
}