#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            std::cout << i << " * " << j << " = " << i * j;
            std::cout << (j < n - i + 1 ? " / " : "\n");
        }
    }
    return 0;
}