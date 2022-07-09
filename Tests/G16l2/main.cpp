#include <iostream>
#include <string>
#include <cctype>

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
    std::string s1;
    for (start; start != s.end(); start++)
    {
        if (isalpha(*start))
        {
            auto ch = tolower(*start);
            // s1.push_back(ch);
            s1 += *start;
        }
        else
        {
            continue;
        }
    }
    
    start = s1.begin();
    auto end = s1.end() - 1;
    while (start <= end)
    {
        if (*start != *end)
        {
            return false;
        }
        start++;
        end--;
    }
    
    return true;
}