#include <iostream>
#include <array>

int main() {
    std::array<int, 5> data = {14,30,-23,15,-13};
    data[5]=42;
    std::cout << "After Last : " << data[5] << std::endl ;
    std::cout << "Still alive" << std::endl;

    data.at(5) = 666;
    std::cout << "After Last : " << data.at(5) << std::endl ;
    std::cout << "Dead" << std::endl;
	return 0;
}