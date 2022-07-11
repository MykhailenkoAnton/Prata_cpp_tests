#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
std::vector<int> Lotto(int, int);
int main()
{
    std::cout << "Enter how numbers all: ";
    int num;
    std::cin >> num;

    std::cout << "Enter how numbers take: ";
    int take_num;
    std::cin >> take_num;

    std::vector<int> winners;
    winners = Lotto(num, take_num);

    for (int i = 0; i < take_num; i++)
    {
        std::cout << winners[i] << " ";
    }
    
    return 0;
}


std::vector<int> Lotto(int a, int b)
{
    srand(time(0));
    std::vector<int> all;
    for (int i = 1; i <= a; i++)
    {
        all.push_back(i);
    }
    std::random_shuffle(all.begin(), all.end());

    std::vector<int> result;
    for (int i = 0; i < b; i++)
    {
        result.push_back(all[i]);
    }
    return result;
}