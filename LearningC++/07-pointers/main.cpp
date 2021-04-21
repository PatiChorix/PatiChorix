#include<iostream>
using namespace std;

void foo(double *pValue) {
    *pValue = 10.0;
    cout << "value of double in manipulate: " << pValue << endl;
}


int main () {

    int nValue = 8;

    int* pnValue = &nValue;

    cout << "Int value: " << nValue << endl;
    cout << "Pointer to int adress: " << pnValue << endl;

    cout << "Int value via pointer: " << *pnValue << endl;

    cout << "=================" << endl;
    double dvalue = 123.4;

    cout << "1. dvalue: " << dvalue << endl;
    foo(&dvalue);
    cout << "2. dvalue: " << dvalue << endl;
    return 0;
}