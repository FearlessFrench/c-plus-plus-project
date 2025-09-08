#include <iostream>

int main()
{
    // Try i--, i+=2, i+=3

    // Count Down
    for(int i = 1; i <= 10; i++){
        std::cout << i << '\n';
    }

    // Count Up
    for(int i = 10; i >= 0; i--){
        std::cout << i << '\n';
    }

    std::cout << "HAPPY NEW YEAR!\n";
}