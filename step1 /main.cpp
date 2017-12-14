#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main(){
    Date d(1901, 2, 1);
    cout << d << endl;
    cout << d.modernTime() << endl;
    
}
