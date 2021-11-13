#include "FractionAdder.h"
#include "Fraction.h"

Fraction FractionAdder::add(const Fraction& left, const Fraction& right) {
	int denominator = left.m * right.m;
	int nominator = (denominator / left.m * left.n) + (denominator / right.m * right.n);
	return Fraction(nominator, denominator);
};