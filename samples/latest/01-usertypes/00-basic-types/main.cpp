#include <iostream>

int main() {
	// integer type can be short, long, and unsigned
	int i1 = 1; // expression from C-language
	int i2(5); // expression list from C++ Constructor
	int i3{7}; // initializer list since C++11
	// floating point type (simple or double precision)
	float r1 = 3.14159, r2(0.12345), r3{6.789};
	double d1 = 6e-4, d2(0.4), d3{6.46546764};
	// character type
	char c1 = 'A', c2('B'), c3{'C'};
	// boolean : true or false
	bool b1 = true, b2(false), b3{true};
	// constant can not be modified and must be initialized when declared
	const int c_int = 10;

	std::cout << "i1 = " << i1 << " - i2 = " << i2 << " - i3 = " << i3 <<std::endl;
	std::cout << "r1 = " << r1 << " - r2 = " << r2 << " - r3 = " << r3 << std::endl;
	std::cout << "d1 = " << d1 << " - d2 = " << d2 << " - d3 = " << d3 << std::endl;
	std::cout << "c1 = " << c1 << " - c2 = " << c2 << " - c3 = " << c3 << std::endl;
	std::cout << "b1 = " << b1 << " - b2 = " << b2 << " - b3 = " << b3 << std::endl;
	std::cout << "c_int = " << c_int << std::endl;
	return 0;
}
