#include <iostream>

void walk(int steps);

int main () {

    // recursion = a programming technique where a function
    //             invokes itself from within
    //             break a complex concept into a repeatable single step

    // (iterative vs recursive)

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //                 slower

    walk(100);

    return 0;
}
void walk(int steps){
    if(steps > 0){
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}