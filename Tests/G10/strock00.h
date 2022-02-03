// stockOO.h — интерфейс класса Stock
// версия 00
#ifndef STROCK00_H_
#define STROCK00_H_
#include <iostream>
#include <string>

// class Stock {
//     private:
//         std::string company;
//         long shares;
//         double share_val;
//         double total_val;
//         void set_tot()
//         {
//             total_val = shares * share_val;
//         }
//     public:
//         void acquire(const std::string & co, long n, double pr);
//         void buy(long num, double price);
//         void sell(long num, double price);
//         void update(double price);
//         void show();
// };

// + конструктор и дестркутор

class Stock {
    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot()
        {
            total_val = shares * share_val;
        }
    public:
        Stock();
        Stock(const std::string & co, long n = 0, double pr = 0.0);
        ~Stock();
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
};

#endif