#include <iostream>

int main() {
    int n, b[1001] = {};
    std::cin >> n;
    for (int i = 0, a; i < n; i++) {
        std::cin >> a;
        b[a]++;
    }
    for (int i = 1000; i >= 0; i--) {
        if (b[i] == 1) {
            std::cout << i;
            return 0;
        }
    }
    std::cout << -1;
    return 0;
}