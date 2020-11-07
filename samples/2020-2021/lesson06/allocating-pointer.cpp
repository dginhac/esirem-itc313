#include <iostream>

int main() {
    int* pa = nullptr; pa = new int; *pa = 42;
    std::cout << "pa: " << pa << " *pa: " << *pa << std::endl;

    int* pb = new int(666);
    std::cout << "pb: " << pb << " *pb: " << *pb << std::endl;
    int* pc = pb; // No allocation of memory
    std::cout << "pc: " << pc << " *pc: " << *pc << std::endl;

    int* pd = new int[666];
    for (auto i=0;i<666;i++) {
        *(pd+i) = i;
    }
    for (auto i=0;i<666;i++) {
        std::cout << "pd+" << i << ": " << pd+i << " *pd+" << i << ": " << *(pd+i) << std::endl;
    }
    delete pa;
    delete pb;
    // no delete pc;
    delete [] pd;
    return 0;
}