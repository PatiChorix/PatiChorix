#include<iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    Animal() {cout << "Animal created" << endl;};
    // in the copy constror we must get const to prevent any modification of the object other and we get the reference of the object to not duplicate the first object
    Animal(const Animal &other): name(other.name) {cout << "Animal created by copying." << endl;}
    void setName(string name) {this->name = name;};
    void speak() const {cout << "My name is: " << name << endl;} 
};
int main () {
    Animal cat;
    cat.setName("Freddy");

    Animal dog = cat; //copy constructor call or other way to call copy Animal dog(cat)
    dog.speak();
    dog.setName("bob");

    cat.speak();
    dog.speak();
    return 0;
}