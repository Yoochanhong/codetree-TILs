#include <iostream>

int main() {
    int a;
    std::cin >> a;
    std::cout << (a < 0 ? "ice" : a > 99 ? "vapor" : "water");
    return 0;
}