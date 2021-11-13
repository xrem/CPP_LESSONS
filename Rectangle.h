#pragma once
#include "Figure.h"

class Rectangle :
    public Figure
{
private:
    double a;
    double b;
public:
    Rectangle(double a, double b);

    virtual double GetPerimetr() override;
    virtual double GetSquare() override;
};

