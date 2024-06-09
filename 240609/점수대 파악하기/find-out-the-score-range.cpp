#include <iostream>

int main() {
    int c[11] = {};
    for (int i = 0, a; i < 100; i++) {
        std::cin >> a;
        if (!a) break;
        c[a/10]++;
    }
    for (int i = 10; i >= 1; i--) {
        std::cout << i * 10 << " - " << c[i] << "\n";
    }
    return 0;
}