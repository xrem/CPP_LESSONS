#include <iostream>
#include "Point2D.h"

using namespace std;

int fib(int index) {
	if (index <= 2) {
		return 1;
	}
	return fib(index - 1) + fib(index - 2);
}

int add(int a, int b) {
	cout << "Consider using float" << endl;
	return a + b;
}

// Указание компилятору о том чем является буква Т
template <typename T>
T add(T a, T b) {
	return a + b;
}

int main() {
	Point2D<int> intPoint(2, 3);
	Point2D<float> floatPoint(1.5, 2.1);
	cout << add(intPoint.x, intPoint.x) << endl;
	cout << add<float>(floatPoint.x, floatPoint.y) << endl;
}