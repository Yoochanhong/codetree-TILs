#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    for (int i = 1; i <= 9; i++) {
        for (int j = m; j >= n; j -= 2) {
            std::cout << j << " * " << i << " = " << i * j;
            if (j > n) std::cout << " / ";
        }
        std::cout << "\n";
    }
    return 0;
}