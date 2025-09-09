#include<iostream>

//int searchArray(int array[], int size, int element);
int searchArray(std::string array[], int size, std::string element);

int main()
{
    //int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::string foods[] = {"pizza", "hamburger", "hotdog"};
    //int size = sizeof(numbers)/sizeof(numbers[0]);
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    //int myNum;
    std::string myFood;

    std::cout << "Enter element to search for: " << '\n';
    //std::cin >> myNum;
    std::getline(std::cin, myFood);

    //index = searchArray(numbers, size, myNum);
    index = searchArray(foods, size, myFood);

    if(index != -1){
        //std::cout << myNum << " is at index " << index;
        std::cout << myFood << " is at index " << index;
    }
    else{
        //std::cout << myNum << " is not in the array";
        std::cout << myFood << " is not in the array";
    }

    return 0;
}
//int search Array(int array[], int size, int element){
int searchArray(std::string array[], int size, std::string element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}