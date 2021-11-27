#include <iostream>
#include <vector>
#include "NumberIsNegativeException.h"
#include "NumberIsTooBigException.h"
/*
int fib(int index) {
	if (index < 0) {
		throw NumberIsNegativeException();
	}
	if (index >= 40) {
		throw NumberIsTooBigException();
	}
	if (index <= 2) {
		return 1;
	}
	return fib(index - 1) + fib(index - 2);
}

int main() {
	for (int i = -2; i <= 42; i++) {
		std::cout << "fib(" << i << ") = ";
		try {
			std::cout << fib(i);
		} catch (const std::exception& e) {
			std::cout << "ERROR! " << e.what();
		}
		std::cout << std::endl;
	}
	
	return 0;
}
*/