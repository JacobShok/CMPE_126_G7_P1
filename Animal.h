#include <string>

// Base class
class Animal {
private:
    std::string name;
    int age;
public:
    // Default constructor
    Animal();
    // Parameterized constructor
    Animal(const std::string& name, int age);
    // Getter for name
    std::string getName() const;
    // Setter for name
    void setName(const std::string& name);
    // Getter for age
    int getAge() const;
    // Setter for age
    void setAge(int age);
    // Virtual method makeSound()
    virtual void makeSound() const;
    //Extraction overload for animal class
    friend std::ostream &operator <<(std::ostream &output,Animal &anim);
};

// Derived class Dog
class Dog : public Animal {
private:
    std::string breed;
public:
    // Default constructor
    Dog();
    // Parameterized constructor
    Dog(const std::string& name, int age, const std::string& breed);
    // Getter for breed
    std::string getBreed() const;
    // Setter for breed
    void setBreed(const std::string& breed);
    // Override makeSound()
    void makeSound() const override;
    //Extaction operator overload for dog subclass
    friend std::ostream &operator <<(std::ostream &output,Dog &anim);
};

// Derived class Cat
class Cat : public Animal {
private:
    std::string color;
public:
    // Default constructor
    Cat();
    // Parameterized constructor
    Cat(const std::string& name, int age, const std::string& color);
    // Getter for color
    std::string getColor() const;
    // Setter for color
    void setColor(const std::string& color);
    // Override makeSound()
    void makeSound() const override;
    //Extraction operator overload for cat subclass
    friend std::ostream &operator <<(std::ostream &output,Cat &anim);
};

