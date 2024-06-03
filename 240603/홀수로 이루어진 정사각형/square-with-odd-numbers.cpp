#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 11; i < 11 + n * 2; i += 2) {
        for (int j = i; j < i + n * 2; j += 2) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
    return 0;
}