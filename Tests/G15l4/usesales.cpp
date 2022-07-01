#include <iostream>
#include <typeinfo>
#include "sales.h"

int main()
{
    double vals1[12] = 
    {
        1220, 1100, 1122, 2212, 1232, 2334,
        2884, 2393, 3302, 2922, 3002, 3544
    };
    double vals2[12] = 
    {
        12, 11, 22, 21, 32, 34,
        28, 29, 33, 29, 32, 35
    };

    Sales sales1(2011, vals1, 12);
    LabeledSales sales2("Blogstar",2012, vals2, 12);

    std::cout << "First try block: \n"; // первый блок try
    try
    {
        int i;
        std::cout << "Year = " << sales1.Year() << std::endl;
        for (i = 0; i < 12; i++)
        {
            std::cout << sales1[i] << ' ';
            if (i % 6 == 5)
            {
                std::cout << std::endl;
            }
        }
        std::cout << "Year: " << sales2.Year () << std::endl; // компания
        std::cout << "Label = " << sales2.Label() << std::endl; // метка
        for (i = 0; i <= 12; i++)
        {
            std::cout << sales2[i] << ' ';
            if (i % 6 == 5)
            {
                std::cout << std::endl;
            }
        }
        std::cout << "End of try block l.\n"; // конец первого блока try
    }
    catch(Sales::bad_index & bi)
    {
        LabeledSales::nbad_index * nbi;
        if (nbi = dynamic_cast<LabeledSales::nbad_index * >(&bi))
        {
            std::cout << nbi->what();
            std::cout << "Company: " << nbi->label_val() << std::endl; // компания
            std::cout << "bad index: " << nbi->bi_val() << std::endl; // недопустимый индекс
        }
        else
        {
            std::cout << bi.what();
            std::cout << "bad index: " << bi.bi_val() << std::endl; // недопустимый индекс
        }
        
    }

    std::cout << "\nNext try block: \n"; // второй блок try
    try
    {
        sales2[2] = 37.5;
        sales1[20] = 23345;
        std::cout << "End of try block 2.\n"; // конец второго блока try
    }
    catch(Sales::bad_index & bi1)
    {
        LabeledSales::nbad_index * nbi1;
        if (nbi1 = dynamic_cast<LabeledSales::nbad_index * >(&bi1))
        {
            std::cout << nbi1->what();
            std::cout << "Company: " << nbi1->label_val() << std::endl; // компания
            std::cout << "bad index: " << nbi1->bi_val() << std::endl; // недопустимый индекс
        }
        else
        {
            std::cout << bi1.what();
            std::cout << "bad index: " << bi1.bi_val() << std::endl; // недопустимый индекс
        }
    }

    std::cout << "done\n";

    return 0;
}