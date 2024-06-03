#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0, k = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            k += (i & 1 ? 2 : 1);
            std::cout << k << " ";
        }
        std::cout << "\n";
    }
    return 0;
}