#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cout << i << " * " << j << " = " << i * j;
            if (j < n) std::cout << ", ";
        }
        std::cout << "\n";
    }
    return 0;
}