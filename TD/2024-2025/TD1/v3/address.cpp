#include "address.h"

// Constructor
Address::Address(int number, std::string street, std::string city, std::string postal_code)
    : _number(number), _street(street), _city(city), _postal_code(postal_code) {}

// Getters
int Address::number() const { return _number; }
std::string Address::street() const { return _street; }
std::string Address::city() const { return _city; }
std::string Address::postalCode() const { return _postal_code; }

// Method to return the full address as a string
std::string Address::toString() const {
    return std::to_string(_number) + " " + _street + ", " + _city + " " + _postal_code;
}
