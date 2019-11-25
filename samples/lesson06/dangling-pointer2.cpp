#include <iostream>

int main() {
    int* pa;  // int *pa;
    pa = new int;
    *pa = 2;
    std::cout << "pa=" << pa << " - *pa=" << *pa << std::endl;
    int* pc;
    pc = pa;
    std::cout << "pc=" << pc << " - *pc=" << *pc << std::endl;
    delete pa;
    pa=nullptr;
    if (pa!=nullptr)
        std::cout << "pa=" << pa << " - *pa=" << *pa << std::endl;
    if (pc!=nullptr)
        std::cout << "pc=" << pc << " - *pc=" << *pc << std::endl;
    return 0;
}