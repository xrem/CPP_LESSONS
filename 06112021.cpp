#define _USE_MATH_DEFINES // for C++

#include <iostream>
#include "Figure.h";
#include "Rectangle.h";
#include <cmath>

int main()
{
    double doubled_pi = pow(M_PI, 2);
    std::cout << M_PI << std::endl;
    Figure* figure = new Rectangle(2, 3);

    std::cout << figure->GetPerimetr() << std::endl;
    std::cout << figure->GetSquare() << std::endl;
}