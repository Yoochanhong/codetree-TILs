#include <iostream>

int main() {
    for (int i = 0, a, s = 0; i < 11; i++) {
        std::cin >> a;
        if (!a || i == 10) {
            std::printf("%d %.1lf", s, (double)s / i);
            break;
        } else s += a;
    }
    return 0;
}