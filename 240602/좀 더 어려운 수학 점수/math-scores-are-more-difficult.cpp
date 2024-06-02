#include <iostream>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if (a > c) std::cout << 'A';
    else if (a < c) std::cout << 'B';
    else std::cout << (b > d ? 'A' : 'B');
    return 0;
}