#include "Mammal.cpp"

class Cat : public Mammal {
public:

    Cat(string name, int age, float weight, bool hasFur)
        : Mammal(name, age, weight, hasFur) {}

    void makeSound() {
        cout << "Meow Meow\n";
    }

    void move() {
        cout << "Walk and jump\n";
    }
};