#include <iostream>

int main() {

    // pointers = variable that stores a memory address of another variable
    //            sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    std::string name = "みつは";
    int age = 18;
    std::string freeRamen[5] = {"ramen1", "ramen2", "ramen3", "ramen4", "ramen5"}

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreeRamen = freeRamen;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFreeRamen << '\n';

    return 0;
}