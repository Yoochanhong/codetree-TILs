#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cout << i * n + j << " ";
        }
        std::cout << "\n";
    }
    return 0;
}