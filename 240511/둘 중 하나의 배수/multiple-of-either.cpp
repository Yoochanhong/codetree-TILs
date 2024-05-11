#include <iostream>

int main() {
    int a;
    std::cin >> a;
    std::cout << (a % 3 && a % 5 ? 0 : 1);
    return 0;
}