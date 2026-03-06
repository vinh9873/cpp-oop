#ifndef CHICKEN_H
#define CHICKEN_H

#include "Bird.h"
#include "IEggLayer.h"

class Chicken : public Bird, public IEggLayer {
    public:
        Chicken(string name, int age, float weight, float wingSpan);

        void eat();
        void makeSound();
        void move();
        void fly();

        void crowDawn();
        void eggLayer();

};


#endif