#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            std::cout << "C";
            return 0;
        }
    }
    std::cout << "P";
    return 0;
}