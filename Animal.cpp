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
    virtual void eat() {
        cout << "Animal eats\n";
    }

    void sleep() {
        cout << "Sleep at night\n";
    }

    virtual void makeSound() = 0;
    virtual void move() = 0;

    virtual void printInfo() {
        cout << name << " " << age << " " << weight << endl;
    }
};

#endif