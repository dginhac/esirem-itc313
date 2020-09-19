#include <iostream>
#include <array>
void printArray(std::array<int, 5> my_array) {
    for (int number : my_array)
        std::cout << number << " ";
    std::cout  << std::endl;
}
void printArrayWithConstRef(const std::array<int, 5>& my_array) {
    for (int number : my_array)
        std::cout << number << " ";
    std::cout  << std::endl;
}
void updateArray(std::array<int, 5> my_array) {
    std::cout << "updateArray: Ad(my_array) = " << &my_array << std::endl;
    my_array[2]=666;
}
void updateArrayWithRef(std::array<int, 5>& my_array) {
    std::cout << "updateArrayWithRef: Ad(my_array) = " << &my_array << std::endl;
    my_array[3]=999; 
}
int main() {
    std::array<int, 5> array1 = {14,30,-23,15,-13};
    std::cout << "In main, Ad(array1) = " << &array1 << std::endl;
    printArray(array1);
    updateArray(array1);
    printArray(array1);
    updateArrayWithRef(array1);
    printArray(array1);
    array1[2]=666; 
    printArrayWithConstRef(array1);
    return 0;
}