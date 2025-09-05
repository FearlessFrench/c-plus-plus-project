#include <iostream>

int main()
{
    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // !  = reverses the logical state of its operand

    int temp;
    bool sunny = true;

    // LOGICAL OPERATOR: && 
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good!";
    }
    else{
        std::cout << "The temperatue is bad!";
    }

    // LOGICAL OPERATOR: ||
    f(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad!";
    }
    else{
        std::cout << "The temperatue is good!";
    }

    
    if(sunny){  // if(sunny == true)
        std::cout << "It is sunny outside!";    
    }
    else{
        std::cout << "It is cloudy outside!";
    }

    // LOGICAL OPERATOR: !
    if(!sunny){
        std::cout << "It is cloudy outside!";    
    }
    else{
        std::cout << "It is sunny outside!";
    }

    return 0;
}