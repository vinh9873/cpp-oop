#ifndef MAMMAL_CPP
#define MAMMAL_CPP

#include "Animal.cpp"

class Mammal : public Animal {
protected:
    bool hasFur;

public:
    Mammal(string name, int age, float weight, bool hasFur) {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->hasFur = hasFur;
    }

    virtual void givesMilk() {
        cout << "Mammal breastfeed!\n";
    }
};

#endif