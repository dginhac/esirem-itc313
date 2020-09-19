#include<iostream> 

#include "string.h"

String::String(const char *str) { // constructor
    m_size = strlen (str); // strlen looks for the first \0
    m_s = new char[m_size+1];
    strcpy(m_s, str);
}
String::~String() { // destructor
    cout << "Destructor: " << m_s << endl;
    delete [] m_s;
    m_s = NULL;
}




