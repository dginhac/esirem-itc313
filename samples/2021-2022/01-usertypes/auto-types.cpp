#include <iostream>

int main() {
	// variables can be defined without initialization
	int i0;

	// auto variables must be initialized to infer the type
	auto i1 = 1;
	auto r1 = 3.14159;
	auto c1 = 'A';
	auto str1 = "hello, world";

	// generate a compilation error
	// auto str2;

	std::cout << "i0 = " << i0 << std::endl;
	std::cout << "i1 = " << i1 << std::endl;
	std::cout << "r1 = " << r1 << std::endl;
	std::cout << "c1 = " << c1 << std::endl;
	std::cout << "str1 = " << str1 << std::endl;
	return 0;
}
