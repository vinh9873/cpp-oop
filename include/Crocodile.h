#ifndef CROCODILE_H
#define CROCODILE_H

#include "Reptile.h"
#include "ISwim.h"

class Crocodile : public Reptile, public ISwim {
    private:
        float length;
    
    public:
        Crocodile(string name, int age, float weight, bool isColdBlooded, float length);

        void eat();
        void move();
        void makeSound();

        void swim();

};

#endif