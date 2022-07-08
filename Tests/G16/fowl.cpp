#include <iostream>
#include <string>
#include <memory>


int main()
{
    std::shared_ptr<std::string> films[5] = 
    {
        std::unique_ptr<std::string> (new std::string("Fowl Balls")),
        std::unique_ptr<std::string> (new std::string("Duck Walks")),
        std::unique_ptr<std::string> (new std::string("Chicken Runs")),
        std::unique_ptr<std::string> (new std::string("Turkey Errors")),
        std::unique_ptr<std::string> (new std::string("Goose Eggs"))
    };
    std::unique_ptr<std::string> pwin;
    pwin = films[2]; // films[2] утрачивает права владения
    std::cout << "The nominees for best avian baseball film are\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << *films[i] << std::endl;
    }
    std::cout << "The winner is " << *pwin << "!\n";
    std::cin.get();
    return 0; 
}