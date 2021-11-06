#include <iostream>
#include "Fraction.h"

Fraction::Fraction(int n, int m) {
    this->n = n;
    this->m = m;
}

std::ostream& operator<<(std::ostream& cout, const Fraction& fraction)
{
    cout << fraction.n << "/" << fraction.m;
    return cout;
}