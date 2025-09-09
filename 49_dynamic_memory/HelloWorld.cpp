#include <iostream>

int main() {

    // dynamic memory = Memory that is allocated after the program
    //                  is already compiled & running.
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rather than the stack

    //                  Useful when we don't know how much memory
    //                  we will need. Makes our programs more flexible,
    //                  especially when accepting user input.

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    //pGrades = new char[5];
    pgrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout >> "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }
    
    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}