#pragma once

#include <iostream>
#include "FractionAdder.h"

class Fraction {
	friend Fraction FractionAdder::add(const Fraction& left, const Fraction& right);
private:
	int n;
	int m;
public:
	Fraction(int, int);
	friend std::ostream& operator<<(std::ostream&, const Fraction&);
};