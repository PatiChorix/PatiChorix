#include <iostream>
#include "person.hpp"
using namespace std;

int main() {

    Person person;

    cout << person.toString() << endl;
    person.set_name("Pati");
    cout << person.toString() << endl;

}