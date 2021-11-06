#include <iostream>
#include "Fraction.h";
#include "FractionAdder.h";
#include "Figure.h";
#include "Rectangle.h";

int main()
{
    Fraction half(1, 2);
    Fraction three_quarters(3, 4);
    //FractionAdder adder;

    Figure* figure = new Rectangle(2, 3);

    std::cout << figure->GetPerimetr() << std::endl;
    
    std::cout 
        << half << " + " << three_quarters 
        << " = " << FractionAdder::add(half, three_quarters)
        << std::endl;
}