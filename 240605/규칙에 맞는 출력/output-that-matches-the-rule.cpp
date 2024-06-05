#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n; j++) {
            if (j < i) continue;
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
    return 0;
}