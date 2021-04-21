#include<iostream>
using namespace std;

// loop trought an array

int main () {

    const int N_STRING = 5;
    string texts[] = {"one", "two", "three", "four", "five"};
    string* pTexts = texts;
    
    pTexts++;
    pTexts += 3;

    cout << *pTexts << endl;

    pTexts -= 2;
    cout << *pTexts << endl;

    string *pEnd = &texts[N_STRING-1];
    cout << *pEnd << endl;

    pTexts = &texts[0]; //set ptexts back to start

    int elements = pEnd - pTexts + 1;
    cout << elements << endl;


    pTexts = &texts[0]; //set ptexts back to start
    pTexts += N_STRING/2;
    cout << *pTexts << endl;
    return 0;
}