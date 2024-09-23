#include <iostream>

int main() {
	// integer type can be short, int, long, and unsigned
	int a_number_not_initialized; // not initialized
	int the_answer = 42; // expression from C-language
	int the_space_odissey(2001); // expression list from C++ Constructor
	int the_number_of_the_beast{666}; // initializer list since C++11
	// floating point type (simple or double precision)
	float pi = 3.14159, golden_number(1.61803);
	double square_root_of_2 = 1.41421356237;
	// character type
	char a = 'a';
	// boolean : true or false
	bool true_or_false = true;
	// constant can not be modified and must be initialized when declared
	const int dalmatians = 101;

	std::cout << "The number is " << a_number_not_initialized << std::endl;
	std::cout << "The answer is " << the_answer << std::endl;
	std::cout << "The space odyssey is " << the_space_odissey << std::endl;
	std::cout << "The number of the beast is " << the_number_of_the_beast << std::endl;
	std::cout << "The value of pi is " << pi << std::endl;
	std::cout << "The golden number is " << golden_number << std::endl;
	std::cout << "The square root of 2 is " << square_root_of_2 << std::endl;
	std::cout << "The character is " << a << std::endl;
	std::cout << "The boolean is " << true_or_false << std::endl;
	std::cout << "The number of dalmatians is " << dalmatians << std::endl;
	return 0;
}
