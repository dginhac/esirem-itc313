#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date() = default;
   Date(int month, int day);
   int month();
   int day();
private:
   int _month;
   int _day;
};
#endif // DATE_H
