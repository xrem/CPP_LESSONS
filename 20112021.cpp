#include <iostream>
#include <vector>
#include "MyOOR.h"

int main() {
	std::vector<int> w;
	w.push_back(11);
	w.push_back(22);
	try {
		try {
			std::cout << w.at(2) << std::endl;
		}
		catch (const std::out_of_range& err) {
			throw MyOOR();
		}
	}
	catch (const std::exception& e) {
		std::cout << "Error happend: " << e.what();
	}
	
	return 0;
}