#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    int cats[10] = {6, 7, 2, 9 , 4 , 11, 8, 7, 10, 5};
    std::vector<int> dice(10);
    // Копирование из массива в вектор
    std::copy(cats, cats + 10, dice.begin());
    std::cout << "Let the dice be cast!\n" ;

    // Создание итератора ostream
    std::ostream_iterator<int, char> out_iter(std::cout, " ");

    // Копирование из вектора в выходной поток
    std::copy(dice.begin(), dice.end(), out_iter);
    std::cout << std::endl;

    std::cout << "Implicit use of reverse iterator.\n";
                // неявное использование обратного итератора

    std::copy(dice.rbegin(), dice.rend(), out_iter);
    std::cout << std::endl;
    std::cout << "Explicit use of reverse iterator.\n";
                // явное использование обратного итератора
    std::vector<int>::reverse_iterator rt;
    for (rt = dice.rbegin(); rt != dice.rend(); rt++)
    {
        std::cout << *rt << ' ';
    }
    std::cout << std::endl;
    return 0;
}