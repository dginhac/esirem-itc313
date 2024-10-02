#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date(int month=1, int day=1);
   int month() const;
   int day() const;
private:
   bool isDate(int month, int day) const;
   int _month;
   int _day;
};
#endif // DATE_H
