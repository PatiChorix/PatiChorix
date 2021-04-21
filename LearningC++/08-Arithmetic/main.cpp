#include<iostream>
using namespace std;



int main () {
    int value1 = 7/2;
    cout << value1 << endl;

    double value2 = 7.0/2;
    cout << value2 << endl;

    double value3 = (double)7/2;
    cout << value3 << endl;

    int value4 = 8;
    value4 +=1; // value4 = value4 + 1 or value4++
    cout << value4 << endl;

    int value5 = 10;
    value5 /= 5; // value5 = value5 / 5
    cout << value5 << endl;

    int value6 = 13%5;
    cout << value6 << endl;

    return 0;
}