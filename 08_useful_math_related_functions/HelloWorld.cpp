#include <iostream>

int main()
{
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << z; // 4

    z = std::min(x, y);
    std::cout << z; // 3

    z = pow(2, 3);
    std::cout << z; // 8
    
    z = pow(2, 4);
    std::cout << z; // 16
    
    z = sqrt(9);
    std::cout << z; // 3

    z = abs(-3);
    std::cout << z; // 3

    double x = 3.14;
    z = round(x);
    std::cout << z; // 3

    z = ceil(x);
    std::cout << z; // 4

    double x = 3.99;
    z = floor(x);
    std::cout << z; // 3


    return
}