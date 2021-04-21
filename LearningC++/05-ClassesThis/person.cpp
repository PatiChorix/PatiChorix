#include "sstream"
#include "person.hpp"

Person::Person() {
    name = "Undefined";
    age = 0;
}

Person::Person(string name, int age) {
    this->name = name;
    this->age = age;
}

string Person::toString() {
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << "; Age: ";
    ss << age;

    return ss.str();
}