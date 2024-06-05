#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = n, k = 1; i >= 1; i--) {
        for (int j = i; j < n; j++) std::cout << "  ";
        for (int j = 1; j <= i; j++) {
            std::cout << k++ << " ";
            if (k == 10) k = 1;
        }
        std::cout << "\n";
    }
    return 0;
}