#include <iostream>
// #include <ctime>
// #include <cstdlib>
// const int SIZE = 10;
// // sort
// int binarSearch(int arr[], int size, int key); // бинарный поиск только после сортировки
// void QuickSort(int arr[], int first, int second); // быстрая сортировка
// void InSort(int arr[], int size); // вставками

// int main()
// {
//     srand(static_cast<int>(time(nullptr)));
    
//     int arr[SIZE];

//     for (int i = 0; i < SIZE; i++)
//     {
//         arr[i] = rand() % 20;
//     }

//     InSort(arr, SIZE); 

//     for (int i = 0; i < SIZE; i++)
//     {
//         std::cout << arr[i] << ' ';
//     }
//     std::cout << std::endl;

   


//     std::cout << "Enter value: ";
//     int value;
//     std::cin >> value;

//     int isFound = binarSearch(arr, SIZE, value); 
    
//     if (isFound != -1)
//     {
//         std::cout << "Found on: " << isFound << " index\n";
//     }
//     else
//     {
//         std::cout << "Not Found!\n";
//     }
    

//     return 0;
// }

// void QuickSort(int arr[], int first, int last)
// {
//     int middle = arr[(first + last) / 2];
//     int i = first;
//     int j = last;
//     do
//     {
//         while (arr[i] < middle)
//         {
//             i++;
//         }
//         while (arr[j] > middle)
//         {
//             j--;
//         }
//         if (i <= j)
//         {
//             std::swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//     } while (i <= j);

//     if (j > first)
//     {
//         QuickSort(arr, first, j);
//     }
//     if (i < last)
//     {
//         QuickSort(arr, i, last);
//     }
    
// }


// void InSort(int arr[], int size)
// {
//     for (int i = 1; i < size; i++) 
//     {
//         int key = arr[i];
//         int j;
//         for (j = i - 1; j >= 0 && arr[j] > key; j--)
//         {
//             arr[j + 1] = arr[j];
//         }
//         arr[j + 1] = key;
//     }
// }


// int binarSearch(int arr[], int size, int key)
// {
//     int LeftBound = 0;
//     int RightBound = size - 1;
//     do
//     {
//         int middle = (LeftBound + RightBound) / 2;
        
//         if (key < arr[middle])
//         {
//             RightBound = middle - 1;
//         }
//         else if (key > arr[middle])
//         {
//             LeftBound = middle + 1;
//         }
//         else
//         {
//             return middle;
//         }

//     } while (LeftBound <= RightBound);
//     return -1;
// }

class A
{
private:
    /* data */
public:
    A(/* args */);
    ~A();
};

A::A(/* args */)
{
}

A::~A()
{
}


int main()
{
    std::cout << sizeof(A) << std::endl;
    return 0;
}