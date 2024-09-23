#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vect) {
	os << "data: ";
	for (auto number : vect)
		os << number << " ";
	os << std::endl;
	return os;
}

int main() {
	// Dynamic array allocated on the heap
	std::vector<int> data = {14,30,-23,15,-13};
	std::cout << "Using index" << std::endl;
    data[6] = 666;
	std::cout << "After Last : " << data[6] << std::endl ;
	std::cout << data;
	std::cout << std::endl;
	std::cout << "Using method at" << std::endl;
	std::cout << "After Last : " << data.at(6) << std::endl ;
	std::cout << data;
	return 0;
}
