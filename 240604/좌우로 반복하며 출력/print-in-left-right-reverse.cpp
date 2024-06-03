#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << (i & 1 ? n - j : j + 1);
        }
        std::cout << "\n";
    }
    return 0;
}