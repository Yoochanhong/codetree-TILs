#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if (n > 79) std::cout << "pass";
    else std::cout << 80 - n << " more score";
    return 0;
}