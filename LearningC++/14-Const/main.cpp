#include<iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    void setName(string name) {this->name = name;};
    void speak() const {cout << "My name is: " << name << endl;} // if we have a method that never change any "attribut" to prevent you to do something on attribut later on we can use const
};
int main () {
    const double PI = 3.14;
    // value = 10; we can not build this line due to const
    cout << PI << endl;


    Animal animal;
    animal.setName("Freddy");
    animal.speak();

// =======================================
    int value = 8;
    const int* pValue = &value;

    cout << *pValue << endl;

    int nb = 11;
    pValue = &nb;
    // *pValue = 12; this cannot be build because we init pValue as a const so you can't change the value in memory but you can change the value using the value and not the pointer
    cout << *pValue << endl;

//======================================
    int value2 = 8;
    int * const pValue2 = &value2;

    cout << *pValue2 << endl;

    int nb2 = 11;
    // pValue2 = &nb2;  this cannot be build because we init pValue is a const so you can't change it
    *pValue2 = 12;
    cout << *pValue2 << endl;

//====================================
//======================================
    int value3 = 8;
    const int * const pValue3 = &value3; // you declare a pointer witch is const so you can't change it and more over you can't change the value that he pointing at by the pointer

    return 0;
}