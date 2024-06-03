#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1, k = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cout << k++;
            k %= 10;
            if (!k) k++;
        }
        std::cout << "\n";
    }
    return 0;
}