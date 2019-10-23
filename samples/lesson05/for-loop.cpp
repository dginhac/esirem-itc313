#include <iostream>

int main()
{
	/* code */

	int prime[5] = {2, 3, 5, 7, 11};
	int i=0;
	std::cout << "The 5 prime numbers are ";
	for (i=0;i<3;i++) {
		std::cout << prime[i] << " ";
	}
	std::cout << std::endl;
	
	std::cout << "i=" << i << std::endl;

	std::cout << "The 5 prime numbers are ";
	for (int i=0;i<5;i++) {
		std::cout << prime[i] << " ";
	}
	std::cout << std::endl;
	
	std::cout << "i=" << i << std::endl;
	return 0;
}