#include "client.h"
#include "address.h"

// Constructor
Client::Client(std::string lastname, std::string firstname, Date birthday, Address address)
    : _lastname(lastname), _firstname(firstname), _birthday(birthday), _address(address) {}

// Getter for lastname
std::string Client::lastname() const {
    return _lastname;
}

// Getter for firstname
std::string Client::firstname() const {
    return _firstname;
}

// Getter for birthday
Date Client::birthday() const {
    return _birthday;
}

// Getter for address
Address Client::address() const {
    return _address;
}

// Return client information as a formatted string
std::string Client::toString() const {
    return _firstname + " " + _lastname + " (" + _birthday.toString() + ") - " + _address.toString();
}
