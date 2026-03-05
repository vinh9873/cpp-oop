#include "Dog.cpp"
#include "Cat.cpp"

int main(){

    Dog dog("Milu",2,3.5,true,"Husky",true);
    Cat cat("Tom",3,2.5,true);

    dog.makeSound();
    cat.makeSound();

}