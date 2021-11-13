#include "Rectangle.h"

Rectangle::Rectangle(double a, double b)
{
	this->a = a;
	this->b = b;
}

double Rectangle::GetPerimetr() {
	return 2 * (this->a + this->b);
};

double Rectangle::GetSquare() {
	return (this->a * this->b);
}