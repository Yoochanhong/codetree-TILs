#include <iostream>

int main() {
    int a, b;
    char c, d;
    std::cin >> a >> c >> b >> d;
    std::cout << (a > 18 && c == 'M' || b > 18 && d == 'M' ? 1 : 0);
    return 0;
}