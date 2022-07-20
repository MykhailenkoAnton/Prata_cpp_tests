#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

const long SIZE1 = 39L;
const long SIZE2 = 100 * SIZE1;
const long SIZE3 = 100 * SIZE2;

bool f3(int x) {return x % 3 == 0;}
bool f13(int x) {return x % 13 == 0;}

int main()
{
    std::srand(time(0));
    std::vector<int> numbers1(SIZE1);
    std::generate(numbers1.begin(), numbers1.end(), std::rand);
    // Использование указателей на функции
    std::cout << "Sample size = " << SIZE1 << '\n'; // размер выборки
    int count3 = std::count_if(numbers1.begin(), numbers1.end(), f3);
    std::cout << "Count of numbers divisible by 3: " << count3 << '\n'; // количество чисел, кратных 3
    int count13 = std::count_if(numbers1.begin(), numbers1.end(), f13);
    std::cout << "Count of numbers divisible by 13: " << count13 << '\n'; // количество чисел, кратных 13
    // Увеличение размера numbers
    numbers1.resize(SIZE2);
    std::generate(numbers1.begin(), numbers1.end(), std::rand);
    // Использование указателей на функции
    std::cout << "Sample size = " << SIZE2 << '\n'; // размер выборки
    // Использование функтора
    class f_mod
    {
    private:
        int dv;
    public:
        f_mod(int d = 1) : dv(d) {}
        bool operator()(int x) {return x % dv == 0;}
    };
    count3 = std::count_if(numbers1.begin(), numbers1.end(), f_mod(3));
    std::cout << "Count of numbers divisible by 3: " << count3 << '\n'; // количество чисел, кратных 3
    count13 = std::count_if(numbers1.begin(), numbers1.end(), f_mod(13));
    std::cout << "Count of numbers divisible by 13: " << count13 << '\n'; // количество чисел, кратных 13
    // Повторное увеличение размера numbers
    numbers1.resize(SIZE3);
    std::generate(numbers1.begin(), numbers1.end(), std::rand);
    std::cout << "Sample size = " << SIZE3 << '\n'; // размер выборки
    // Использование лямбда
    auto mod3 = [](int x){return x % 3 == 0;};
    auto mod13 = [](int x){return x % 13 == 0;};
    count3 = std::count_if(numbers1.begin(), numbers1.end(), mod3);
    std::cout << "Count of numbers divisible by 3: " << count3 << '\n'; // количество чисел, кратных 3
    count13 = std::count_if(numbers1.begin(), numbers1.end(), mod13);
    std::cout << "Count of numbers divisible by 13: " << count13 << '\n'; // количество чисел, кратных 13
    return 0;
}