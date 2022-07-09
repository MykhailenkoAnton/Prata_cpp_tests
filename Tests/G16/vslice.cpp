#include <iostream>
#include <valarray>
#include <cstdlib>

const int SIZE = 12;

typedef std::valarray<int> vint; // для упрощения объявлений

void Show(const vint & v, int cols);

int main()
{
    vint valint(SIZE);

    int i;

    for (i = 0; i < SIZE; i++)
    {
        valint[i] = std::rand() % 10;
    }
    std::cout << "Original array:\n";
    Show(valint, 3); // отображение в виде 3 столбцов
    vint vcol(valint[std::slice(1, 4, 3)]); // извлечение 2-го столбца
    std::cout << "Second column:\n";
    Show(vcol, 1); // отображение в 1 столбце
    vint vrow(valint[std::slice(3, 3, 1)]); // извлечение 2-ой строки
    std::cout << "Second row:\n";
    Show(vrow, 3);
    valint[std::slice(2, 4, 3)] = 10; // присваивание 2-му столбцу
    std::cout << "Set last column to 10:\n";
    Show(valint, 3);
    std::cout << "Set first column to sum of next two:\n";
    
    // Операция + не определена для sliсе, поэтому преобразуем в valarray<int>

    valint[std::slice(0, 4, 3)] = vint(valint[std::slice(1, 4, 3)]) + vint(valint[std::slice(2, 4, 3)]);
    Show(valint, 3);

    return 0;
}

void Show(const vint & v, int cols)
{
    int lim = v.size();
    for (int i = 0; i < lim; i++)
    {
        std::cout.width(3);
        std::cout << v[i];
        if (i % cols == cols - 1)
        {
            std::cout << std::endl;
        }
        else
        {
            std::cout << ' ';
        }
    }
    if (lim % cols != 0)
    {
        std::cout << std::endl;
    }
    
}