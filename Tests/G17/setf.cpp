#include <iostream>

int main()
{
    int temperature = 63;

    std::cout << "Today's water temperature: ";
    std::cout.setf(std::ios_base::showpos); // показывать знак плюс
    std::cout << temperature << std::endl;

    std::cout << "For our programming friends, that's\n";
    std::cout << std::hex << temperature << std::endl; // использование шестнадцатеричного
                                                                        // представления


    std::cout.setf(std::ios_base::uppercase);    // применение прописных символов в
    std::cout.setf(std::ios_base::showbase);     // шестнадцатеричном представлении
                                                // использование префикса ОХ для
                                                // шестнадцатеричных значений

    std::cout << "or\n";
    std::cout << temperature << std::endl;
    std::cout << "How " << true << "! oops -- How ";

    std::cout.setf(std::ios_base::boolalpha);
    std::cout << true << "!\n";
    
    return 0;
}