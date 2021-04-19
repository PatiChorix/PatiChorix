#ifndef PERSON_HPP_
#define PERSON_HPP_

#include <iostream>
using namespace std;

class Person {
private:
    string name;

public:
    Person();
    string toString();
    void set_name(string new_name);
    string get_name();
};


#endif