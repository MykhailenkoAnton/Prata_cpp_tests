#include <iostream>
#include <cstring>
#include <string>
int main()
{
    // char word[50];
    // std::cin.getline(word, 50);
    std::string word;
    getline(std::cin, word);
    int words_count = 0;
    int i = 0;
    while (word[i])
    {
        if (word[i + 1] == ' ' || word[i + 1] == '\0')
        {
            words_count++;
        }
        i++;
    }
    
    std::cout<< "words is: " << words_count << std::endl;
    return 0;
}

// int main()
// {

    
//     return 0;
// }

