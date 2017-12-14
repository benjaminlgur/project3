#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main(){
    Date d(1904, 1, 1);
    cout << d << endl;
    cout << d.modernTime() << endl;
    cout << d.modToDate(1095) << endl;
    
}
