#include "client.h"

// Constructor
Client::Client(std::string lastname, std::string firstname)
    : _lastname(lastname), _firstname(firstname) {}

// Getter for lastname
std::string Client::lastname() const {
    return _lastname;
}

// Getter for firstname
std::string Client::firstname() const {
    return _firstname;
}

// Return client information as a formatted string
std::string Client::toString() const {
    return _firstname + " " + _lastname;
}
