#include <iostream>
#include <fstream>
int main(int argc, char * argv[])
{
    std::cout << argv[0] << std::endl;
    std::cout << argv[1] << std::endl;
    char ch;
    std::ofstream fout(argv[1]);
    if (!fout.is_open())
    {
        std::cout << "Bad\n";
        exit(EXIT_FAILURE);
    }
    
    std::cout << "Enter please text: ";
    while (std::cin.get(ch))
    {
        fout << ch;
        fout.flush();
    }
    std::cout << std::endl;
    fout.close();
    return 0;
}