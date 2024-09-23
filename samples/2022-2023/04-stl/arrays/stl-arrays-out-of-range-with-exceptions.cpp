#include <iostream>
#include <array>

int main() {
    std::array<int, 5> array1 = {14,30,-23,15,-13};
    try {
        array1[5]=42;
        std::cout << "After Last : " << array1[5] << std::endl ;
        std::cout << "Still alive" << std::endl;

        array1.at(5) = 666;
        std::cout << "After Last : " << array1.at(5) << std::endl ;
        std::cout << "Dead" << std::endl;
    }

    catch (const std::out_of_range& msg) {
        std::cerr << "ERROR: " << msg.what() << std::endl;
    }
    std::cout << "Front : " << array1.front() << std::endl ;
    std::cout << "Last : " << array1.back() << std::endl ;
    std::cout << "Bye - End of Program" << std::endl;
	return 0;
}