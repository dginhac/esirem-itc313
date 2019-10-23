#include <iostream>
int main()
{
    // hold the first 5 prime numbers
    int prime[5] = {2,3,5,7,11}; 
    // try to acces outside of the array
    prime[5] = 13;
    std::cout << prime[5] << std::endl;
    return 0;

}
