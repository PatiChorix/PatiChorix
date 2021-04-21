#include<iostream>
using namespace std;

void show1(const int nElements, string texts[]) {
    for(int i=0; i<3; i++) {
        cout << texts[i] << endl;
    }
}


void show2(const int nElements, string *texts) { // show 2 is equivalent to show 1
    for(int i=0; i<3; i++) {
        cout << texts[i] << endl;
    }
}


char *getMemory() { // this is a posible way but you have to rememberto delete your pointers at the end
    char *pMen = new char[100];
    return pMen;
}

void freeMemory(char *pMen) {
    delete [] pMen;
}
int main () {

    string texts[] = {"aple", "orange", "banana"};

    show1(3, texts);
    show2(3, texts);

    char *pMemory = getMemory();
    freeMemory(pMemory);
    return 0;
}