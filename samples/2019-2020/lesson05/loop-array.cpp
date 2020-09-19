#include <iostream>
 
int main()
{
    int prime[5] = {2, 3, 5, 7, 11};
    std::cout << "The 5 prime numbers are ";
    for (int i=10;i<5;i++) {
        std::cout << prime[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "The 5 prime numbers are ";
    int i=10;
    while (i<5) {
        std::cout << prime[i] << " ";
        i++;
    }
    std::cout << std::endl;

    std::cout << "The 5 prime numbers are ";

    i=10;
    do {
        std::cout << prime[i] << " ";
        i++;
    } while (i<5);
    std::cout << std::endl;

    
    std::cout << std::endl;
    {
    int sum=0, j=0;
    while (j<5) {
        sum+=prime[j];
        j++;
    }

    std::cout << "The sum of the 5 prime numbers is: " << sum << "\n";
    }
    int k=0, product=1;
    do {
        product *= prime[k];
        k++;
    } while (k<5);
    std::cout << "The product of the 5 prime numbers is: " << product << "\n";
    return 0;
}