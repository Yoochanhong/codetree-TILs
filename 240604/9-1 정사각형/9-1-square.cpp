#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0, k = 9; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << k--;
            if (!k) k = 9;
        }
        std::cout << "\n";
    }
    return 0;
}