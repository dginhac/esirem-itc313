/*
* @File:    memory-leak.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-11-07 08:22:50
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-07 09:12:16
*/

#include <iostream>

int main() {
    // No memory leak
    float* marks1 = new float [30]; // Allocate 30 float to store marks.
    delete [] marks1; // Clear those 30 float and make marks point to null.
    marks1 = nullptr;

    // 1: forget delete
    float* marks2 = new float [30];

    // 2: Reallocate memory only if you have deleted
    float* marks3 = new float [30];
    marks3 = new float [30]; // Give marks another memory address
    delete [] marks3; // Delete only the last allocation
    marks3 = nullptr;

    float* marks4 = new float [30];
    float* marks5 = new float [30];
    marks5 = marks4; // The first 30 float are impossible to free
    delete [] marks4;
    marks4 = nullptr;
    //delete [] marks5; // Error: access violation
    marks5 = nullptr;
    return 0;
}