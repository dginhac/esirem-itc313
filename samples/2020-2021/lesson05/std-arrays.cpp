#include <iostream>
#include <array>

int main() {
	//Declares an array of 6 ints. Size is always required
	std::array<int, 6> array1;
	array1[0] = 1; array1[1] = 1; array1[2] = 2;
	array1.at(3) = 3; array1.at(4) = 5; array1.at(5) = 8;
	//Declare and initialize with an initializer list
	std::array<int, 5> array2 = {-2, -1, 0, 1, 2};
	// Access to elements
	std::cout << "Size of array1 = " << array1.size() << std::endl;
	std::cout << "array1 front = " << array1.front() << std::endl;
	std::cout << "array2 back = " << array2.back() << std::endl;
	// Fill all the elements with a value
	array2.fill(4);
	// C-Style For loop
	for (auto i=0;i<array2.size();i++)
		std::cout << array2[i] << " ";
	std::cout << std::endl;
	// C++ for loop
	for (auto number : array1)
		std::cout << number << " ";
	std::cout << std::endl;
	return 0;
}