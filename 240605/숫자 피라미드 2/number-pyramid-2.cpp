#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0, k = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << k++ << " ";
        }
        std::cout << "\n";
    }
    return 0;
}