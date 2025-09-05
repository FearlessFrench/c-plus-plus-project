#include <iostream>

int main()
{
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    int grade = 75;
    /*
    if(grade >= 60)
    {
        std::cout << "You pass!";
    }
    else{
        std::cout << "You fail!";
    }
    */
    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";


    int number = 9;
    number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

    int number = 8;
    number % 2 ? std::cout << "ODD" : std::cout << "EVEN";


    bool hungry = true;
    hungry ? std::cout << "You are hungry!" : std::cout << "You are full!";

    bool hungy = false;
    std::cout << (hungry ? "You are hungry!" : "You are full!"); 
    
    return 0;
}