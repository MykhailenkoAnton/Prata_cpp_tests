#include <iostream>
#include <string>
void strcount(const std::string & str);
int main()
{
    std::string input;
    std::cout << "Enter a  string: ";
    getline(std::cin, input);
    // std::cin >> input;
    while (input != "")
    {
        strcount(input);
        std::cout << "Enter next line or empty to quit:\n";
        getline(std::cin, input);
        // std::cin >> input;
    }
    std::cout << "bye!\n";
    return 0;
}
void strcount(const std::string & str)
{
    static int total = 0;
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            i++;
            continue;
        }
        count++;
        i++;
    }
    total += count;
    std::cout << count << " characters\n";
    std::cout << total << " total characters\n";
}