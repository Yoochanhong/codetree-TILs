#include <iostream>

int main() {
    int n, i = 1, j = 0;
    std::cin >> n;
    while (i <= n && j < n) {
        std::cout << "(" << i << ", " << ++j << ") ";
        if ((i + j) % 4 == 0) std::cout << "\n";
        if (j == n) i++, j = 0;
    }
    return 0;
}