#include "../include/Chicken.h"

Chicken::Chicken(string name, int age, float weight, float wingSpan)
    : Bird(name, age, weight, wingSpan){}

    void Chicken::eat(){
        cout << "Eat worm!\n";
    }

    void Chicken::move(){
        cout << "Move by 2 legs on the land!\n";
    }

    void Chicken::makeSound(){
        cout << "Cluck Cluck!\n";
    }

    void Chicken::crowDawn(){
        cout << "Cock-a-doodle-doo!\n";
    }

    void Chicken::fly(){
        cout << "Can't fly!\n";
    }

    void Chicken::eggLayer(){
        cout << "Lay brown eggs!\n";
    }