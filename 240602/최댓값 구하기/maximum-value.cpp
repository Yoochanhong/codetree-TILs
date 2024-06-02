#include <iostream>

int main() {
    int a, b, c, r = -101;
    std::cin >> a >> b >> c;
    if (r < a) r = a;
    if (r < b) r = b;
    if (r < c) r = c;
    std::cout << r;
    return 0;
}