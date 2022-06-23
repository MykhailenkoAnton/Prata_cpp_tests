#include <iostream>
#include "emp.h"

int main()
{
    employee em("Trip", "Harris", "Thumper");
    std::cout << em << std::endl;
    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    std::cout << ma << std::endl;
    ma.ShowAll();
    fink fi("Matt", "Oggs", "Oiler", "JunoBarr");
    std::cout << fi << std::endl;
    fi.ShowAll();
    highfink hf(ma, "Curly Kew");
    hf.ShowAll();
    std::cout << "Press a key for next phase:\n";
                // Нажать любую клавишу для следующей фазы
    // std::cin.get();
    while (std::cin.get() != '\n')
    {
        continue;
    }
    highfink hf2;
    hf2.SetAll();
    std::cout << "Using an abstr_emp * pointer:\n\n";
                // Использование указателя abstr_emp *
    abstr_emp * tri[4] = {&em, &fi, &hf, &hf2};
    for (int i = 0; i < 4; i++)
    {
        tri[i]->ShowAll();
    }
    
    return 0;
}