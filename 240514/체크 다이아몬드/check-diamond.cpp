#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < (n - i) * 2; j++) {
            std::cout << (j % 2 ? " " : "*");
        }
        std::cout << "\n";
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < (n - i) * 2; j++) {
            std::cout << (j % 2 ? " " : "*");
        }
        std::cout << "\n";
    }
    return 0;
}