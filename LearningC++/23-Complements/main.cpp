#include<iostream>
using namespace std;


int main () {
    char value = 127;

    cout << (int)value << endl;

    value ++;

    cout << (int)value << endl;

    return 0;
}

/*
for unsigned stuff:
3-bit system:
maximun is 111 = 7 = 2^3 -1
1bytes
11111111 = 2^8 -1 = 255

for signed stuff


used two complment
000 = 0
001 = 1
010 = 2
011 = 3
100 = -4
101 = -3
110 = -2
111 = -1

0010 (2) +
0110 (-2) =
1000 -> discard overflow bit -> 000 right answer

0011 (3) +
0001 (1) =
100  (-4)
like the exemple in main!
*/