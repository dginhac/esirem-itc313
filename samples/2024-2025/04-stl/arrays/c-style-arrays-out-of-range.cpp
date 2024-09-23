#include <iostream>
int main() {
    // hold the first 5 prime numbers
    int prime[5] = {2,3,5,7,11};
    // try to access outside the array
    prime[7] = 13;
    std::cout << prime[7] << std::endl;
    for (auto i=0; i<10; i++) {
        std::cout << prime[i] << " ";
    }
    std::cout  << std::endl;
    return 0;
}
