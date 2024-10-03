#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client {
private:
    std::string _lastname;
    std::string _firstname;

public:
    // Constructor
    Client(std::string lastname, std::string firstname);

    // Getters
    std::string lastname() const;
    std::string firstname() const;

    // Method to return client information as a string
    std::string toString() const;
};

#endif // CLIENT_H
