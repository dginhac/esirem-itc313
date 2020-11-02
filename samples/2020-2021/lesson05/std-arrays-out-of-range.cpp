#include <iostream>
#include <array>

int main() {
    std::array<int, 5> array1 = {14,30,-23,15,-13};
    array1[5]=42;
    std::cout << "After Last : " << array1[5] << std::endl ;
    std::cout << "Still alive" << std::endl;

    array1.at(5) = 666;
    std::cout << "After Last : " << array1.at(5) << std::endl ;
    std::cout << "Dead" << std::endl;
	return 0;
}