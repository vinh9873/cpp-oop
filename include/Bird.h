#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
    private:
        float wingSpan;
    
    public:
        Bird(string name, int age, float weight, float wingSpan);

        virtual void fly() = 0;

};

#endif