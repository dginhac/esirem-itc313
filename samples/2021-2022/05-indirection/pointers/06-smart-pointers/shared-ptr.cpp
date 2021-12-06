/*
* @File:    shared-ptr.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-11-07 08:04:54
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-07 08:19:22
*/


#include <iostream>


class Data {
private:
    int _data;
public:
    Data() : _data(0) {}
    int data() { return _data;}
    void data(int d) {_data = d;}
    ~Data() { std::cout << "Destroy Data " << std::endl;}
};
int main() {
    //std::unique_ptr<Data>    smart_ptr(new Data);
    //smart_ptr->data(42);
    // Error because unique_ptr does not have a copy constructor
    //std::unique_ptr<Data> smart_ptr2 = smart_ptr;
    // Use std::move instead
    //std::unique_ptr<Data> smart_ptr2(std::move(smart_ptr));
    //std::cout << smart_ptr2->data() << std::endl;
    std::shared_ptr<Data> smart_ptr3(new Data);
    std::shared_ptr<Data> smart_ptr4 = smart_ptr3;
    smart_ptr3->data(666);
    std::cout << smart_ptr3->data() << std::endl;
    std::cout << smart_ptr4->data() << std::endl;
    smart_ptr4->data(1337);
    std::cout << smart_ptr3->data() << std::endl;
    std::cout << smart_ptr4->data() << std::endl;
}