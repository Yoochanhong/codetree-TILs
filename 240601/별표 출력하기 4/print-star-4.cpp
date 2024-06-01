#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    return 0;
}