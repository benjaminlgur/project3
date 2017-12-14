#ifndef DATE_H
#define DATE_H

class Date{
    public:
        Date(int year, int month, int day);
        unsigned int modernTime(); //Output modern time (days since 1/1/1901)
        //string dayOfWeek(Date obj);
    private:
        int year;
        int month;
        int day;
        //bool leapYear;
        bool leapCalc(int year);
        bool validDate(Date& obj);
};

#endif
