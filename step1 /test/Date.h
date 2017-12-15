#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

const string weekDay[7] = {"Sunday", "Monday", "Tuesday", "Wendsday", "Thursday", "Friday", "Saturday"};

const string monthName[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

class Date{
    public:
        Date(int year, int month, int day);
        friend class Holidays;
        int modernTime(); //Output modern time (days since 1/1/1901)
        string dayOfWeek();
        int operator -(Date& rhs);
        friend ostream& operator <<(ostream& outputStream, const Date& date);
        //int dayMath(int num); //adds day by amount num;
        int getYear();
        int getMonth();
        int getDay();
    private:
        int year;
        int month;
        int day;
        //bool leapYear;
        Date modToDate(int modTime);
        bool leapCalc(int year);
        bool validDate(Date& obj);
};

#endif
