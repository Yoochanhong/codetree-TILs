#include <iostream>

int main() {
    int n, c = 0, s = 0;
    std::cin >> n;
    for (int i = 0, a; i < n; i++) {
        std::cin >> a;
        s += a;
        c++;
    }
    std::printf("%d %.1lf", s, (double) s / c);
    return 0;
}