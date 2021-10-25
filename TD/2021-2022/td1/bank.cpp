/*
* @File:    bank.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2021-01-07 09:52:24
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-10-11 11:49:03
*/

#include "bank.h"

namespace money {
    Account::Account(people::Person customer, double balance) : _customer(customer), _balance(balance) {
        assert(balance > 0.0 && "Balance must be positive");
        }

    double Account::balance() const {
        return _balance;
    }
 
    std::string Account::customer() const {
        return getFullName(_customer);
    }

    bool Account::credit(double amount) {
        if (amount >= 0) {
            _balance += amount;
            return true;
        }
        return false;
    }

    bool Account::debit(double amount) {
        if ((amount >= 0) && (amount <= _balance)) {
            _balance -= amount;
            return true;
        }
        return false;
    }
    bool Account::transfer(Account& account, double amount) {
        if (debit(amount)) {
            if (account.credit(amount)) {
                return true;
            }
        }
        return false;
    }

    Saving::Saving(people::Person customer, double rate, double balance) : Account(customer, balance), _rate(rate) {}
    bool Saving::credit(double amount) {
        return Account::credit(amount * (1+_rate/100));
    }


}


