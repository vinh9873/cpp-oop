#include "../include/Crocodile.h"

Crocodile::Crocodile(string name, int age, float weight, bool isColdBlooded, float length)
    : Reptile(name, age, weight, isColdBlooded){
        this->length = length;
    }

    void Crocodile::eat(){
        cout << "Eat meat!\n";
    }

    void Crocodile::makeSound(){
        cout << "Rustling!\n";
    }

    void Crocodile::move(){
        cout << "Crawl by 4 legs!\n";
    }

    void Crocodile::swim(){
        cout << "Swim in the river!\n";
    }