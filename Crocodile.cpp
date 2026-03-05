#include "Reptile.cpp"

class Crocodile : public Reptile {
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
};