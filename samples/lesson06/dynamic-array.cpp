#include <iostream>

int main()
{
    int num;
    std::cout << "Enter total number of students: ";
    std::cin >> num;
    float* marks=nullptr;
    marks = new float[num]; // allocation of an array of #num floats
    std::cout << "Enter marks of students." << std::endl;
    for (int i = 0; i < num; i++) {
        std::cout << "Student" << i + 1 << ": ";
        std::cin >> *(marks + i);
    }
    std::cout << "\nDisplaying average of students." << std::endl;
    double average = 0;
    for (int i = 0; i < num; i++) {
        average += *(marks + i); 
    }
    average /= num;
    std::cout << "average = " <<   average << std::endl;
    delete [] marks; // marks memory is released
    return 0;
}
