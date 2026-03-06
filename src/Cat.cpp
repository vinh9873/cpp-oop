#include "../include/Cat.h"

Cat::Cat(string name, int age, float weight, 
    bool hasFure, float jumpHeight)
    : Mammal(name, age, weight, hasFure){
        this->jumpHeight = jumpHeight;
    }
    
    void Cat::setJumpHeight(float jumpHeight){
        if(jumpHeight > 0){
            this->jumpHeight = jumpHeight;
        }
    }

    float Cat::getJumpHeight(){
        return jumpHeight;
    }

    void Cat::eat(){
        cout << "Cat eat fishes!\n";
    }

    void Cat::move(){
        cout << "Run and Jump!\n";
    }

    void Cat::makeSound(){
        cout << "Meow Meow!\n";
    }

    void Cat::jump(){
        cout << "Jump hight to the tree!\n";
    }



