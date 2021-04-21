#include<iostream>
using namespace std;

// loop trought an array

int main () {
    string texts[] = {"one", "two", "three"}; // init an array

    string* pTexts = texts; // an arrays is just 'like' a pointers of the first element so we can write this init

    // loop 1 is a forloop where an index go trought all the element in the arrays and we use the pointer[i] to get the value
    for(int i = 0;i<sizeof(texts)/sizeof(string); i++) {
        cout << pTexts[i] << " " << flush;
    }

    cout << endl;

    // loop 2 is a forloop same as loop1 and we get the value where the pointer point by * than you have to go to the next box of memory to point the next value inside the array
    for(int i = 0;i<sizeof(texts)/sizeof(string); i++) {
        cout << *pTexts << " " << flush;
        pTexts++;
    }

    cout << endl;

    // loop 3 same as loop 2 but the syntax is more elegent
    pTexts = texts;
    for(int i = 0; i < sizeof(texts)/sizeof(string); i++, pTexts++) {
        cout << *pTexts << " " << flush;
    }

    cout << endl;

    // loop 4 is a while loop looking if you pointer reach the last pointer of the array
    string* pElement = &texts[0];
    string* pEnd = &texts[2];

    while(true) {
        cout << *pElement << " " << flush;
        
        if(pElement == pEnd) {break;}
        pElement++;
    }

    
    cout << endl;
    return 0;
}