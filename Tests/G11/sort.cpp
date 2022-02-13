#include <iostream>

int main()
{
    // int ar[5] = {29, 43, 100, 12, 35};
    // int i = 0;
    // int k = 0;

    // for (i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (ar[j] > ar[j + 1])
    //         {
    //             int n = ar[j];
    //             ar[j] = ar[j + 1];
    //             ar[j + 1] = n;
    //         }
    //     }
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout << ar[i] << std::endl;
    // }
    // std::cout << std::endl;
    

    std::cout << "Please enter ar's size: ";
    int size_AR;
    std::cin >> size_AR;
    int * AR = new int[size_AR];
    std::cout << "Enter size's meaning:\n";

    for (int i = 0; i < size_AR; i++)
    {
        std::cout << "Enter nm " << i + 1 << std::endl;
        std::cin >> AR[i]; // version 1
    }

    for (int i = 0; i < size_AR - 1; i++)
    {
        for(int j = 0; j < size_AR - 1; j++)
        {
            if (AR[j] > AR[j + 1])
            {
                int temp = AR[j];
                AR[j] = AR[j + 1];
                AR[j + 1] = temp;
            }
        }
    }
    
    std::cout << std::endl;
    for (int i = 0; i < size_AR; i++)
    {
        std::cout << AR[i] << " ";
    }

    return 0;
}
