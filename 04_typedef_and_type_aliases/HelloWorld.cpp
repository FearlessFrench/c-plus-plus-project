#include <iostream>
#include <vector>

// This data type might be too long, let's come up with a new name
// pairlist_t (it's traditional to include the "_t")
//typedef std::vector<std::pair<std::string, int>> pairlist_t;

//typedef std::string text_t;

//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){
    /*
    pairlist_t pailist;

    text_t firstName = "みつは";
    std::cout << firstName << '\n';

    number_t age = 21;
    std::cout << age << '\n';
    */

    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type.
    //           New identifier for an existing type
    //           Helps with readability and reduces typos
    //           Use when there is a clear benefit
    //           Replaced with 'using' (work better w/ templates)

    return 0;
}