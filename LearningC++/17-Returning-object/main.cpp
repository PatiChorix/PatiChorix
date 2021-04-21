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

Animal createAnimal() { // if your compiler is optimize and recognize you don't want to use copy constructor (for my g++ is perfect)
    Animal a;
    a.setName("Bertie");
    return a;
}

Animal *createAnimal2() { // the new operator permit to the pointer exist outside the function but you must use delete to release memory.
    Animal *pAnimal = new Animal();
    pAnimal->setName("Bert");
    return pAnimal;
}

int main () {
    Animal frog = createAnimal();

    frog.speak();

    Animal *pfrog2 = createAnimal2();

    pfrog2->speak();
    delete pfrog2;
    return 0;
}