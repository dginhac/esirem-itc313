#include <iostream>
#include <array>
void printArray(std::array<int, 5> my_array) {
	for (int number : my_array) {
		std::cout << number << " ";
	}
	std::cout  << std::endl;
}
void updateArray1(std::array<int, 5> my_array) {
	std::cout << "In useArray1, Address(my_array) = " << &my_array << std::endl;
	my_array[3]=999;
}
void updateArray2(const std::array<int, 5>& my_array) {
	std::cout << "In useArray3, Address(my_array) = " << &my_array << std::endl;
	//my_array[3]=999; // Error if uncommented
}
void updateArray3(std::array<int, 5>& my_array) {
	std::cout << "In useArray2, Address(my_array) = " << &my_array << std::endl;
	my_array[3]=999;
}
int main() {
    std::array<int, 5> array1 = {14,30,-23,15,-13};
    std::cout << "In main, Address(array1) = " << &array1 << std::endl;
    updateArray1(array1);
    printArray(array1);
    updateArray2(array1);
    printArray(array1);
    updateArray3(array1);
    printArray(array1);
    return 0;
}