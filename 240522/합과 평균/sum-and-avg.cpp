#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::printf("%d %.1lf", a + b, (double)(a + b) / 2);
    return 0;
}