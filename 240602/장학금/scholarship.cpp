#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << (a >= 90 ? b >= 95 ? 100000 : b >= 90 ? 50000 : 0 : 0);
    return 0;
}