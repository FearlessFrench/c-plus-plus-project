#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    /*Student(std::string x, int y, double z){
        name = x;
        age = y;
        gpa = z;
    }*/

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main() {

    // constructor = special method that is automatically called when an object is instantiated
    //               useful for assigning values to attributes as arguments

    Student student1("Mitsuha", 18, 3.5);
    Student student2("Taki", 18, 3.2);
    Student student3("Mai", 21, 4.0);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';

    return 0;
}