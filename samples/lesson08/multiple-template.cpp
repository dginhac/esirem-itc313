#include <iostream>

template<typename T, typename S> S mean(const T array[], int size)
{
    S sum(0);
    for(int i(0); i<size; ++i)
        sum += array[i];
    if (size>0)
        return sum/size;
    else
        return 0;
}
int main() {
    int tab[5] = {3, 5, 5, 2, 1};
    std::cout << "Mean : " << mean<int,double>(tab,5) << std::endl;
    return 0;
}

