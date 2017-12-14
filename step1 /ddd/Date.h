#ifndef DATE_H
#define DATE_H

#include <iostream> 
using namespace std;

const string weekDay[7] = {"Sunday", "Monday", "Tuesday", "Wendsday", "Thursday", "Friday", "Saturday"};

class Date{
    public:
        Date(int year, int month, int day);
        unsigned int modernTime(); //Output modern time (days since 1/1/1901)
        string dayOfWeek();
        Date modToDate(int modTime);
        friend ostream& operator <<(ostream& outputStream, const Date& date);
        int getYear();
        int getMonth();
        int getDay();
    private:
        int year;
        int month;
        int day;
        //bool leapYear;
        bool leapCalc(int year);
        bool validDate(Date& obj);
};

Date operator -(Date date);

#endif
