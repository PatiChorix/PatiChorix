#include <iostream>
#include "person.hpp"
using namespace std;

int main() {
    
    Person person0;
    Person person1("Bob", 42);
    Person person2("Sue", 23);

    cout << person0.toString() << endl;
    cout << person1.toString() << endl;
    cout << person2.toString() << endl;

}