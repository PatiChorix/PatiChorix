#include <iostream>
#include "person.hpp"
using namespace std;

int main() {

    Person person1;
    Person person2("Pati");
    Person person3("Bilbal", 83);
    cout << person1.toString() << endl;
    cout << person2.toString() << endl;
    cout << person3.toString() << endl;
}