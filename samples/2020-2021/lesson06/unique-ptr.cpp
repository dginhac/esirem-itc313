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
}