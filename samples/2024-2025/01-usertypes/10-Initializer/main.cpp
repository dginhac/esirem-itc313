#include <iostream>
#include "date.h"
#include "person.h"

int main(int argc, char const *argv[]) {
    Date my_birthday(5, 26);
    Person me("Dom", "Ginhac", my_birthday);
    return 0;
}
