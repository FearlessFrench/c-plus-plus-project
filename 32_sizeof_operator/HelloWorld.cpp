#include <iostream>

int main()
{
    // sizeof() = determines the size in bytes of a:
    //            variable, data type, class, objects, etc.

    std::string name = "みつはちゃんはかっこいいです！"
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string students[] = {"Ekitike", "Isak", "Salah", "Chiesa", "Wirtz", "Gakpo"};

    //std::cout << sizeof(gpa) << " bytes\n";
    //std::cout << sizeof(grades)/sizeof(char) << " elements\n";
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    return 0;
}