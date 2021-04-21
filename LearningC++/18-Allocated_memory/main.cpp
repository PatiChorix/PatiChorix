#include<iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    Animal() {
        cout << "Animal is created" << endl;
    }
    Animal(const Animal &other) :name(other.name) {
        cout << "Animal created by copying" << endl;
    }
    ~Animal() {
        cout << "Destructor called" << endl;
    }
    void setName(string name) {this->name = name;};
    void speak() const {cout << "My name is: " << name << endl;}
};


int main () {

    Animal *pAnimal = new Animal[10];

    pAnimal[5].setName("Froggy");
    pAnimal[5].speak();

    delete [] pAnimal; // to dealecoted all the Animal

    char *pMem = new char[1000];

    delete [] pMem;

    //======================
    const int N = 26;
    char c = 'a';
    
    Animal *p_cat = new Animal[N];

    for(int i=0; i<N; i++, c++) { //c is a char so an int and we can ++ to go at the next alpha char.
        string name(1, c); // setName want a string so we have to get one and transform our char into a string
        p_cat[i].setName(name);
        cout << c << endl;
        p_cat[i].speak();
    }   

    delete [] p_cat; // we don't forget to dealocated



    return 0;
}