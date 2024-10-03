#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "address.h"
#include "date.h"

class Client {
private:
    std::string _lastname;
    std::string _firstname;
    Date _birthday;
    Address _address;

public:
    // Constructor
    Client(std::string lastname, std::string firstname, Date _birthday, Address address);

    // Getters
    std::string lastname() const;
    std::string firstname() const;
    Date birthday() const;
    Address address() const;

    // Method to return client information as a string
    std::string toString() const;
};

#endif // CLIENT_H
