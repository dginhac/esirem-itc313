#include <iostream>

// declaration of add_numbers function
int add_numbers (int a, int b);

int main() {
	int number1 = 3;
	int number2 = 2;
	int number3 = 0;
	std::cout << "number3 = " << number3 << std::endl;
	// call of add_numbers function
	number3 = add_numbers (number1, number2);
	std::cout << "number3 = " << number3 << std::endl;
	return 0;
}
// definition of add_numbers function
int add_numbers (int a, int b) {
	int sum = a + b;
	return sum;
}