#pragma once
#include "Figure.h"
class Rectangle :
    public Figure
{
public:
    Rectangle(double a, double b);

    double GetPerimetr() override;
};

