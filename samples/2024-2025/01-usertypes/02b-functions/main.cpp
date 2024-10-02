#include <iostream>
#include "arithmetic.h"

int main() {
	auto result = add(4,5);
	std::cout << "4+5=" << result << std::endl;
	result = add(6,5);
	std::cout << "6+5=" << result << std::endl;
	auto a = 3, b=4;
	result = sub(a,b);
	std::cout << a << "-" << b << "=" << result << std::endl;
	return 0;
}
