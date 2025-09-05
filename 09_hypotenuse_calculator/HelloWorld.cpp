#include <iostream>
#include <cmath>

int main()
{
    /*
    RIGHT ANGLED TRIANGLE
    Solve for hypotenuse ▼
    
    c = sqrt((a**2) + (b**2))

    a = ["Enter value"]
    b = ["Enter value"]
    */

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a; // User input a

    std::cout << "Enter size B: ";
    std::cin >> b; // User input b

    //a = pow(a, 2);
    //b = pow(b, 2);
    //c = sqrt(a + b);

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "side C: " << c;

    return 0;
}