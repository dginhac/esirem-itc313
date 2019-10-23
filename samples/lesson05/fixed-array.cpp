#include <iostream>

int main() {
	// using a literal constant
	int array1[5] = {2,3,5,7,11}; // Ok
	std::cout << array1[3] << std::endl;
 
	// using a macro symbolic constant
	#define ARRAY_LENGTH 5
	double array2[ARRAY_LENGTH] = {2.0,3.3,5.5,-7.1,11.3}; 
	std::cout << array2[4] << std::endl;
 	
 	// using a symbolic constant
	const int arrayLength = 4;
	char array3[arrayLength] = {'d','o','m', '\0'}; // Ok
	std::cout << array3 << std::endl;

	int array_size;
	std::cout << "size: ";
	std::cin >> array_size;
	// Not ok -- length is not a compile-time constant!
	// not possible to initialize the array at the declaration
	// but works with some compilers because of specific extensions
	int array4[array_size];
	return 0;
}