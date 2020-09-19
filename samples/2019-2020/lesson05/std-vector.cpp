#include <iostream>
#include <vector>

int main() { 
	// Dynamic array allocated on the heap 
	std::vector<int> vect_array = {14,30};
	vect_array.push_back(-23);
	vect_array.push_back(15);
	vect_array.push_back(-13);
	std::cout << "Size of std:vector = " << vect_array.size() << std::endl;
	for (int number : vect_array)
		std::cout << number << " ";
	std::cout << std::endl;
	vect_array.pop_back();
	vect_array.resize(8);	
	vect_array.at(5) = 75;
	vect_array.push_back(22);
	for (int number : vect_array)
		std::cout << number << " ";
	std::cout << std::endl;

	vect_array.resize(2);
	for (int number : vect_array)
		std::cout << number << " ";
	std::cout << std::endl;
	return 0;
}
