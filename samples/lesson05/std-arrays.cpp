#include <iostream>
#include <array>

int main() {
	std::array<int, 5> std_array = {14,30,-23,15};
	std::cout << "Size of std:array = " << std_array.size() << std::endl;
	for (int number : std_array)
		std::cout << number << " ";
	std::cout << std::endl;
	std::cout << "First element: " << std_array.front() << " - "; // or std_array[0]
	std::cout << "Element 3: " << std_array.at(3) << " - " ; // or std_array[3]
	std::cout << "Last element: " << std_array.back() << std::endl ; // or std_array[4]
	std::cout << "After Last : " << std_array[5] << std::endl ;
	std::cout << "After Last : " << std_array.at(5) << std::endl ;
	std_array.fill(4);
	for (int i=0;i<std_array.size();i++)
		std::cout << std_array[i] << " ";
	std::cout << std::endl;
	return 0;
}