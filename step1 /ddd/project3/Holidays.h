#ifndef HOLIDAYS_H
#define HOLIDAYS_H

#include <iostream>
#include "Date.h"
using namespace std;

class Holidays{
    public:
        Holidays(int year);//year should be the current year
        Date getSchool(); //getter for schoolDay.
        Date getThanksgiving();
        Date getIndependenceDay();
        Date getCurrBirthday();
        void setBirthday(int year); //year should be the current year
        void nextHoliday(Date curr); //argument should be current date
    private:
        Date thanksgiving;
        Date independenceDay;
        Date schoolDay;
        Date birthday;
        Date currBirthday;
        Date nextThanksgiving;
        Date nextIndependenceDay;
        Date nextSchoolDay;
        Date nextBirthday;
};



#endif
