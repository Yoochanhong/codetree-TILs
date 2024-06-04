#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    for (int i = n; i <= 8; i += 2) {
        for (int j = m; j >= n; j--) {
            std::cout << j << " * " << i << " = " << i * j;
            if (j > n) std::cout << " / ";
        }
        std::cout << "\n";
    }
    return 0;
}