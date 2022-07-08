#include <iostream>
#include <string>
#include <vector>
const int NUM = 5;
int main()
{
    std::vector<int> ratings(NUM);
    std::vector<std::string> titles(NUM);
    std::cout << "You will do exactly as told. You will enter\n"
            << NUM << " book titles and your ratings (0-10) . \n";
            // запрос книг и их рейтингов
    int i;
    for (i = 0; i < NUM; i++)
    {
        std::cout << "Enter title #" << i + 1 << ": "; // ввод названия книги
        getline(std::cin, titles[i]);
        std::cout << "Enter your rating (0-10): "; // ввод рейтинга книги
        std::cin >> ratings[i];
        std::cin.get();
    }
    std::cout << "Thank you. You entered the following:\n"
            << "Rating\tBook\n"; // вывод списка книг с рейтингами
    for (i = 0; i < NUM; i++)
    {
        std::cout << ratings[i] << "\t" << titles[i] << std::endl;
    }
    
    return 0;
}