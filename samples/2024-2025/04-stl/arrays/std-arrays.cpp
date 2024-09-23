#include <iostream>
#include <array>

int main() {
	//Declares an array of 6 ints. Size is always required
	std::array<int, 6> primes;
	primes[0] = 2; primes[1] = 3; primes[2] = 5;
	primes.at(3) = 7; primes.at(4) = 11; primes.at(5) = 13;
	//Declare and initialize with an initializer list
	std::array<double, 5> numbers = {-2.1, -1.45, 0.1, 1.9, 2.3};
	// Access to elements
	std::cout << "Size of primes = " << primes.size() << std::endl;
	std::cout << "primes front = " << primes.front() << std::endl;
	std::cout << "numbers back = " << numbers.back() << std::endl;
	// C-Style For loop
	for (auto i=0;i<primes.size();i++)
		std::cout << primes[i] << " ";
	std::cout << std::endl;
	// C++ for loop
	for (auto number : numbers)
		std::cout << number << " ";
	std::cout << std::endl;
	return 0;
}