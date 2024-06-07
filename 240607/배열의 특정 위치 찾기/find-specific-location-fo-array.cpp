#include <iostream>

int main() {
    int s = 0, s1 = 0;
    for (int i = 1, a; i <= 10; i++) {
        std::cin >> a;
        if (~i & 1) s += a;
        if (i % 3 == 0) s1 += a;
    }
    std::printf("%d %.1lf", s, (double)s1 / 3);
    return 0;
}