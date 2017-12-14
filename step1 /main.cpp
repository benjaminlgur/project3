#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main(){
    Date d(1997, 12, 9);
    cout << d << endl;
    cout << d.modernTime() << endl;
    cout << d.dayOfWeek() << endl;
    
}
