#include "Dog.cpp"
#include "Cat.cpp"
#include "Duck.cpp"
#include "Chicken.cpp"

int main() {

    Dog dog("Spike", 2, 3.5, true, "Husky", true);
    Cat cat("Tom", 3, 2.5, true);
    Duck duck("Quacker", 2, 2, 2.3, true, 5.6);
    Chicken chik("Olie", 2, 4, 2.3, false);

    dog.setBreed("Bull");
    dog.makeSound();
    dog.eat();
    dog.givesMilk();
    cout << endl;

    cat.makeSound();
    cat.eat();
    cat.givesMilk();
    cout << endl;

    duck.makeSound();
    duck.eat();
    duck.fly();
    duck.swim();
    duck.layEgg();
    duck.setSwimSpDuckeed(4.7);
    cout << "Swim with " << duck.getSwimSpeed() << " km/h.\n";
    cout << endl;

    chik.makeSound();
    chik.eat();
    chik.fly();
    chik.layEgg();
    cout << endl;
}