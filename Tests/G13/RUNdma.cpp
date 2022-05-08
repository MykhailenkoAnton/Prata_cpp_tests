#include <iostream>
#include "dma.h"
int main()
{
    baseDMA shirt("Portabelly", 8);
    lackDMA ballon("red", "blimpo", 4);
    hasDMA map("Mercator", "Buffalo keys", 5);
    std::cout << "Displaying baseDMA object:\n"; // отображение объекта baseDMA
    std::cout << shirt << std::endl;
    std::cout << "Displaying lacksDMA object:\n"; // отображение объекта lacksDMA
    std::cout << ballon << std::endl;
    std::cout << "Displaying hasDMA object:\n"; // отображение объекта hasDMA
    std::cout << map << std::endl;
    lackDMA ballon2(ballon);
    std::cout << "Result of lacksDMA copy:\n"; // результат копирования lacksDMA
    std::cout << ballon2 << std::endl;
    hasDMA map2;
    map2 = map;
    std::cout << "Result of hasDMA assignment:\n"; // результат присваивания hasDMA
    std::cout << map2 << std::endl;
    return 0;
}