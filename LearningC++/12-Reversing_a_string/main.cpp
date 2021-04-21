#include<iostream>
using namespace std;

int main () {

    char text[] = "";
    // we can also do it without pointers
    int nChar = sizeof(text) -1;
    char* pStart = text;
    char* pEnd = text + nChar -1;

    cout << *pEnd << endl;

    while(pStart < pEnd) {
        char save = *pStart;
        *pStart = *pEnd;
        *pEnd = save;
        
        pStart++;
        pEnd--;
    }
    cout << text << endl;
    return 0;
}