#include "person.hpp"

Person::Person() {
    name = "George";
}

string Person::toString() {
    return "Person name is: " + name;
}

void Person::set_name(string new_name) {
    name = new_name;
}

string Person::get_name() {
    return name;
}