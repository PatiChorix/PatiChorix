#include<iostream>
using namespace std;

class Machine {
private:
    int id;
public:
    Machine():id(0) {cout << "Machine no-argument constructor called." << endl;}
    Machine(int id):id(id) {cout << "Machine parameterized constructor called." << endl;}
    void info() {cout << "ID: " << id << endl;}
};

class Vehicule: public Machine{
public:
    Vehicule(int id): Machine(id) {cout << "Vehicule parameterized constructor called." << endl;} 
    Vehicule() {cout << "Vehicule no-argument constructor called." << endl;}
};

class Car: public Vehicule {
    public:
    Car(): Vehicule(999) {cout << "Car no-argument constructor called." << endl;} // we can't called Machine constructor. Only the constructor from the first stage is avaible.
};

int main () {
    Vehicule vehicule(23);
    vehicule.info();

    Car car;
    car.info();
    return 0;
}