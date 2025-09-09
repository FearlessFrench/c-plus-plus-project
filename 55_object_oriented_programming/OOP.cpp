#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

int main() {

    // object = A collection of attributes and methods
    //          They can have characteristics and could perform actions
    //          Can be used to mimic real world items (ex. Phone, Book, Dog)
    //          Created from a class which acts as a "blue-print" to create object

    Human human1;
    Human human2;

    human1.name = "Rick Grimes";
    human1.occupation = "Police Officer"
    human1.age = 23;

    human2.name = "Daryl Dixon";
    human2.occupation = "Unemployed"
    human2.age = 21;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep(); 

    return 0;
}