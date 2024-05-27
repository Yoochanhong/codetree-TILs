#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a / b << ".";
    a %= b;
    a *= 10;
    for (int i = 0; i < 20; i++) {
        std::cout << (a / b ? a / b : 0);
        a = a % b ? a % b : 0;
        a *= 10;
    }
    return 0;
}