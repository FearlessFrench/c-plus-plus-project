#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: "; // Mitsuha Miyamizu
    std::getline(std::cin, name);

    std::cout << name.find(" "); // 7

    return 0;
}