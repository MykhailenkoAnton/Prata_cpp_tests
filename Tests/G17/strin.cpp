#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string lit = "It was a dark and stormy day, and "
                " the full moon glowed brilliantly. ";
    std::istringstream instr(lit);
    std::string word;
    while (instr >> word)
    {
        std::cout << word << std::endl;
    }
    
    return 0;
}