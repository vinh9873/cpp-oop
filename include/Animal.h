#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
#include<string>

using namespace std;

class Animal {
    protected:
        string name;
        int age;
        float weight;

    public:
        Animal(string name, int age, float weight);

        virtual void eat() = 0;
        virtual void move() = 0;
        virtual void makeSound() = 0;

        virtual ~Animal() {}
};

#endif