#include <iostream>
#include <vector>

template<typename T, typename S> S mean(const std::vector<T>& data)
{
    S sum(0);
    for (auto d: data) {
        sum += d;
    }
    if (data.size()>0)
        return sum/data.size();
    else
        return -1;
}
int main() {
    std::vector<int> tab = {3, 5, 5, 2, 1};
    std::cout << "Mean : " << mean<int,double>(tab) << std::endl;
    std::cout << "Mean : " << mean<int,int>(tab) << std::endl;
    return 0;
}

