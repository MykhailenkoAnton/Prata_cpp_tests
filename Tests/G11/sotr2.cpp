#include <iostream>
int main()
{
    // to the biggest number

    // int ar[5] = {19, 2, 14, 36, 4};
    // int temp = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     int min = ar[i];
        
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (ar[i] > ar[j])
    //         {
    //             min = ar[j];
    //             temp = ar[i];
    //             ar[i] = min;
    //             ar[j] = temp;
    //         }
    //     }
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout << ar[i] << std::endl;
    // }

    // std::cout << std::endl;

    // to the smallest number

    // for (int i = 0; i < 5; i++)
    // {
    //     int max = ar[i];
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (ar[i] < ar[j])
    //         {
    //             temp = ar[i];
    //             max = ar[j];
    //             ar[j] = temp;
    //             ar[i] = max;
    //         }
    //     }
    // }
    
    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout << ar[i] << std::endl;
    // }


    
    std::cout << "Please enter ar's size: ";
    int ar_size;
    std::cin >> ar_size;
    int * AR = new int[ar_size];
    std::cout << "Enter size's meaning:\n";
    
    // to the biggest number
    for (int i = 0; i < ar_size; i++)
    {
        std::cout << "Enter nm " << i + 1 << std::endl;
        std::cin >> AR[i];
    }
    int temp = 0;
    // to the biggest number
    for (int i = 0; i < ar_size; i++)
    {
        int min = AR[i];
        for (int i = 0; i < ar_size; i++)
        {
            for (int j = i + 1; j < ar_size; j++)
            {
                if (AR[i] > AR[j])
                {
                    min = AR[j];
                    temp = AR[i];
                    AR[i] = min;
                    AR[j] = temp;
                }
            }
        }
    }
    std::cout << std::endl;
    for(int i = 0; i < ar_size; i++)
    {
        std::cout << AR[i] << std::endl;
    }
    std::cout << std::endl;


    


    // to the smallest number
    for (int i = 0; i < ar_size; i++)
    {
        std::cout << "Enter nm " << i + 1 << std::endl;
        std::cin >> AR[i];
    }
    // to the smallest number
    for (int i = 0; i < ar_size; i++)
    {
        int max = AR[i];
        for (int i = 0; i < ar_size; i++)
        {
            for (int j = i + 1; j < ar_size; j++)
            {
                if (AR[i] < AR[j])
                {
                    max = AR[j];
                    temp = AR[i];
                    AR[i] = max;
                    AR[j] = temp;
                }
            }
        }
    }
    std::cout << std::endl;

    for(int i = 0; i < ar_size; i++)
    {
        std::cout << AR[i] << std::endl;
    }
    return 0;
}


