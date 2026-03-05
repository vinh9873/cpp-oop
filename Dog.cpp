#include "Mammal.cpp"

class Dog : public Mammal {
private:
    string breed;
    bool isGuardDog;

public:

    Dog(string name, int age, float weight, bool hasFur,
        string breed, bool isGuardDog)
        : Mammal(name, age, weight, hasFur)
    {
        this->breed = breed;
        this->isGuardDog = isGuardDog;
    }

    void setBreed(string breed){
        this->breed = breed;
    }

    string getBreed(){
        return breed;
    }

    void makeSound() {
        cout << "Woof Woof!\n";
    }

    void move() {
        cout << "Run by 4 legs\n";
    }

    void eat(){
        cout << "Eat bone!\n";
    }

    void givesMilk() {
        cout << "Dog breastfeed!\n";
    }

    // void printInfo(){
    //     cout << breed << endl;
    // }

};