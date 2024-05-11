#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if (n < 500) std::cout << "no";
    else if (n < 1000) std::cout << "pen";
    else if (n < 3000) std::cout << "mask";
    else std::cout << "book";
    return 0;
}