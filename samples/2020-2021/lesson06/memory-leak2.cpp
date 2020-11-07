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

/*void NoLeak2(int x, int *data) {
    data = new int[x];
    for (int i=0;i<x;i++)
        *(data+i)=i;
}
*/
int main() {
    Leak(100);
    int* data = NoLeak(1000);
    // Do not forget to use delete
    delete [] data;
    data = nullptr;

    int *data2 = nullptr;
   // NoLeak2(1000, data2);
    std::cout << data2  << std::endl;
    return 0;
}







