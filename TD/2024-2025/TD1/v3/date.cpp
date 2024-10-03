#include "date.h"
#include <stdexcept>

// Helper function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Helper function to check if a date is valid
bool isValidDate(int year, int month, int day) {
    if (month < 1 || month > 12) {
        return false;  // Invalid month
    }

    // Days in each month (ignoring leap years for now)
    const int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Handle February for leap years
    if (month == 2 && isLeapYear(year)) {
        return day >= 1 && day <= 29;  // February in a leap year
    }

    return day >= 1 && day <= days_in_month[month - 1];  // General day validation
}

// Constructor with validation
Date::Date(int year, int month, int day) {
    if (!isValidDate(year, month, day)) {
        throw std::invalid_argument("Invalid date provided.");
    }
    _day = day;
    _month = month;
    _year = year;
}

// Getters
int Date::day() const { return _day; }
int Date::month() const { return _month; }
int Date::year() const { return _year; }

// Method to return the date as a formatted string
std::string Date::toString() const {
    return std::to_string(_day) + "/" + std::to_string(_month) + "/" + std::to_string(_year);
}
