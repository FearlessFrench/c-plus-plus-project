#include <ionstream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main() {

    // Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.

    using namespace first;
    //using namespace second;
    

    int x = 0;
    //int x = 1; gives ERROR because x is the same used entity

    std::cout << x; // 1
    std::cout << first::x; // 1
    std::cout << second::x; // 2

    // We don't need to include std::cout in output if we declare:
    using std::cout;
    using std::string;
    //using namespace std; is not recommend (possible name conflict)

    std::string name = "はまだきんご"
    cout << "Hello " << name;

    return 0;
}