#include <iostream>

int main() {
    int a = -1, b = 1e9;
    for (int i = 0, c; i < 10; i++) {
        std::cin >> c;
        if (a < c && c < 500) a = c;
        if (b > c && c > 500) b = c;
    }
    std::cout << a << " " << b;
    return 0;
}