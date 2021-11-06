#pragma once
class Figure
{
protected:
	double a;
	double b;
public:
	Figure(double a, double b);

	virtual double GetPerimetr() = 0;
};

