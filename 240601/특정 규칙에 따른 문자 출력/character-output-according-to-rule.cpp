#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            std::cout << "  ";
        }
        for (int j = 1; j < i + 1; j++) {
            std::cout << "@ ";
        }
        std::cout << "\n";
    }
    for (int i = 1; i < n; i++) {
        for (int j = i; j < n; j++) {
            std::cout << "@ ";
        }
        std::cout << "\n";
    }
    return 0;
}