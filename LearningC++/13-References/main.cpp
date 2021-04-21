#include<iostream>
using namespace std;

void foo(double value) { // this foo do nothing
    value = 123.4;
}

void foo2(double &value) { // this foo do nothing
    value = 123.4;
}
int main () {

    int value1 = 8;
    int value2 = value1;
    value2 = 10;

    cout << "Value1: " << value1 << endl;
    cout << "Value2: " << value2 << endl;


    int value3 = 8;
    int &value4 = value3;
    value4 = 10;

    cout << "Value3: " << value3 << endl;
    cout << "Value4: " << value4 << endl;

    double d = 4.321;
    foo(d);
    cout << d << endl;

    foo2(d);
    cout << d << endl;
    return 0;
}