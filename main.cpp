#include "include/Dog.h"
#include "include/Cat.h"
#include "include/Duck.h"
#include "include/Chicken.h"
#include "include/Crocodile.h"

int main()
{

    Animal *dog = new Dog("Spike", 10, 3.5, true, "Husky", true);
    Animal *cat = new Cat("Tom", 8, 2.8, true, 2.7);
    Animal *duck = new Duck("Donald", 8, 3, 2.1, 4.2);
    Animal *chic = new Chicken("Olie", 4, 3, 2.1);
    Animal *cro = new Crocodile("Croco", 30, 65.8, true, 2.8);

    dog->makeSound();
    dog->eat();
    dog->move();
    ((Dog*)dog)->bark();
    ((Dog*)dog)->givesMilk();
    cout << endl;

    cat->makeSound();
    cat->eat();
    cat->move();
    dynamic_cast<Cat*>(cat)->jump();
    cout << endl;

    duck->makeSound();
    duck->eat();
    duck->move();
    dynamic_cast<Duck*>(duck)->fly();
    dynamic_cast<Duck*>(duck)->eggLayer();
    dynamic_cast<Duck*>(duck)->swim();
    cout << endl;

    chic->makeSound();
    chic->eat();
    chic->move();
    dynamic_cast<Chicken*>(chic)->fly();
    ((Chicken*)chic)->crowDawn();
    ((Chicken*)chic)->eggLayer();
    cout << endl;

    cro->makeSound();
    cro->eat();
    cro->move();
    ((Crocodile*)cro)->crawl();
    ((Crocodile*)cro)->eggLayer();
    ((Crocodile*)cro)->swim();
}