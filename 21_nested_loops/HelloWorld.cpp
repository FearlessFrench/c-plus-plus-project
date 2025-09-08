#include <iostream>

int main()
{
    int rows;
    int columns;
    char symbol;

    /*
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 10; j++){
            std::cout << j << ' ';
        }
        std::cout << '\n'
    }
    */

    std::cout << "How many rows?: "; // 4
    std::cin >> rows;

    std::cout << "How many columns?: "; // 5
    std::cin >> columns;

    std::count << "Enter a symbol to use: "; // ¥ 
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }
    /*
    ¥¥¥¥¥
    ¥¥¥¥¥
    ¥¥¥¥¥
    ¥¥¥¥¥
    */
}