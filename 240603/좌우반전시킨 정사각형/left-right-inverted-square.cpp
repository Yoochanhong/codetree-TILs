#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = n, k = 1; i <= n * n; i += n, k++) {
        for (int j = i; j >= i / n; j -= k) {
            std::cout << j << " "; 
        }
        std::cout << "\n";
    }
    return 0;
}