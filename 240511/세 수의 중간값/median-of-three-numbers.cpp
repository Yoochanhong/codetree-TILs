#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << (b > a && b < c ? 1 : 0);
    return 0;
}