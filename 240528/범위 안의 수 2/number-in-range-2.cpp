#include <iostream>

int main() {
    int s = 0, c = 0;
    for (int i = 0, a; i < 10; i++) {
        std::cin >> a;
        if (a >= 0 && a <= 200) s += a, c++;
    }
    std::printf("%d %.1lf", s, (double) s / c);
    return 0;
}