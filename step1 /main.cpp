#include <iostream>
#include <string>
#include "Holidays.h"
using namespace std;

int main(){
    int curYear, curMonth, curDay;
    cout << "Enter year (1901 or later): ";
    cin >> curYear;
    cout << "Enter month (1-12): ";
    cin >> curMonth;
    cout << "Enter day (1-31): ";
    cin >> curDay;
    Date cur(curYear, curMonth, curDay); //cur stands for current.
    Holidays holiday (curYear);    
    holiday.setBirthday(curYear);
    cout << "Independence Day will occur on " << holiday.getIndependenceDay() << ", which is day " << holiday.getIndependenceDay().modernTime() << " in modern time." << endl;
    cout << "School Day will occur on " << holiday.getSchool() << ", which is day " << holiday.getSchool().modernTime() << " in modern time." << endl;
    cout << "Thanksgiving will occur on " << holiday.getThanksgiving() << ", which is day " << holiday.getThanksgiving().modernTime() << " in modern time." << endl;
    cout << "Your birthday will occur on " << holiday.getCurrBirthday() << ", which is day " << holiday.getCurrBirthday().modernTime() << " in modern time." << endl;
    holiday.nextHoliday(cur);
}
