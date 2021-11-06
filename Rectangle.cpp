#include "Rectangle.h"

Rectangle::Rectangle(double a, double b)
	:Figure(a, b)
{
}

double Rectangle::GetPerimetr() {
	return 2 * (this->a + this->b);
};