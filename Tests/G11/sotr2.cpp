#include <iostream>

int main()
{
    int ar[5] = {50, 13, 345, 11, 2};
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        int min = ar[i];
        
        for (int j = i + 1; j < 5; j++)
        {
            if (ar[i] > ar[j])
            {
                min = ar[j];
                temp = ar[i];
                ar[i] = min;
                ar[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << ar[i] << std::endl;
    }

    return 0;
}


