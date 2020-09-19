#include<iostream> 
using namespace std; 

class String {
private:
    char *m_s;     
    int m_size;
public:
    String(const char *str=NULL); // constructor
    ~String();  // destructor
};


