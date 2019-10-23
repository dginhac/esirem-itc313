#include <iostream>
#include <vector>

int main() { 
	// Dynamic array allocated on the heap 
	std::vector<int> vect_array = {14,30,-23,15,-13};
	std::cout << "Using index" << std::endl;
	std::cout << "After Last : " << vect_array[6] << std::endl ;
	std::cout << std::endl;
	std::cout << "Using method at" << std::endl;
	std::cout << "After Last : " << vect_array.at(6) << std::endl ;
	return 0;
}
