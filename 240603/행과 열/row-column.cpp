#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            std::cout << i * j << " ";
        }
        std::cout << "\n";
    }
    return 0;
}