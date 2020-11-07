/*
* @File:    smart-pointers.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-11-06 16:30:02
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-07 07:58:42
*/

#include <iostream>

class Data {
private:
    int _data;
public:
    Data() : _data(0) {}
    int data() { return _data;}
    void data(int d) {_data = d;}
    ~Data() {
        std::cout << "Destroy Data " << std::endl;
    }
};

int main() {
    Data* ptr = new Data;
    Data* array = new Data[5];

    ptr->data(42);
    std::cout << ptr->data() << std::endl;

    for (auto i=0; i<5; i++ ) {
        (array+i)->data(2*i+1);
    }
    for (auto i=0; i<5; i++ ) {
        std::cout << (array+i)->data() << " ";
    }
    std::cout << std::endl;

    delete ptr;
    delete [] array;


    std::unique_ptr<Data>    smart_ptr(new Data);
    std::unique_ptr<Data[]>  smart_array(new Data[5]);

    smart_ptr->data(666);
    std::cout << smart_ptr->data() << std::endl;

    for (auto i=0; i<5; i++ ) {
        smart_array[i].data(3*i+1);
    }
    for (auto i=0; i<5; i++ ) {
        std::cout << smart_array[i].data() << " ";
    }
    std::cout << std::endl;

    // std::make_unique requires c++14
    std::unique_ptr<Data> smart_ptr2 = std::make_unique<Data>();
    std::unique_ptr<Data[]> smart_array2 = std::make_unique<Data[]>(5);


    smart_ptr2->data(1337);
    std::cout << smart_ptr2->data() << std::endl;

    for (auto i=0; i<5; i++ ) {
        smart_array2[i].data(4*i+1);
    }
    for (auto i=0; i<5; i++ ) {
        std::cout << smart_array2[i].data() << " ";
    }
    std::cout << std::endl;

    std::cout << "That's all folks!" << std::endl;
    return 0;
}