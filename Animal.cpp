#include <iostream>
#include <string>

#include "Animal.h"

// Implementations of Animal class methods
// Default constructor
Animal::Animal() {
    // TODO: Initialize attributes
    name = "";
    age = 0;
}
// Parameterized constructor
Animal::Animal(const std::string& name, int age) {
    // TODO: Initialize attributes
    this->name = name;
    this->age = age;
}
// Getter for name
std::string Animal::getName() const {
    // TODO: Return the name
    return name;
}
// Setter for name
void Animal::setName(const std::string& name) {
// TODO: Set the name
    this->name = name;
}
// Getter for age
int Animal::getAge() const {
// TODO: Return the age
    return age;
}
// Setter for age
void Animal::setAge(int age) {
// TODO: Set the age
    this->age = age;
}
// Virtual method makeSound()
void Animal::makeSound() const {
// TODO: Implement a generic sound or leave empty
    std::cout << "animal noises" << std::endl;
}

std::ostream &operator <<(std::ostream &output,Animal &anim){
	output << "This animal's name is " << anim.name << " with an age of " << anim.age << " years." << std::endl;
	return output;
}


// Implementations of Dog class methods
// Default constructor
Dog::Dog() {
// TODO: Initialize attributes
    breed = "";
}
// Parameterized constructor
Dog::Dog(const std::string& name, int age, const std::string& breed) : Animal(name,
age) {
// TODO: Initialize breed
    this->breed = breed;
}
// Getter for breed
std::string Dog::getBreed() const {
// TODO: Return the breed
    return breed;
}
// Setter for breed
void Dog::setBreed(const std::string& breed) {
// TODO: Set the breed
    this->breed = breed;
}
// Override makeSound()
void Dog::makeSound() const {
// TODO: Output the sound a dog makes
    std::cout << "dog noises" << std::endl;
}

std::ostream &operator <<(std::ostream &output,Dog &anim){
	output << "This dog's name is " << anim.getName() << " with an age of " << anim.getAge() << " years and is a breed of " << anim.breed<< "." << std::endl;
	return output;
}

// Implementations of Cat class methods
// Default constructor
Cat::Cat() {
// TODO: Initialize attributes
    color = "";
}
// Parameterized constructor
Cat::Cat(const std::string& name, int age, const std::string& color) : Animal(name,
age) {
// TODO: Initialize color
    this->color = color;
}
// Getter for color
std::string Cat::getColor() const {
// TODO: Return the color
    return color;
}
// Setter for color
void Cat::setColor(const std::string& color) {
// TODO: Set the color
    this->color = color;
}
// Override makeSound()
void Cat::makeSound() const {
// TODO: Output the sound a cat makes
    std::cout << "cat noises" << std::endl;
}

std::ostream &operator <<(std::ostream &output,Cat &anim){
	output << "This cat's name is " << anim.getName() << " with an age of " << anim.getAge() << " years and is colored " << anim.color << "." << std::endl;
	return output;
}
