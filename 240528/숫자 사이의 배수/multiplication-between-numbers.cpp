#include <iostream>

int main() {
    int a, b, c = 0, s = 0;
    std::cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 || i % 7 == 0) s += i, c++;
    }
    std::printf("%d %.1lf", s, (double) s / c);
    return 0;
}