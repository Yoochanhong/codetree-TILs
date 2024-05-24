#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << (a % 2 ? "odd" : "even") << "\n";
    std::cout << (b % 2 ? "odd" : "even");
    return 0;
}