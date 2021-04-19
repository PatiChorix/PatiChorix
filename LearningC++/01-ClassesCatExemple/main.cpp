#include <iostream>
#include "Cat.hpp"

using namespace std;

int main() {

    cout << "Starting Program..." << endl;

    {
        Cat bob;
        bob.speak();
    }

    cout << "Ending Program..." << endl;
    return 0;
}