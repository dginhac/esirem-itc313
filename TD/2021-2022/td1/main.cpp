/*
* @File:    main.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2021-01-07 10:04:11
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-10-11 12:07:51
*/

#include <iostream>
#include "bank.h"


int main(int argc, char const *argv[])
{


    //money::Account a0(people::Person("Dom", "Ginhac"), -1000);


    money::Account a1(people::Person("Dom", "Ginhac"), 1000);

    std::cout << "Account a1 - " << a1.customer() << std::endl;
    std::cout << "Initial value: " << a1.balance() << "€" << std::endl;
    a1.credit(123.45);
    std::cout << "Add 123.45€: " << a1.balance() << "€" << std::endl;
    a1.credit(-10.4);
    std::cout << "Add -10,4€: " << a1.balance() << "€" << std::endl;
    a1.debit(345.78);
    std::cout << "Sub 345.78€: " << a1.balance() << "€" << std::endl;
    a1.debit(-10.4);
    std::cout << "Sub -10.4€: " << a1.balance() << "€" << std::endl;
    a1.debit(100000);
    std::cout << "Sub 100 000€: " << a1.balance() << "€" << std::endl << std::endl;

    money::Account a2(people::Person("Steve", "Jobs"), 500);
    std::cout << "Account a2 - " << a2.customer() << std::endl;
    std::cout << "Initial value: " << a2.balance() << "€" << std::endl;
    std::cout << "Transfer 234.45€ from a1 to a2" << std::endl;
    a1.transfer(a2, 234.45);
    std::cout << "a1: " << a1.balance() << "€" << std::endl;
    std::cout << "a2: " << a2.balance() << "€" << std::endl;
    std::cout << "Transfer 1234.45€ from a1 to a2" << std::endl;
    a1.transfer(a2, 1234.45);
    std::cout << "a1: " << a1.balance() << "€" << std::endl;
    std::cout << "a2: " << a2.balance() << "€" << std::endl << std::endl;

    money::Saving a3(people::Person("Bill", "Gates"), 2, 1000);
    std::cout << "Account a3 - " << a3.customer() << std::endl;
    std::cout << "Initial value: " << a3.balance() << "€" << std::endl;
    a3.credit(100);
    std::cout << "a3: " << a3.balance() << "€" << std::endl;

    return 0;
}
