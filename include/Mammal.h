#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal: public Animal {
    protected:
        bool hasFur;
    
    public:
        Mammal(string name, int age, float weight, bool hasFur);

        virtual void givesMilk();
};

#endif