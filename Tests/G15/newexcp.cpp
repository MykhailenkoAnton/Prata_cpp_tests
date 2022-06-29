#include <iostream>
#include <new>
#include <cstdlib> // для exit(), EXIT_FAILURE

struct Big
{
    double stuff[200000];
};

int main()
{
    Big *pb;
    try
    {
        std::cout << "Trying to get a big block of memory:\n"; // Попытка выделения крупного блока памяти
        pb = new Big[100000]; // 1 600 000 000 байт
        std::cout << "Got past the new request: \n"; // вывод результатов запроса new
    }
    catch(std::bad_alloc & ba)
    {
        std::cout << "Caught the exception!\n"; // произошло исключение
        std::cout << ba.what() << std::endl;
        exit(EXIT_FAILURE);
    }
    std::cout << "Memory successfully allocated\n"; // память успешно выделена
    pb[0].stuff[0] = 4;
    std::cout << pb[0].stuff[0] << std::endl;
    delete [] pb;
    return 0;
}