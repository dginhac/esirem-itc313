#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int _year;
    int _month;
    int _day;

public:
    // Constructor with date validation
    Date(int year, int month, int day);

    // Methods to access the date information
    int day() const;
    int month() const;
    int year() const;

    // Method to return the date as a formatted string
    std::string toString() const;
};

// Helper functions to check leap year and valid date
bool isLeapYear(int year);
bool isValidDate(int year, int month, int day);

#endif // DATE_H
