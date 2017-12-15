#include <iostream>
#include <string>
#include "Date.h"
#include "Holidays.h"
using namespace std;

int main(){
    Date d(2017, 1, 1);
    Holidays h(2017);
    cout << d << endl;
    cout << h.getThanksgiving() << endl;
}
