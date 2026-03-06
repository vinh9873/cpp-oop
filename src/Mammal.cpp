#include "../include/Mammal.h"

Mammal::Mammal(string name, int age, float weight, bool hasFur)
    : Animal(name, age, weight){
        this->hasFur = hasFur;
}

void Mammal::givesMilk(){
    cout << "Mammal gives milk\n";
}