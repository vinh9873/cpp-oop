#ifndef DUCK_H
#define DUCK_H

#include "Bird.h"
#include "IEggLayer.h"
#include "ISwim.h"

class Duck : public Bird, public IEggLayer, public ISwim {
    private:
        float swimSpeed;

    public:
        Duck(string name, int age, float weight, float wingSpan, float swimSpeed);

        void eat();
        void move();
        void makeSound();

        void fly();
        void eggLayer();
        void swim();

};


#endif