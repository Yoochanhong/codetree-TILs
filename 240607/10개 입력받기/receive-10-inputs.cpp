#include <iostream>

int main() {
    for (int i = 0, a, s = 0; i < 10; i++) {
        std::cin >> a;
        if (!a) {
            std::printf("%d %.1lf", s, (double)s / i);
        } else s += a;
    }
    return 0;
}