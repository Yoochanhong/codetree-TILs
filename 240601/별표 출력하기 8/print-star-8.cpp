#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2) std::cout << "*\n";
        else {
            for (int j = 1; j <= i; j++) {
                std::cout << "* ";
            }
            std::cout << "\n";
        }
    }
    return 0;
}