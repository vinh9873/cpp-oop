#ifndef BIRD_CPP
#define BIRD_CPP

#include "Animal.cpp"

class Bird : public Animal {
    protected:
        float wingSpan;
        bool canFly;
    
    public:
        Bird(string name, int age, float weight, float wingSpan, bool canFly)
        : Animal(name, age, weight) {
            this->wingSpan = wingSpan;
            this->canFly = canFly;
        }

        virtual void fly() = 0;
        
        void move(){
            cout << "Move by 2 legs!\n";
        }
};

#endif