#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date(int month=1, int day=1);
   int month() const;
   int day() const;
   void updateMonth(int new_month);
   void updateDay(int new_day);
private:
   bool isDate(int month, int day) const;
   int _month;
   int _day;
};
#endif // DATE_H
