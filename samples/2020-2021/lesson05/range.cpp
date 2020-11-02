/*
* @File:    range.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-22 16:06:36
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-30 14:37:44
*/

#include <array>
#include <vector>
#include <iostream>

std::ostream& operator<<(std::ostream& os, std::vector<int> data) {
    for (auto it=data.begin(); it!= data.end();++it)
        os << *it << " ";
    os << std::endl;
    return os;
}

int main() {
    std::vector<int> data = {1,3,5,7,9,11,13,15,17,19};
    std::cout << data;

    // loop based
    std::vector<int> sub_data1;
    for (auto it=data.begin()+2; it!= data.begin()+8;++it)
        sub_data1.push_back(*it);
    std::cout <<sub_data1;

    // copy based
    std::vector<int> sub_data2;
    std::copy(data.begin()+2, data.begin()+8, std::back_inserter(sub_data2));
    std::cout << sub_data2;

    // range constructor based
    std::vector<int> sub_data3 = {data.begin()+2, data.begin()+8};
    std::cout << sub_data3;
    return 0;
}
