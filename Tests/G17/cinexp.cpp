#include <iostream>
#include <exception>

// int main()
// {
//     // Установленный бит failbit вызовет генерацию исключения
//     std::cin.exceptions(std::ios_base::failbit);

//     std::cout << "Enter numbers: "; // запрос на ввод чисел
//     int sum = 0;
//     int input;
//     try
//     {
//         while (std::cin >> input)
//         {
//             sum += input;
//         }
        
//     }
//     catch(std::ios_base::failure & bf)
//     {
//         std::cout << bf.what() << '\n';
//         std::cout << "0! the horror!\n";
//     }
    
//     std::cout << "Last value entered = " << input << std::endl;
//     std::cout << "Sum = " << sum << std::endl;
//     return 0;
// }
