#include <iostream>
#include <string>
#include "Animal.h"

// Main function to test the classes
int main() {
    // Create an instance of Animal
    Animal genericAnimal("Generic", 5);
    genericAnimal.makeSound();
    // Create an instance of Dog
    Dog dog("Buddy", 3, "Golden Retriever");
    dog.makeSound();
    // Create an instance of Cat
    Cat cat("Whiskers", 2, "Black");
    cat.makeSound();
    // Additional testing
    // TODO: Set attributes using setters and test getters
    // TODO: Test polymorphism if desired
    return 0;
}
