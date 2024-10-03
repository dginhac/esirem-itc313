#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address {
private:
    int _number;
    std::string _street;
    std::string _city;
    std::string _postal_code;

public:
    // Constructor
    Address(int number, std::string street, std::string city, std::string postal_code);

    // Methods to access the address information
    int number() const;
    std::string street() const;
    std::string city() const;
    std::string postalCode() const;

    // Method to return the full address as a string
    std::string toString() const;
};

#endif // ADDRESS_H
