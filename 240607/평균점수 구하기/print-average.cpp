#include <iostream>

int main() {
    double s, a;
    for (int i = 0; i < 8; i++) {
        std::cin >> a;
        s += a;
    }
    std::printf("%.1lf", s / 8);
    return 0;
}