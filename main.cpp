#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Animal.h"

// Main function to test the classes
int main() {
    std::cout << "Creat instances and make sounds" << std::endl;
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
    std::cout << "test setters and getters" << std::endl;
    genericAnimal.setName("Generic2");
    genericAnimal.setAge(6);
    std::cout << genericAnimal.getName() << std::endl;
    std::cout << genericAnimal.getAge() << std::endl;

    dog.setBreed("Labrador");
    std::cout << dog.getBreed() << std::endl;

    cat.setColor("White");
    std::cout << cat.getColor() << std::endl;

    // TODO: Test polymorphism if desired
    std::cout  << "test polymorphism" << std::endl;
    std::vector<std::unique_ptr<Animal>> animals;
    animals.push_back(std::unique_ptr<Dog>(new Dog("teddy", 3, "poodle")));
    animals.push_back(std::unique_ptr<Cat>(new Cat("kitty", 2, "Black")));
    animals.push_back(std::unique_ptr<Animal>(new Animal("normal animal", 5)));

    std::cout << "ALL OF ANIMAL TYPE BUT DIFFRENT OUTPUT" << std::endl;

    for (auto& animal : animals) {
        std::cout << animal->getName() << std::endl;
        animal->makeSound();
    }

    return 0;
}
