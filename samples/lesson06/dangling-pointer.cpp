#include <iostream>

int main() {
    int* pa;  // int *pa;
    pa = new int;
    *pa = 2;
    std::cout << "pa=" << pa << " - *pa=" << *pa << std::endl;

    delete pa;
    std::cout << "pa=" << pa << " - *pa=" << *pa << std::endl;

    pa = nullptr;
    if (pa!=nullptr)
        std::cout << "pa=" << pa << " - *pa=" << *pa << std::endl;

    return 0;
}