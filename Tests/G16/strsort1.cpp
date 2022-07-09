#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string letters;
    std::cout << "Enter the letter grouping (quit to quit) : "; // ввод группы букв
    while (std::cin >> letters && letters != "quit")
    {
        std::cout << "Permutations of " << letters << std::endl; // перестановки группы букв
        std::sort(letters.begin(), letters.end());
        std::cout << letters << std::endl;
        while (std::next_permutation(letters.begin(), letters.end()))
        {
            std::cout << letters << std::endl;
        }
        std::cout << "Enter next sequence (quit to quit) : "; // ввод следующей группы букв
    }
    std::cout << "Done.\n";
    return 0;
}