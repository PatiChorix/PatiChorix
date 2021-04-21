#include<iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    Animal() {
        cout << "Animal is created" << endl;
    }
    Animal(const Animal &other) :name(other.name) {
        cout << "Animal created by copying" << endl;
    }
    ~Animal() {
        cout << "Destructor called" << endl;
    }
    void setName(string name) {this->name = name;};
    void speak() const {cout << "My name is: " << name << endl;}
};
int main () {
    Animal *pCat = new Animal(); // warning if we use new you have to call delate to deallocate the memory 'cause c++ will not.
    pCat->setName("Freddy");
    pCat->speak();
    delete pCat;
    return 0;
}