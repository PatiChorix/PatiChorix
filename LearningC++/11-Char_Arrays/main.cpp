#include<iostream>
using namespace std;

int main () {

    char text[] = {'h', 'e', 'l', 'l', 'o'};
    char text2[] = "hello";
    cout << text << endl;


    for(int i=0; i<sizeof(text2); i++) {
        cout << i << ": " << text2[i] << endl;
    }

    for(int i=0; i<sizeof(text2); i++) {
        cout << i << ": " << (int)text2[i] << endl;
    } // when you init a char array with "hello" c++ create a sixth element with the int value 0


    int k = 0;
    while(true) {
        if(text[k] == 0)
            break;
        
        cout << text[k] << flush;
        k++;
    }
    return 0;
}