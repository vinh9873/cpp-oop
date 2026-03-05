#ifndef ANIMAL_CPP
#define ANIMAL_CPP

#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name;
    int age;
    float weight;

public:

    Animal(string name, int age, float weight) {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }
    
    virtual void eat() = 0; // pure virtual
    virtual void makeSound() = 0;
    virtual void move() = 0;
    // virtual void printInfo() = 0;

    void sleep()
    {
        cout << "Sleep at night\n";
    }
};

#endif