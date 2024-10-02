#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date(int month=1, int day=1);
   int month() const;
   int day() const;
   void updateMonth(int new_month);
   void updateDay(int new_day);
   int dayOfYear() const;
   void next();
   void back();
private:
   int _month;
   int _day;
   bool isDate(int month, int day) const;
   int getDaysInMonth(int month) const;
};
#endif // DATE_H
