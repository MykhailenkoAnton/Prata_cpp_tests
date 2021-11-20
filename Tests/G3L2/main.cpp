#include <iostream>
const int inch = 12;
int main()
{
    int hight_f,hight_d, weight;
    std::cout << "Enter u hight in futs: ";
    std::cin >> hight_f;
    std::cout << "Enter u hight in duims: ";
    std::cin >> hight_d;
    std::cout << "Enter u weight: ";
    std::cin >> weight;
    int hight_in_inch = hight_f * inch + hight_d;
    double hight_in_metres = hight_in_inch * 0.0254;
    double weight_in_kg = weight / 2.2;
    double bmi = weight_in_kg / (hight_in_metres * hight_in_metres);
    std::cout << "U BMI IS = " << bmi << std::endl;
    return 0;
}
