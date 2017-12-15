#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

const string weekDay[7] = {"Sunday", "Monday", "Tuesday", "Wendsday", "Thursday", "Friday", "Saturday"};

//const string monthName[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

class Date{
    public:
        Date(int year, int month, int day); //constructor
        friend class Holidays; 
        unsigned int modernTime(); //Output modern time (days since 1/1/1901)
        string dayOfWeek(); //Outputs the day of the week that a date is.
        int operator -(Date& rhs);
        friend ostream& operator <<(ostream& outputStream, const Date& date);
        int getYear(); //getters for year month and day
        int getMonth();
        int getDay();
    private:
        static string monthName[12];
        int year;
        int month;
        int day;
        Date modToDate(int modTime); //takes modern time as an argument outputs a date.
        bool leapCalc(int y); //returns true on leap year return false on common year.
        bool validDate(Date& obj); //checks if the day is valid to the month.
};

#endif
