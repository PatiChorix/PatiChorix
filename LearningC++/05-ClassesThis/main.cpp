#include <iostream>
#include "person.hpp"
using namespace std;

int main() {

    Person person1;

    cout << person1.toString() << endl;

    Person person2("Bob", 42);

    cout << person2.toString() << endl;

}