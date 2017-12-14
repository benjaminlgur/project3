#include <iostream>
#include <string>
#include <stdlib.h>
#include "Date.h"
using namespace std;

Date::Date(int year, int month, int day)
:year (year), month (month), day (day)
{
    if(validDate(*this) == false){
       cerr << "Invalid date\n";
       exit(1);
    }
}

bool Date::validDate(Date& obj){
    if(day > 31){ //all months have at most 31 days.
        return false;
    }
    else if (month == 4 && day > 30 || month == 6 && day > 30 || month == 9 && day > 30 || month == 11 && day > 30){ //These months have at most 30 days.
        return false;
    }
    else if (month == 2 && leapCalc(year) == false && day > 28){
        return false;
    }
    else if (month == 2 && leapCalc(year) == true && day > 29){
        return false;
    }
    else {
        return true;
    }
}

bool Date::leapCalc(int year){
    if(year % 4 != 0){
        return false;
    }
    else if(year % 100 != 0){
        return true;
    }
    else if(year % 400 != 0){
        return false;
    }
    else{
        return true;
    }
}

unsigned int Date::modernTime(){
}

int Date::getYear(){
    return year;
}

int Date::getMonth(){
    return month;
}

int Date::getDay(){
    return day;
}

ostream& operator <<(ostream& outputStream, const Date& date){
    outputStream << date.month << "/" << date.day << "/" << date.year;
    return outputStream;
}
