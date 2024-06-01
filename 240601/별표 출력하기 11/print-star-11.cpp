#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= 2 * n + 1; i++) {
        for (int j = 1; j <= 2 * n + 1; j++) {
            if (j % 2 == 0 && i % 2 == 0) std::cout << "  ";
            else std::cout << "* ";
        }
        std::cout << "\n";
    }
    return 0;
}