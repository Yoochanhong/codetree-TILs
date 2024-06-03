#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1) std::cout << "* ";
            else if (j % 2 == 0 && j >= i) std::cout << "* ";
            else std::cout << "  ";
        }
        std::cout << "\n";
    }
    return 0;
}