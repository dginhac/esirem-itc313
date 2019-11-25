#include <iostream>

int main() {
    // No memory leak
    float* marks1 = new float [30]; // Allocate 30 float to store marks.
    delete [] marks1; // Clear those 30 float and make marks point to null.
    marks1 = nullptr;

    // Reallocate memory only if you have deleted
    float* marks2 = new float [30];
    marks2 = new float [30]; // Give marks another memory address
    delete [] marks2; // Delete only the last allocation
    marks2 = nullptr;

    float* marks3 = new float [30];
    float* marks4 = new float [30];
    marks4 = marks3; // The first 30 float are impossible to free
    delete [] marks3;
    marks3 = nullptr;
    //delete [] marks4; // Error: access violation
    marks4 = nullptr;
    return 0;
}