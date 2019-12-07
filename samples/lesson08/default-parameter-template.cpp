#include <iostream>

template <typename T=double, int count=3> T multIt(T x){
    for(int ii=0; ii<count; ii++) {
        x = x * x;
    }
    return x;
};
int main()
{
    int i1 = 2; double d1 = 2.1;
    std::cout << i1 << ": " << multIt<int,6>(i1) << std::endl;
    std::cout << i1 << ": " << multIt<int>(i1) << std::endl;
    std::cout << d1 << ": " << multIt<double,2>(d1) << std::endl;
    std::cout << d1 << ": " << multIt<double>(d1) << std::endl;
    std::cout << d1 << ": " << multIt<>(d1) << std::endl;
    return 0;
}
