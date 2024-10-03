#include "bankaccount.h"

// Constructor
BankAccount::BankAccount(std::string account_number, std::string client_name, double initial_balance)
    : _account_number(account_number), _client_name(client_name), _balance(initial_balance) {
    // No validation in constructor, as it's handled externally
}

// Method to withdraw money
bool BankAccount::withdraw(double amount) {
    if (amount > _balance) {
        return false;  // Insufficient balance, withdrawal failed
    } else {
        _balance -= amount;
        return true;   // Withdrawal successful
    }
}

// Method to deposit money
bool BankAccount::deposit(double amount) {
    if (amount <= 0) {
        return false;  // Invalid deposit amount
    } else {
        _balance += amount;
        return true;   // Deposit successful
    }
}

// Method to transfer money to another account
bool BankAccount::transferTo(BankAccount& other_account, double amount) {
    if (amount > _balance) {
        return false;  // Insufficient balance for transfer
    } else {
        withdraw(amount);
        other_account.deposit(amount);
        return true;   // Transfer successful
    }
}

// Return account information as a formatted string
std::string BankAccount::accountInfo() const {
    return "Account No: " + _account_number + ", Client: " + _client_name + ", Balance: " + std::to_string(_balance) + " euros.";
}

// Getter for balance
double BankAccount::balance() const {
    return _balance;
}
