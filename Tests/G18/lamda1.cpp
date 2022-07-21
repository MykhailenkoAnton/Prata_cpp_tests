#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
const long SIZE = 390000L;

int main()
{
    std::srand(time(0));
    std::vector<int> numbers1(SIZE);
    std::generate(numbers1.begin(), numbers1.end(), std::rand);
    // std::cout << "Sample size = " << SIZE << '\n'; // размер выборки
    // // Использование лямбда-функций
    // int count3 = std::count_if(numbers1.begin(), numbers1.end(), [](int x){return x % 3 == 0;});
    // std::cout << "Count of numbers divisible by 3: " << count3 << '\n'; // количество чисел, кратных 3
    // int count13 = 0;
    // std::for_each(numbers1.begin(), numbers1.end(), [&count13](int x){count13 += x % 13 == 0;});
    // std::cout << "Count of numbers divisible by 13: " << count13 << '\n'; // количество чисел, кратных 13
    int count3 = 0;
    int count13 = 0;
    std::for_each(numbers1.begin(), numbers1.end(), [&count3, &count13](int x){ count3 += x % 3 == 0; count13 += x % 13 == 0;});
    std::cout << "Count of numbers divisible by 3: " << count3 << '\n'; // количество чисел, кратных 3
    std::cout << "Count of numbers divisible by 13: " << count13 << '\n'; // количество чисел, кратных 13

    return 0;
}