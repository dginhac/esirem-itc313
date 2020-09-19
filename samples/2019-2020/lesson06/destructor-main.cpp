#include<iostream> 

#include "string.h"

int main() {
    // Allocate a String on the stack
    String str2("I am a Geek!");
    // Allocate a String dynamically
    String *str1 = new String("I am also a Jedi!");
    delete str1;
    return 0;
}
