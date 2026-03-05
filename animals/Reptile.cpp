#include "Animal.cpp"

class Reptile : public Animal {
    protected:
        bool isColdBlooded;
        bool laysEgg;

    public:
        Reptile(string name, int age, float weight, bool isColdBlooded, bool laysEgg)
        : Animal(name, age, weight){
            this->isColdBlooded = isColdBlooded;
            this->laysEgg = laysEgg;
        }

        void crawl() {
            cout << "Crawl on the ground!\n";
        }

        void layEgg() {
            cout << "Born Eggs!\n";
        }

        void makeSound(){
            cout << "Can not hear the sound!\n";
        }

        void move(){
            cout << "Crocodile crawls on the ground using four legs\n";
        }
};