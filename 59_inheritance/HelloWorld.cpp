#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating\n";
    }
};
class Dog : public Animal{
    public:

    void bark(){
        std::cout << "The dog goes woof!\n";
    }
};
class Cat : public Animal{
    public:

    void meow(){
        std::cout << "The cat goes meow!\n";
    }
}

int main() {

    // inheritance = A class can recieve attributes and methods from another class
    //               Children classes inherit from a Parent class
    //               Helps to reuse similar code found within multiple classes

    Dog dog;

    std::cout << dog.alive << '\n'; // Output: 1 (True)

    dog.eat(); // This animal is eating
    dog.bark(); // The dog goes woof!
    
    cat.eat();
    cat.bark(); // ERROR as cat didn't have bark method
    cat.meow();

    return 0;
}