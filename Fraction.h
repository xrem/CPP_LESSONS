#pragma once

#include <iostream>

class Fraction {
public:
	int n;
	int m;
	Fraction(int, int);
	friend std::ostream& operator<<(std::ostream&, const Fraction&);

	// friend Fraction FractionAdder::add(const Fraction& left, const Fraction& right);
};