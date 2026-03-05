#include "Bird.cpp"

class Chicken : public Bird {

    public:
        Chicken(string name, int age, float weight , 
        float wingSpan, bool canFly)
        : Bird(name, age, weight, wingSpan, canFly){}

        void makeSound(){
            cout << "Cluck cluck!\n";
        }

        void fly(){
            cout << "Can't fly high!\n";
        }

        void eat(){
            cout << "Eat worm!\n";
        }

        void layEgg(){
            cout << "Born Brown Eggs!\n";
        }
};