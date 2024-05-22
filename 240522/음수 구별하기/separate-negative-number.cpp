#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::cout << n;
    if (n < 0) std::cout << "\nminus";
    return 0;
}