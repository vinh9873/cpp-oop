#include "../include/Dog.h"

Dog::Dog(string name, int age, float weight, bool hasFur,
        string breed, bool isGuardDog)
    : Mammal(name, age, weight, hasFur) {
        this->breed = breed;
        this->isGuardDog = isGuardDog;
    }

    void Dog::setBreed(string breed){
        this->breed = breed;
    }

    string Dog::getBreed(){
        return breed;
    }

    void Dog::makeSound(){
        cout << "Woof Woof!\n";
    }

    void Dog::eat(){
        cout << "Eat bone!\n";
    }

    void Dog::move(){
        cout << "Run with 4 legs!\n";
    }
    
    void Dog::bark(){
        cout << "Bark when meet strangers!\n";
    }

    void Dog::givesMilk(){
        cout << "Dog gives milks\n";
    }