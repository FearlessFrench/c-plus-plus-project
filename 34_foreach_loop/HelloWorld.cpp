#include <iostream>

int main()
{
    // foreach loop = loop that eases the traversal over an
    //                iterable data set

    //std::string students[] = {"Wall-E", "EVA", "M-O"}

    /*
    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        std::cout << students[i] << '\n';
    }
    */

    //for(std::string student : students){
    //    std::cout << student << '\n';}


    int grades[] = {65, 72, 81, 93};

    for(int grade : grades){
        std::cout << grade << '\n';
    }

    return 0;
}