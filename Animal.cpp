#ifndef ANIMAL_CPP
#define ANIMAL_CPP

#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    int age;
    float weight;

public:

    virtual void eat() = 0; //pure virtual
    virtual void makeSound() = 0;
    virtual void move() = 0;
    //virtual void printInfo() = 0;

    void sleep() {
        cout << "Sleep at night\n";
    }
};

#endif