/*
* @File:    lambda-with-vector.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-31 11:04:22
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-11-18 18:34:25
*/

#include <iostream>
#include <algorithm>
#include <vector>

std::ostream& operator<<(std::ostream& os, std::vector<int> data) {
    for (auto it=data.begin(); it!= data.end();++it)
        os << *it << " ";
    os << std::endl;
    return os;
}


int main() {
    std::vector<int> source = {0,-4,2,10,1,-5,6,-7,12,3};
    std::vector<int> dest;
    std::cout << source;
    std::transform(source.begin(), source.end(), std::back_inserter(dest),
        [](const int number) {return number*2;});
    std::cout << dest;
    int limit=4;
    std::transform(dest.begin(), dest.end(), dest.begin(),
        [limit](const int number) { return number<limit ?  number*2 : number *3;});
    std::cout << dest;
    return 0;
}
