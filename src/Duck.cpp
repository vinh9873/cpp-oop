#include "../include/Duck.h"

Duck::Duck(string name, int age, float weight, float wingSpan, float swimSpeed)
    : Bird(name, age, weight, wingSpan){
        this->swimSpeed = swimSpeed;
    }

    void Duck::fly(){
        cout << "Can fly high!\n";
    }

    void Duck::eat(){
        cout << "Eat bran!\n";
    }

    void Duck::move(){
        cout << "Run and swim by 2 legs!\n";
    }

    void Duck::makeSound(){
        cout << "Quac Quac!\n";
    }

    void Duck::eggLayer(){
        cout << "Lays white eggs!\n";
    }

    void Duck::swim(){
        cout << "Swim in the lake!\n";
    }
