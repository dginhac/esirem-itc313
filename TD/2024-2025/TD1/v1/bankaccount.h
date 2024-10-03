#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
private:
    std::string _account_number;
    std::string _client_name;
    double _balance;

public:
    // Constructor assumes initial_balance is already valid
    BankAccount(std::string account_number, std::string client_name, double initial_balance);

    // Methods for bank operations, returning bool for success/failure
    bool withdraw(double amount);
    bool deposit(double amount);
    bool transferTo(BankAccount& other_account, double amount);

    // Display account information as a string
    std::string accountInfo() const;

    // Getter for balance
    double balance() const;
};

#endif // BANKACCOUNT_H
