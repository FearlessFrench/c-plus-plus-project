#include <iostream>

void walk(int steps);

int main () {

    // In software, a stack overflow occurs if the call stack pointer exceeds the stack bound.
    // The call stack may consist of a limited amount of address space, often determined at the start of the program.
    // The size of the call stack depends on many factors, including the programming language. machine architecture, multi-threading, and amount of available memory.
    // When a program attempts to use more space than is available on the call stack (that is, when it attempts to access memory beyond the call stack's bounds),
    // which is essentially a buffer overflow), the stack is said to overflow, typically resulting in a program crash

    walk(100);

    return 0;
}
void walk(int steps){
        std::cout << "You take a step!\n";
        walk(steps);
}