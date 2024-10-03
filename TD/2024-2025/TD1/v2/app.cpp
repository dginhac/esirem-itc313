#include "bankaccount.h"
#include "client.h"
#include <iostream>

int main() {
    // Create two clients
    Client client1("Smith", "Alice");
    Client client2("Johnson", "Bob");

    // Create two bank accounts associated with the clients
    BankAccount account1("FR123456", client1, 500.0);
    BankAccount account2("FR654321", client2, 300.0);

    // Display initial account information
    std::cout << account1.accountInfo() << std::endl;
    std::cout << account2.accountInfo() << std::endl;

    // Perform a withdrawal from account1
    std::cout << "\nAttempting to withdraw 100.0 from account1..." << std::endl;
    if (account1.withdraw(100.0)) {
        std::cout << "Withdrawal successful!" << std::endl;
    } else {
        std::cout << "Withdrawal failed: insufficient balance." << std::endl;
    }

    // Perform a deposit into account2
    std::cout << "\nAttempting to deposit 200.0 into account2..." << std::endl;
    if (account2.deposit(200.0)) {
        std::cout << "Deposit successful!" << std::endl;
    } else {
        std::cout << "Deposit failed: invalid amount." << std::endl;
    }

    // Perform a transfer from account1 to account2
    std::cout << "\nAttempting to transfer 50.0 from account1 to account2..." << std::endl;
    if (account1.transferTo(account2, 50.0)) {
        std::cout << "Transfer successful!" << std::endl;
    } else {
        std::cout << "Transfer failed: insufficient balance." << std::endl;
    }

    // Display account information after operations
    std::cout << "\nFinal account information:" << std::endl;
    std::cout << account1.accountInfo() << std::endl;
    std::cout << account2.accountInfo() << std::endl;

    return 0;
}
