/*
* @File:    bank.h
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2021-01-07 09:51:34
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-01-07 10:56:55
*/

#include "person.h"

namespace money {
    class Account {
    public:
        Account(people::Person customer, double balance = 0.0);

        double balance() const;
        std::string customer() const;
        bool credit(double amount);
        bool debit(double amount);
        bool transfer(Account& account, double amount);

    private:
        people::Person _customer;
        double _balance;
    };


    class Saving : public Account {
    public:
        Saving(people::Person customer, double rate=1.0, double balance = 0.0);
        bool credit(double amount);
    private:
        double _rate;
    };
}

