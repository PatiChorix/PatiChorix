#ifndef PERSON_HPP_
#define PERSON_HPP_

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person();
    string toString();
    Person(string name, int age);

};


#endif