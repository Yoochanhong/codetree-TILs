#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    a += 87;
    b %= 10;
    std::cout << a << "\n" << b;
    return 0;
}