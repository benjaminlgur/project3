#include <iostream>
#include <string>
#include <stdlib.h>
#include "Holidays.h"
using namespace std;

Holidays::Holidays(int year):
thanksgiving(year, 11, 1), independenceDay(year, 7, 4), schoolDay(year, 8, 31), birthday(1, 1, 1), currBirthday(1, 1, 1), nextThanksgiving(year+1, 11, 1), nextIndependenceDay(year+1, 7, 4), nextSchoolDay(year+1, 8, 31), nextBirthday(1, 1, 1)
{
    while(true){
        if(schoolDay.dayOfWeek() == "Monday"){
            break;
        }
        else {
            schoolDay.day--;
        }
    }
    int thurCount = 0; //counts 4th thursday for thanksgiving.
    while(true){
        if(thanksgiving.dayOfWeek() == "Thursday"){
            thurCount++;
        }
        if(thurCount >= 4){
            break;
        }
        else{
            thanksgiving.day++;
        }
    }
    while (true){
        if(nextSchoolDay.dayOfWeek() == "Monday"){
            break;
        }
        else {
            nextSchoolDay.day--;
        }
    }
    int thurCount2 = 0; //counts 4th thursday for thanksgiving.
    while(true){
        if(nextThanksgiving.dayOfWeek() == "Thursday"){
            thurCount2++;
        }
        if(thurCount2 >= 4){
            break;
        }
        else{
            nextThanksgiving.day++;
        }
    } 
}

void Holidays::nextHoliday(Date cur){
    int dayCalc = cur.modernTime();
    while(true){
        if (dayCalc == thanksgiving.modernTime()){
            cout << "The next holiday is Thanksgiving, which is " << thanksgiving - cur << " days from today!" << endl;
        return;
        }
        else if (dayCalc == independenceDay.modernTime()){
            cout << "The next holiday is Independence Day, which is " << independenceDay - cur << " days from today!" << endl;
            return;
        }
        else if (dayCalc == schoolDay.modernTime()){
            cout << "The next holiday is School Day, which is " << schoolDay - cur << " days from today!" << endl;
            return;
        }
        else if (dayCalc == currBirthday.modernTime()){
            cout << "The next holiday is Your birthday, which is " << currBirthday - cur << " days from today!" << endl;
            return;
        }
        else if (dayCalc == nextThanksgiving.modernTime()){
            cout << "The next holiday is Thanksgiving, which is " << nextThanksgiving - cur << " days from today!" << endl;
            return;
        }
        else if (dayCalc == nextIndependenceDay.modernTime()){
            cout << "The next holiday is Independence Day, which is " << nextIndependenceDay - cur << " days from today!\n" << endl;
            return;
        }
        else if (dayCalc == nextSchoolDay.modernTime()){
            cout << "The next holiday is School Day, which is " << nextSchoolDay - cur << " days from today!" << endl;
            return;
        }
        else if (dayCalc == nextBirthday.modernTime()){
            cout << "The next holiday is Your birthday, which is " << nextBirthday - cur << " days from today!" << endl;
            return;
        }
        else {
            dayCalc++;
        }
    }
}

Date Holidays::getSchool(){
    return schoolDay;
}

Date Holidays::getThanksgiving(){
    return thanksgiving;
}

Date Holidays::getIndependenceDay(){
    return independenceDay;
}

Date Holidays::getCurrBirthday(){
    return currBirthday;
}

void Holidays::setBirthday(int year){
    cout << "Enter birth year (1901 or later)\n";
    cin >> birthday.year;
    cout << "Enter birth month (1-12):\n";
    cin >> birthday.month;
    cout << "Enter birth day (1-31):\n";
    cin >> birthday.day;
    if(birthday.month != 2 && birthday.day != 29 && birthday.leapCalc(year) == false){
        currBirthday.year = year;
        currBirthday.month = birthday.month;
        currBirthday.day = birthday.day;
    }
    else {
        currBirthday.year = year;
        currBirthday.month = birthday.month;
        currBirthday.day = 28;
    }
    if(nextBirthday.month != 2 && birthday.day != 29 && birthday.leapCalc(year+1) == false){
        nextBirthday.year = year+1;
        nextBirthday.month = birthday.month;
        nextBirthday.day = birthday.day;
    }
    else {
        nextBirthday.year = year+1;
        nextBirthday.month = birthday.month;
        nextBirthday.day = 28;
    }
}
