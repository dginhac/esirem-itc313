#include <iostream>
using namespace std;

// The main function
int main(int argc, char const *argv[]) {
   // Creates a string variable
   string name;
   cout << "Enter your name: ";
   cin >> name;
   // Prints "Hello, !" + name
   // on the standard output stream (monitor)
   cout << "Hello, " << name << "!" << endl;
   // End of the program
   return 0;
}
