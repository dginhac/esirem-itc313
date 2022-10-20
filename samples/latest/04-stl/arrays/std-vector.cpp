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
	std::vector<int> data;
	data.assign(3, 666);
	std::cout << "Size = " << data.size() << std::endl;
	std::cout << data;
	data.push_back(42);
	data.push_back(1337);
	data.push_back(314);
	std::cout << "Size = " << data.size() << std::endl;
	std::cout << data;
	data[2]= 707; data.at(3) = 0;
	std::cout << data;
	data.pop_back();
	data.pop_back();
	std::cout << data;
	data.resize(8,101);
	std::cout << data;
	data.resize(2);
	std::cout << data;
	data.clear();
	std::cout << data;
	return 0;
}
