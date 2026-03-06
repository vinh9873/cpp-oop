#include "../include/Bird.h"

Bird::Bird(string name, int age, float weight, float wingSpan)
 : Animal(name, age, weight){
    this->wingSpan = wingSpan;
 }

void fly();