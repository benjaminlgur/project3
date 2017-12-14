#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main(){
    Date d(1901, 1, 1);
    Date p(1091, 2, 1);
    cout << d << endl;
    cout << d.modernTime() << endl;
    cout << p << endl;
    cout << p.modernTime() << endl;
    cout << p - d << endl;
}
