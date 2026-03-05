#ifndef MAMMAL_CPP
#define MAMMAL_CPP

#include "Animal.cpp"

class Mammal : public Animal {
protected:
    bool hasFur;

public:
    Mammal(string name, int age, float weight, bool hasFur)
    : Animal(name, age, weight) {
        this->hasFur = hasFur;
    }

    virtual void givesMilk() {
        cout << "Mammal breastfeed!\n";
    }
};

#endif