#include "mammals/Dog.cpp"
#include "mammals/Cat.cpp"
#include "birds/Duck.cpp"
#include "birds/Chicken.cpp"
#include "reptile/Crocodile.cpp"

int main() {

    Dog dog("Spike", 2, 3.5, true, "Husky", true);
    Cat cat("Tom", 3, 2.5, true);
    Duck duck("Quacker", 2, 2, 2.3, true, 5.6);
    Chicken chic("Olie", 2, 4, 2.3, false);
    Crocodile cro("Croco", 15, 50.8, true, true, 2.5);

    dog.setBreed("Bull");
    dog.makeSound();
    dog.eat();
    dog.move();
    dog.givesMilk();
    cout << endl;

    cat.makeSound();
    cat.eat();
    cat.move();
    dog.givesMilk();
    cout << endl;

    duck.makeSound();
    duck.eat();
    duck.fly();
    duck.swim();
    duck.layEgg();
    duck.setSwimSpDuckeed(4.7);
    cout << "Swim with " << duck.getSwimSpeed() << " km/h.\n";
    cout << endl;

    chic.makeSound();
    chic.eat();
    chic.fly();
    chic.layEgg();
    cout << endl;

    cro.makeSound();
    cro.eat();
    cro.layEgg();
    cro.move();
    cro.swim();
}