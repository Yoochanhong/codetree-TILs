#include <iostream>

int main() {
    int c[7] = {};
    for (int i = 0, a; i < 10; i++) {
        std::cin >> a;
        c[a]++;
    }
    for (int i = 1; i <= 6; i++) {
        std::cout << i << " - " << c[i] << "\n";
    }
    return 0;
}