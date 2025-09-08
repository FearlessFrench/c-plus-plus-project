#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.insert(0, "@");  // @French
    //name.insert(1, "@");  // F@rench
    //name.insert(2, "@");  // Fr@ench

    std::cout << name;

    return 0;
}