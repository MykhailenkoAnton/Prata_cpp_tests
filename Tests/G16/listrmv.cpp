#include <iostream>
#include <list>
#include <algorithm>

void Show(int v) {std::cout << v << ' ';}
const int LIM = 10;

int main()
{
    int arr[LIM] = {4, 5, 4, 2, 2, 3, 4, 8, 1, 4};
    std::list<int> la(arr, arr + LIM);
    std::list<int> lb(la);
    std::cout << "Original list contents:\n\t"; // вывод содержимого исходного списка
    std::for_each(la.begin(), la.end(), Show);
    std::cout << std::endl;
    la.remove(4);
    std::cout << "After using the remove () method:\n";
                    // список после использования метода remove ()
    std::cout << "la:\t";
    std::for_each(la.begin(), la.end(), Show);
    std::cout << std::endl;
    auto last = remove(lb.begin(), lb.end(), 4);
    std::cout << "After using the remove() function:\n";
            // список после использования функции remove()
    std::cout << "lb:\t";
    std::for_each(lb.begin(), lb.end(), Show);
    std::cout << std::endl;
    lb.erase(last, lb.end());
    std::cout << "After using the erase() method:\n";
            // список после использования метода erase()
    std::cout << "lb:\t";
    std::for_each(lb.begin(), lb.end(), Show);
    std::cout << std::endl;
    return 0;
}