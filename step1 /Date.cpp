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
    unsigned int dayCount = 0;
    int tempYear;
    tempYear = year;
    dayCount = dayCount + day;
    if (leapCalc(year) == true && month > 2){ //In case the current year is a leap year the leap day alread happened.
        dayCount++;
    }
    if (month >= 2){ //starts at 2 becuse only counting compleated months.
        dayCount += 31;
    }
    if (month >= 3){
        dayCount += 28;
    }
    if(month >= 4){
        dayCount += 31;
    }
    if(month >= 5){
        dayCount += 30;
    }
    if(month >= 6){
        dayCount += 31;
    }
    if(month >= 7){
        dayCount += 30;
    }
    if(month >= 8){
        dayCount += 31;
    }
    if(month >= 9){
        dayCount += 31;
    }
    if(month >= 10){
        dayCount += 30;
    }
    if(month >= 11){
        dayCount += 31;
    }
    if(month >= 12){
        dayCount += 30;
    }
    tempYear--;
    while (tempYear >= 1901){
        if (leapCalc(tempYear) == false){//adds days depending on wether or not it is a leap year.
            dayCount = dayCount + 365;
        }
        else if(leapCalc(tempYear) == true){
            dayCount = dayCount + 366;
        }
        tempYear--;
    }
    dayCount--; //decresed by 1 since first day is 0;
    return dayCount;
}

string Date::dayOfWeek(){
    int modTime, day;
    day = 3; //day is equal to 3 becuse the first day was a tuesday.
    modTime = modernTime();
    while(modTime > 0){
        day++;
        if (day >= 7){
            day = 0;
        }
        modTime--;
    }
    day--; //to counteract off by 1 error. 
    return weekDay[day];
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

Date operator -(Date date){
    }
