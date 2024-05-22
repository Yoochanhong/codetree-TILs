#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    a += b;
    b += a;
    std::cout << a << " " << b;
    return 0;
}