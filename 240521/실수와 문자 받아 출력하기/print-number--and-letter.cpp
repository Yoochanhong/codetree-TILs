#include <iostream>

int main() {
    double a, b;
    char c;
    std::cin >> c >> a >> b;
    std::printf("%c\n%.2lf\n%.2lf", c, a, b);
    return 0;
}