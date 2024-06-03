#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= 1; j--) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
    return 0;
}