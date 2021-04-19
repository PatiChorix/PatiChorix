#include <iostream>
#include "Cat.hpp"

using namespace std;

Cat::Cat() {
    cout << "Cat is instanciated" << endl;
    happy = true;
}

Cat::~Cat() {
    cout << "Cat is destroyed" << endl;
}
void Cat::speak() {
    if(happy) {
        cout << "Miaouww" << endl;
    }
    else {
        cout << "Ssssss" << endl;
    }
}

void Cat::jump() {
    cout << "Jumping to the top of bookcase";
}


