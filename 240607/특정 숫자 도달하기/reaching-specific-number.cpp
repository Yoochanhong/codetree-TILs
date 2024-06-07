#include <iostream>

int main() {
    int a[11];
    a[10] = 1e9;
    for (int i = 0; i < 10; i++) {
        std::cin >> a[i];
    }
    for (int i = 0, s = 0; i < 11; i++) {
        if (a[i] < 250) s += a[i];
        else {
            std::printf("%d %.1lf", s, (double)s / i);
            break;
        }
    }
    return 0;
}