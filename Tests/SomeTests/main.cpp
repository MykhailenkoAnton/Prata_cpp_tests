#include <iostream>
#include <cstring>
#include <string>
// which word
// int main()
// {
//     // char word[50];
//     // std::cin.getline(word, 50);
//     std::string word;
//     getline(std::cin, word);
//     int words_count = 0;
//     int i = 0;
//     while (word[i])
//     {
//         if (word[i + 1] == ' ' || word[i + 1] == '\0')
//         {
//             words_count++;
//         }
//         i++;
//     }
    
//     std::cout<< "words is: " << words_count << std::endl;
//     return 0;
// }


// reverse str
// int main()
// {

//     std::string str = "Heslow";

//     int i = 0;
//     int j = str.size() - 1;
//     while (i <= j)
//     {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//         i++;
//         j--;
//     }
//     std::cout << str << std::endl;
    
//     return 0;
// }

// int fact(int n);
// // int fibonacci(int n);
// // int Q = 7;
// int main()
// {
//     std::cout << fact(5) << std::endl;
//     // std::cout << fibonacci(Q) << std::endl;
//     return 0;
// }



// int fact(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     return n * fact(n - 1);
// }


// int i = Q;
// int fibonacci(int n)
// {
//     if(n == 0)
//     {
//         std::cout << "ret 0\n";
//         return 0;
//     }
//     else if (n == 1)
//     {
//         std::cout << "ret 1\n";
//         return 1;
//     }
//     else
//     {
//         std::cout << "req = " << i << std::endl;
//         i--;
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
    
// }



// practice

// int numbre(int n);

// int main()
// {
//     std::cout << numbre(83569) << std::endl;
//     return 0;
// }

// int numbre(int n)
// {
//     if (n < 10)
//     {
//         return n;
//     }
    
//     return numbre(n / 10) + n % 10;
// }

// void showR(int i);
// int main()
// {
//     int i;
//     std::cin >> i;
//     if (i > 0)
//     {
//         showR(i);
//     }
    
//     return 0;
// }

// void showR(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     else
//     {
//         showR(n - 1);
//         std::cout << n;
//     }
// }