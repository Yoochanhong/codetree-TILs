#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= 1; j--) {
            std::cout << "(" << i << "," << j<<") ";
        }
        std::cout << "\n";
    }
    return 0;
}