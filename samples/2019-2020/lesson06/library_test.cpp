#include <iostream>
#include "library.h"

int main()
{
    Book b1("The Hitchhiker’s Guide to the Galaxy",
            "Douglas Adams", 1979, SciFi, 42);
    Book b2("The mystery of the great pyramid",
            "Edgar P. Jacobs", 1954, Comic, 46);

    Library lib("My lib");
    lib.addBook(b1);
    lib.addBook(b2);
    lib.addBook("I, Robot", "Isaac Asimov", 1950, SciFi, 3);
    lib.display();
    //lib.printAd("Book[0]: ", 0);
    //lib.printAd("Book[1]: ", 1);
    //lib.printAd("Book[2]: ", 2);
    std::string new_title = "The Mystery of the Great Pyramid - Part 1";    
    std::cout << "Updating book 46" << std::endl;
    //Book& b=lib.getBookFromId(46);
    lib.updateBookTitle(lib.getBookFromId(46),new_title);
    lib.display();
    return 0;
}