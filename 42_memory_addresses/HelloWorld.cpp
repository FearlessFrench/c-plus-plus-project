#include <iostream>

int main() {

    // memory address = a location in memory where data is stored
    //                  a memory address can accessed with & (address-of operator)

    std::string name = "Mitsuha";
    int age = 18;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    // 0xbd8a1ff600 >>> 814066169344
    // 0xbd8a1ff5fc >>> 814066169340
    // 0xbd8a1ff6fb >>> 814066169339
}