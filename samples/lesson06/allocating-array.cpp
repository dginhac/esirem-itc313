#include <iostream>

int main() {
    int *pa = new int[10];
    std::cout << "pa = " << pa << std::endl;
    for (int i=0; i<10; i++) {
        *(pa+i) = i%2;
    }
    for (int i=0; i<10; i++) {
        std::cout << "pa+" << i << "=" << (pa+i) 
        << " *(pa+" << i << ")=" << *(pa+i) << std::endl;
    }
    delete [] pa;
    return 0;
}