#include <iostream>
#include <array>

int main() {
	std::array<int, 5> std_array = {14,30,-23,15,-13};
	
	std::cout << "After Last : " << std_array[5] << std::endl ;
	std::cout << "After Last : " << std_array.at(5) << std::endl ;
	
	return 0;
}