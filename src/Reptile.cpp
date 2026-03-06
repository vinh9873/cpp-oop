#include "../include/Reptile.h"

Reptile::Reptile(string name, int age, float weight, bool isColdBlooded)
    : Animal(name, age, weight){
        this->isColdBlooded = isColdBlooded;
    }

    void Reptile::crawl(){
        cout << "Crawl on the ground!\n";
    }

    void Reptile::eggLayer(){
        cout << "Lays eggs!\n";
    }