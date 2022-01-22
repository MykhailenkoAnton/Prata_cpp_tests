#include <iostream>

extern double warming;

void update(double dt);
void local();

void update(double dt)
{
    warming += dt;
    std::cout << "Updating global warming to " << warming << " degrees.\n";
}
void local()
{
    double warming = 0.8;
    std::cout << "Local warming = " << warming << " degrees. \n";
    std::cout << "But global warming = " << ::warming << " degrees. \n";
}