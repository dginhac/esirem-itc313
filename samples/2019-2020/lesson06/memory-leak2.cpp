#include <iostream>

// Leak: allocated data are not available outside the function
// Rule: Do not forget to delete data before end of the function
void Leak(int x) {
    int* data = new int [x];
    for (int i=0;i<x;i++)
        *(data+i)=i;
    // delete [] data; // Remove the first comment marking to correct.
}
// No leak: Allocated data are available outside the function
int * NoLeak(int x) {
    int* data = new int [x];
    for (int i=0;i<x;i++)
        *(data+i)=i;
    return data;
}
int main() {
    Leak(100);
    int* data2 = NoLeak(1000);
    // Do not forget to use delete
    delete [] data2;
    data2 = nullptr;
    return 0;
}