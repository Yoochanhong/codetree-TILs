#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1, s = 0; i <= n; i++) {
        s += i;
        if (s >= n) {
            std::cout << i;
            break;
        }
    }
    return 0;
}