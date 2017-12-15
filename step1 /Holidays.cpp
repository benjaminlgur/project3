#include <iostream>
#include <string>
#include <stdlib.h>
#include "Holidays.h"
using namespace std;

Holidays::Holidays(int year):
thanksgiving(year, 11, 1), independenceDay(year, 7, 4), schoolDay(year, 8, 31), birthday(year, 1, 1)
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
}

Date Holidays::getSchool(){
    return schoolDay;
}

Date Holidays::getThanksgiving(){
    return thanksgiving;
}
