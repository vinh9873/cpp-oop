#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"
#include "IEggLayer.h"

class Reptile : public Animal, public IEggLayer {
    private:
        bool isColdBlooded;

    public:
        Reptile(string name, int age, float weight, bool isColdBlooded);

        void crawl();
        void eggLayer();
        

};


#endif