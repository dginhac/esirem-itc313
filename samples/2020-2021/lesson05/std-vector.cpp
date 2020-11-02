#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vect) {
	for (int number : vect)
		os << number << " ";
	os << std::endl;
	return os;
}

int main() {
	// Dynamic array allocated on the heap
	std::vector<int> vect1;
	vect1.assign(3, 666);
	std::cout << "Size = " << vect1.size() << std::endl;
	std::cout << vect1;
	vect1.push_back(42);
	vect1.push_back(1337);
	vect1.push_back(314);
	std::cout << "Size = " << vect1.size() << std::endl;
	std::cout << vect1;
	vect1[2]= 707; vect1.at(3) = 0;
	std::cout << vect1;
	vect1.pop_back(); vect1.pop_back();
	vect1.resize(8,101);
	std::cout << vect1;
	vect1.resize(2);
	std::cout << vect1;
	vect1.clear();
	std::cout << vect1;
	return 0;
}
