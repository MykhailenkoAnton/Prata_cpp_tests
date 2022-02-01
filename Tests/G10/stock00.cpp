#include <iostream>
#include "strock00.h"

// void Stock::acquire(const std::string & co, long n, double pr)
// {
//     company = co;
//     if (n < 0)
//     {
//         // Количество пакетов не может быть отрицательным; устанавливается в 0.
//         std::cout << "Number of shares can't be negative; "
//                 << company << " shares set to 0.\n";
//         shares = 0;
//     }
//     else
//     {
//         shares = n;
//     }
//     share_val = pr;
//     set_tot();
// }
// void Stock::buy(long num, double price)
// {
//     if (num < 0)
//     {
//         //Количество приобретаемых пакетов не может быть отрицательным. Транзакция прервана.
//         std::cout << "Number of shares purchased can't be negative. "
//                  << " shares set to 0.\n";
//     }
//     else
//     {
//         shares += num;
//         share_val = price;
//         set_tot();
//     }
// }
// void Stock::sell(long num, double price)
// {
//     if (num < 0)
//     {
//         // Количество продаваемых пакетов не может быть отрицательным. Транзакция прервана,
//         std::cout << "Number of shares sold can't be negative. "
//                 << "Transaction is aborted.\n";
//     }
//     else if (num > shares)
//     {
//         // Нельзя продать больше того, чем находится во владении. Транзакция прервана,
//         std::cout << "You can't sell more than you have! "
//             << "Transaction is aborted.\n";
//     }
//     else
//     {
//         shares -= num;
//         share_val = price;
//         set_tot();
//     }
// }
// void Stock::update(double price)
// {
//     share_val = price;
//     set_tot();
// }
// void Stock::show()
// {
//     // Вывод названия компании, количества пакетов, цены пакета и общей стоимости.
//     // std::cout << "Compramy = " << company;
//     // std::cout << " Shares = " << shares << std::endl;
//     // std::cout << " Shares Price: $" << share_val;
//     // std::cout << " Total Worth: $" << total_val << std::endl;

//     // or

//     // Установка формата в #.###
//     std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
//     std::streamsize prec = std::cout.precision(3);
//     std::cout << "Compramy = " << company;
//     std::cout << " Shares = " << shares << std::endl;
//     std::cout << " Shares Price: $" << share_val;
//     // Установка формата в #.##
//     std::cout.precision(2);
//     std::cout << " Total Worth: $" << total_val << std::endl;
//     // Восстановление исходного формата
//     std::cout.setf(orig, std::ios_base::floatfield);
//     std::cout.precision(prec);
// }







// + конструктор и дестркутор

Stock::Stock()  // конструктор по умолчанию
{
    std::cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout << "Constructor using " << co << " called!\n";
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; ";
        std::cout << company << " shares set to 0.\n";
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

// Деструктор класса
Stock::~Stock()
{
    std::cout << "Bye, " << company << std::endl; 
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        //Количество приобретаемых пакетов не может быть отрицательным. Транзакция прервана.
        std::cout << "Number of shares purchased can't be negative. "
                 << " shares set to 0.\n";
    }
    else
    {
        shares += num;
    }
    share_val = price;
    set_tot();
}

void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        // Количество продаваемых пакетов не может быть отрицательным. Транзакция прервана,
        std::cout << "Number of shares sold can't be negative. "
                << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        // Нельзя продать больше того, чем находится во владении. Транзакция прервана,
        std::cout << "You can't sell more than you have! "
            << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    // Вывод названия компании, количества пакетов, цены пакета и общей стоимости.
    // std::cout << "Compramy = " << company;
    // std::cout << " Shares = " << shares << std::endl;
    // std::cout << " Shares Price: $" << share_val;
    // std::cout << " Total Worth: $" << total_val << std::endl;

    // or

    // Установка формата в #.###
    std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::streamsize prec = std::cout.precision(3);
    std::cout << "Compramy = " << company;
    std::cout << " Shares = " << shares << std::endl;
    std::cout << " Shares Price: $" << share_val;
    // Установка формата в #.##
    std::cout.precision(2);
    std::cout << " Total Worth: $" << total_val << std::endl;
    // Восстановление исходного формата
    std::cout.setf(orig, std::ios_base::floatfield);
    std::cout.precision(prec);
}
