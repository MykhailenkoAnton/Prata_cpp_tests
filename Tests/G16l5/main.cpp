#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
template <typename Type>
int reduce(Type * arr, int n);

const int SIZE = 10;

int main()
{
    srand(time(nullptr));
    // long arr1[SIZE];

    // for (int i = 0; i < SIZE; i++)
    // {
    //     arr1[i] = rand() % 5 + 1;
    // }
    
    // for (int i = 0; i < SIZE; i++)
    // {
    //     std::cout << arr1[i] << " ";
    // }

    // std::cout << std::endl;
    // auto last_long = reduce(arr1, SIZE);
    // std::cout << "Now arr1 is " << last_long << " elements!\n";


    // for (int i = 0; i < SIZE; i++)
    // {
    //     int j = 0;
    //     std::string newword;
    //     while (j < 5)
    //     {
    //         int random = rand() % 127 + 1;
    //         if (isalpha(static_cast<char> (random)))
    //         {
    //             char ch = random;
    //             newword += ch;
    //             j++;
    //         }
    //         else
    //         {
    //             continue;
    //         }        
    //     }
    //     arr2[i] = newword;
    // }


    std::string arr2[SIZE] = {"rako", "rako", "tako", "tako", "east", "west", "lol", "lol", "heo", "lol"};
    
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << arr2[i] << ' ';
    }
    
    std::cout << std::endl;
    auto last_str = reduce(arr2, SIZE);
    std::cout << "Now arr2 is " << last_str << " elements!\n";

    return 0;
}

template <typename Type>
int reduce(Type * arr, int n)
{
    std::vector<Type> ll(arr, arr + n);

    std::sort(ll.begin(), ll.end());

    auto last = std::unique(ll.begin(), ll.end());

    ll.erase(last, ll.end());

    int res = ll.size();
    return res;
}

