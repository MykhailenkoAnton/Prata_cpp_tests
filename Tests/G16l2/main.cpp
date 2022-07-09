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
    char ch;
    int i;
    auto start = s.begin();
    std::string s1;
    for (start, i = 0; start != s.end(); start++, i++)
    {
        if (isalpha(*start))
        {
            ch = tolower(s[i]);
            s1.push_back(ch);
        }
        else
        {
            continue;
        }
    }
    
    start = s1.begin();
    auto end = s1.end() - 1;
    for (start; start <= end; start++, end--)
    {
        if (*start != *end)
        {
            return false;
        }
        else if (start == end)
        {
            return true;
        }
        
    }
    
    return true;
}