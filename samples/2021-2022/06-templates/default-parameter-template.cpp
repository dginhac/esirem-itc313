#include <iostream>

template <typename T=double, int count=3> T power(T x){
    T p(1);
    for(int ii=0; ii<count; ii++) {
        p = p * x;
    }
    return p;
};
int main()
{
    int i1 = 2; double d1 = 2.1;
    std::cout << i1 << "^6 = " << power<int,6>(i1) << std::endl;
    std::cout << i1 << "^3 = " << power(i1) << std::endl;
    std::cout << d1 << "^2 = " << power<double,2>(d1) << std::endl;
    std::cout << d1 << "^3 = " << power<double>(d1) << std::endl;
    std::cout << d1 << "^3 = " << power(d1) << std::endl;
    
    return 0;
}
