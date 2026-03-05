#include "Bird.cpp"

class Duck : public Bird {
    private:
        float swimSpeed;

    public:
        Duck(string name, int age, float weight , 
        float wingSpan, bool canFly, float swimSpeed)
        : Bird(name, age, weight, wingSpan, canFly){
            
            this->swimSpeed = swimSpeed;
        }
        void setSwimSpDuckeed(float sp){
            if(sp > 0){
                swimSpeed = sp;
            }
        }

        float getSwimSpeed(){
            return swimSpeed;
        }

        void makeSound(){
            cout << "Quac Quac!\n";
        }

        void swim(){
            cout << "Swim in the lake!\n";
        }

        void eat(){
            cout << "Eat vegetables!\n";
        }

        void fly(){
            cout << "Fly in the sky!\n";
        }

        void layEgg(){
            cout << "Born White Eggs!\n";
        }
};