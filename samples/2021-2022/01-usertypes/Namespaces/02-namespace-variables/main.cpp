#include <iostream>

namespace ns1 {
	int val = 42;
} // ns1

namespace ns2 {
	double val = 3.14;
} // ns2

double val = 2.718;

int main() {
	std::cout << "The answer: " << ns1::val << std::endl;
	std::cout << "pi: " << ns2::val << std::endl;
	double val = 1.6180339887;
	std::cout << "Golden number: " << val << std::endl;
	std::cout << "Euler's number: " << ::val << std::endl;
	return 0;
}
