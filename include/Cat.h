#ifndef CAT_H
#define CAT_H

#include "Mammal.h"

class Cat : public Mammal {
    private:
        float jumpHeight;
    
    public:
        Cat(string name, int age, float  weight, bool hasFur, float jumpHeight);

        void setJumpHeight(float jumpHeight);
        float getJumpHeight();

        void eat() override;
        void move() override;
        void makeSound() override;

        void jump();

};

#endif