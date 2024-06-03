#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0, k = 2; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << k << " ";
            k %= 8;
            k += 2;
        }
        std::cout << "\n";
    }
    return 0;
}