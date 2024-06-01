#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1, j = n; i <= n; i++, j--) {
        for (int k = 1; k <= i; k++) {
            std::cout << "* ";
        }
        std::cout << "\n";
        for (int k = 1; k <= j; k++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    return 0;
}