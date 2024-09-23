#include <iostream>

int main() {
	// Typed variables can be defined without initialization
	// but auto variables must be initialized to infer the type
	auto one = 1;
	auto pi = 3.14159;
	auto a = 'A';
	auto hello_world = "hello, world";

	std::cout << "one = " << one << std::endl;
	std::cout << "pi = " << pi << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "hello_world = " << hello_world << std::endl;
	return 0;
}
