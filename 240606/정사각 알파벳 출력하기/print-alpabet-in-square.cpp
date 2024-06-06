#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 65; j < n + 65; j++) {
            std::printf("%c", i * n + j);
        }
        std::cout << "\n";
    }
    return 0;
}