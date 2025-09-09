#include <iostream>

int main()
{
    // Null value = a special value that means something has no value.
    //              When a pointer is holding a null value,
    //              that pointer is not pointing at anything (null points)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assigned!\n";
    //std::cout << *pointer  // WHAT THE HELL DID YOU DO?!?!?!
    }
    else{
        std::cout << "address was assigned!\n";
        //std::cout << *pointer
    }

    return 0;
}