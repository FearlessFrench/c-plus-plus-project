#include <iostream>

int main()
{
    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    // Random Number between 1 and X number
    //int num = (rand() % 6) + 1;  // DICE GAME
    //int num = (rand() % 10) + 1;  // CARD GAME
    //int num = (rand() % 100) + 1;  // NUMBER GUESSING GAME

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}