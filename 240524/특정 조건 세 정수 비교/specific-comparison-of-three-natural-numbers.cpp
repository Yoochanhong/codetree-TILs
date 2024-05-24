#include <iostream>

int main() {
    int a, b, c, m = 1e9;
    std::cin >> a >> b >> c;
    if (m > a) m = a;
    if (m > b) m = b;
    if (m > c) m = c;
    std::cout << (a == m) << " " << (a == b && b == c);
    return 0;
}