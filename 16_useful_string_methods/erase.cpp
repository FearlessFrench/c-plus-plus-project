#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: "; // Mitsuha Miyamizu
    std::getline(std::cin, name);

    name.erase(7, 15);

    std::cout << name; // Mitsuha

    return 0;
}