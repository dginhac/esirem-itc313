/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2019-10-15T09:46:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Summary:  Methods - Helpers functions
*/
#include "date.h"
#include <assert.h> 

namespace date {
    Date::Date(int month, int day) : _month(month), _day(day) {
        bool status = isDate(month, day);
        assert(status && "Date is not valid");
    }

    int Date::month() const {
    	return _month;
    }

    int Date::day() const {
    	return _day;
    }

    void Date::updateMonth(int month) {
        bool status = isDate(month, _day);
        assert(status==true && "New month is not valid");
        _month = month;
    }

    void Date::updateDay(int day) {
        bool status = isDate(_month, day);
        assert(status==true && "New day is not valid");
        _day = day;
    }

    void Date::next() {
        if ((_month==12) && (_day==31)) {
            _day=1;
            _month=1;
        }
        else if (_day==getDaysInMonth(_month)) {
            _day=1;
            _month++;
        }
        else {
            _day++;
        }
    }

    void Date::back() {
        if ((_month==1) && (_day==1)) {
            _day=31;
            _month=12;
        }
        else if (_day==1) {
            _month--;
            _day=getDaysInMonth(_month);
        }
        else {
            _day--;
        }
    }



    /**
     *
     * Helper functions
     *
    */

    bool isDate(int month, int day) {
        if ((day < 1) || (day>31)) return false;
        if ((month <1) || (month>12)) return false;
        if ((month == 2) && (day > 28)) return false;
        if (((month == 4) || (month == 6) ||
            (month == 9) || (month == 11)) && (day > 30)) return false;
        return true;
    }

    int getDaysInMonth(int month)  {
        assert(((month >=1) && (month<=12)) && "Month is not valid");
        if (month == 2) return 28;
        if ((month == 1 || month == 3 || month == 5 || month == 7
        || month == 8 || month == 10 || month == 12)) return 31;
        return 30;
    }

    int dayOfYear(Date d) {
        auto day=0;
        for (auto i=1;i<d.month();i++) {
            day+=getDaysInMonth(i);
        }
        day+= d.day();
        return day;
    }

    std::string toString(Date d) {
        return std::to_string(d.day()) + "/" + std::to_string(d.month()) ;
    }


    Date operator + (const Date& date, const int days) {
        if (days <0) { //if days <0, we call Date - (-days)
            return date - (-days);
        }
        Date tmp = date; // the current date
        int new_day = tmp.day() + days; // the new day is ok if new_day < end of month
        int new_month = tmp.month();
        int days_in_month = getDaysInMonth(tmp.month());
        while (new_day > days_in_month) { // end of the month
            new_day -= days_in_month; // the day in the next month
            new_month++;
            if (new_month > 12) { // end of the year
                new_month = 1;
            }
            //tmp.updateMonth(new_month);
            //days_in_month = getDaysInMonth(tmp.month());
            days_in_month = getDaysInMonth(new_month);
        }
        return Date(new_month, new_day);
    }

    Date operator + (const int days, const Date& date) {
        return date + days;
    }

    Date operator ++(Date& date) { // prefix increment
        date = date + 1;
        return date;
    }

    Date operator --(Date& date) { // prefix decrement
        date = date - 1;
        return date;
    }

    Date operator ++(Date& date, int) { // postfix increment
        Date tmp = date;
        date = tmp +1;
        return tmp;
    }

    Date operator --(Date& date, int) { // postfix decrement
        Date tmp = date;
        date = date - 1;
        return tmp;
    }

    Date operator - (const Date& date, const int days) {
        if (days <0) { //if days <0, we call Date + (-days)
            return date + (-days);
        }
        int new_month=date.month();
        int new_day = date.day()-days; // the new day is ok if > 0
        while (new_day <=0) {
            if (new_month==1) { // beginning of the year
                new_month=12; // in december
                new_day=31+new_day;
            }
            else { // other months than january
                int days_in_previous_month = getDaysInMonth(Date(new_month-1,1).month());
                new_day = days_in_previous_month+new_day;
                new_month--;
            }
        }
        return Date(new_month, new_day);
    }


    bool operator == (const Date& d1, const Date& d2)  { // check for equality
        if ((d1.day()==d2.day()) && (d1.month()==d2.month())) {
            return true;
        }
    return false;
    }

    bool operator !=(const Date& d1, const Date& d2)  {
        return !(d1==d2);
    }

    bool operator < (const Date& d1, const Date& d2) {
        if (d1.month()<d2.month()) {
            return true;
        }
        else if (d1.month()>d2.month()) {
            return false;
        } else { // same month
            if ( d1.day()<d2.day()) {
                return true;
            }
            else {
                return false;
            }
        }
        
        return false;
    }


    bool operator > (const Date& d1, const Date& d2) {
        if (d1==d2) {
            return false;
        }
        if (d1<d2) {
            return false;
        }
        return true;
    }

    bool operator <=(const Date& d1, const Date& d2)  {
        if (d1==d2) {
            return true;
        }
        return (d1<d2);
    }

    bool operator >=(const Date& d1, const Date& d2)  {
        if (d1==d2) {
            return true;
        }
        return (d1>d2);
    }
    

} // date
