#include <iostream>

int main()
{
    // type conversion = conversion a value of one data type to another
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type (int) x

    //double x = (int) 3.14;
    //std::cout << x;

    //char x = 100
    //std::cout << x;
    // ASCII TABLE: d

    //std::cout << (char) 100;
    // ASCII TABLE: d

    int correct = 8;
    int questions = 10;
    double score = correct/questions * 100;

    std::cout << score << "%";

    return 0;
}