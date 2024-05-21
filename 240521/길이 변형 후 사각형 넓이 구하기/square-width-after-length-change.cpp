#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    a += 8;
    b *= 3;
    std::cout << a << "\n" << b << "\n" << a * b;
    return 0;
}