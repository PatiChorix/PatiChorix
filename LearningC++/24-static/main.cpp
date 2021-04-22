#include<iostream>
using namespace std;

//header file
class Test {
private:
    int id;
    static int count; // static mean this attribut will be shared with all instance of the class
    
public:
    Test() {
        id = ++count; // b =++a mean first get +1 to a then affect to b And b = a++ first b will be equal to a then we add 1 to a 
    }
    int get_id() {return id;}
    static void showInfo() {
        cout << count << endl;
    }
    static int const MAX = 99; // Initialisation have to be where

};

// cpp file
int Test::count = 0;

int main () {
    
    Test::showInfo();
    Test t1;
    cout << "Object 1 Id: " << t1.get_id() << endl;
    Test t2;
    cout << "Object 2 Id: " << t2.get_id() << endl;
    Test::showInfo();
    return 0;
}
