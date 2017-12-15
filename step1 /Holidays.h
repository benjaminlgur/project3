#ifndef HOLIDAYS_H
#define HOLIDAYS_H

#include <iostream>
#include "Date.h"
using namespace std;

class Holidays{
    public:
        Holidays(int year);
        Date getSchool(); //getter for schoolDay.
        Date getThanksgiving();
    private:
        Date thanksgiving;
        Date independenceDay;
        Date schoolDay;
        Date birthday;
};



#endif
