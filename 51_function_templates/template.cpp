#include <iostream>
template <typename T, typename U>

//T max(T x, T y){
//auto max(T x, U y){
T max(T x, U y){
    return (x > y) ? x : y;
}

int main()
{
    std::cout << max(1, 2.1) << '\n';

    return 0;
}