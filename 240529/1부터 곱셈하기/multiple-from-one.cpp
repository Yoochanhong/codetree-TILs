#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1, s = 1; i <= 10; i++) {
        s *= i;
        if (s >= n) {
            std::cout << i;
            break;
        }
    }
    return 0;
}