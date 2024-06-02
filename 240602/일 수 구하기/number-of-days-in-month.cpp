#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if (n == 2) std::cout << "28";
    else if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12) std::cout << "31";
    else std::cout << "30";
    return 0;
}