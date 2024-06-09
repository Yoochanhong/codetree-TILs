#include <iostream>

int main() {
    int n, c[10] = {};
    std::cin >> n;
    for (int i = 0, a; i < n; i++) {
        std::cin >> a;
        c[a]++;
    }
    for (int i = 1; i < 10; i++) {
        std::cout << c[i] << "\n";
    }
    return 0;
}