#ifndef DOG_H
#define DOG_H

#include "Mammal.h"

class Dog : public Mammal {
    private:
        string breed;
        bool isGuardDog;

    public:
        Dog(string name, int age, float weight, bool hasFur,
            string breed, bool isGuardDog);

        void setBreed(string breed);
        string getBreed();

        void makeSound() override;
        void eat() override;
        void move() override;
        void givesMilk() override;

        void bark();
};

#endif