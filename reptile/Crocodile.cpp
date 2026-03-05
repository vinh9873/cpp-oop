#include "../animals/Reptile.cpp"
#include "../Interfaces/IEggLayer.cpp"
#include "../Interfaces/ISwim.cpp"

class Crocodile : public Reptile, public IEggLayer, public ISwim {
    private:
        float length;
    
    public:
        Crocodile(string name, int age, float weight, 
        bool isColdBlooded, bool laysEgg, float length)
        : Reptile(name, age, weight, isColdBlooded, laysEgg){
            this->length = length;
        }

        void setLength(float length){
            this->length = length;
        }

        float setLength(){
            return length;
        }

        void eat(){
            cout << "Eat meat!\n";
        }

        void move() {
            cout << "Crawl on land using four legs!\n";
        }

        void layEgg(){
            cout << "Lay Eggs on sand!\n";
        }

        void swim(){
            cout << "Swim in the river!\n";
        }
};