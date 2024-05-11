#include <iostream>

int main() {
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    std::cout << (a > b ? 1 : 0) << "\n";
    std::cout << (a > c ? 1 : 0) << "\n";
    std::cout << (a > d ? 1 : 0) << "\n";
    std::cout << (a > e ? 1 : 0);
    return 0;
}