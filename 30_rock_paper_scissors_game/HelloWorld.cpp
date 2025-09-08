#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice()
    std::cout << "Computer's choice: "
    showChoice(computer);

    return 0;
}
char getUserChoice(){
    std::cout << "Rock-Paper-Scissors Game!\n";

    do{
        std::cout << "Choose one of the following\n";
        std::cout << "*************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    

    return 0;
}
char getComputerChoice(){
    
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    
    return 0;
}
void showChoice(char choice){
    
    switch(choice){
        case 'r': std::cout << "Rock\n";
                  break;
        case 'p': std::cout << "Paper\n";
                  break;
        case 's': std::cout << "Scissors\n";
                  break;
    }
    
    return 0;
}
void chooseWinner(char player, char computer){
    
    switch(player){
        case 'r':   if(computer == 'r'){
                        std::cout << "You win!\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "It's a tie!\n";
                    }
                    else{
                        std::cout << "You lose!\n";
                    }
                    break;
        case 's':   if(computer == 'r'){
                        std::cout << "You lose!\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "You win!\n";
                    }
                    else{
                        std::cout << "It's a tie!\n";
                    }
                    break;
    }
    
    return 0;
}